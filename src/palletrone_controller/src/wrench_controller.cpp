#include <rclcpp/rclcpp.hpp>
#include <palletrone_interfaces/msg/cmd.hpp>
#include <palletrone_interfaces/msg/palletrone_state.hpp>
#include <palletrone_interfaces/msg/wrench.hpp>
#include <Eigen/Dense>
#include <algorithm>
#include <cmath>
#include <functional>

class WrenchController : public rclcpp::Node
{
public:
  WrenchController() : rclcpp::Node("wrench_controller")
  {
    const double KP_POS[3] = {30.0, 30.0, 30.00};
    const double KI_POS[3] = {0.00, 0.00, 0.03};
    const double KD_POS[3] = {5.00, 5.00, 1.50};
    const double I_MIN_POS = -5.0, I_MAX_POS = 5, OUT_MIN_POS = -200.0, OUT_MAX_POS = 200.0;

    const double KP_ATT[3] = {50.00, 50.00, 30.00};
    const double KI_ATT[3] = {10.00, 10.00, 10.00};
    const double KD_ATT[3] = {10.00, 10.00, 10.00};
    const double I_MIN_ATT = -1.0, I_MAX_ATT = 1.0, OUT_MIN_ATT = -20.0, OUT_MAX_ATT = 20.0;

    auto init_pid = [](double kp, double ki, double kd, double i_min, double i_max, double out_min, double out_max) -> std::function<double(double,double,double,double)>
    {
      double iacc = 0.0;
      return [=](double ref, double cur, double dcur, double dt) mutable
      {
        if (dt <= 0.0) dt = 1e-3;
        const double e = ref - cur;
        const double de = -dcur;
        iacc += ki * e * dt;
        iacc = std::clamp(iacc, i_min, i_max);
        double u = kp*e + iacc + kd*de;
        return std::clamp(u, out_min, out_max);
      };
    };

    pid_pos_[0] = init_pid(KP_POS[0], KI_POS[0], KD_POS[0], I_MIN_POS, I_MAX_POS, OUT_MIN_POS, OUT_MAX_POS);
    pid_pos_[1] = init_pid(KP_POS[1], KI_POS[1], KD_POS[1], I_MIN_POS, I_MAX_POS, OUT_MIN_POS, OUT_MAX_POS);
    pid_pos_[2] = init_pid(KP_POS[2], KI_POS[2], KD_POS[2], I_MIN_POS, I_MAX_POS, OUT_MIN_POS, OUT_MAX_POS);

    pid_att_[0] = init_pid(KP_ATT[0], KI_ATT[0], KD_ATT[0], I_MIN_ATT, I_MAX_ATT, OUT_MIN_ATT, OUT_MAX_ATT);
    pid_att_[1] = init_pid(KP_ATT[1], KI_ATT[1], KD_ATT[1], I_MIN_ATT, I_MAX_ATT, OUT_MIN_ATT, OUT_MAX_ATT);
    pid_att_[2] = init_pid(KP_ATT[2], KI_ATT[2], KD_ATT[2], I_MIN_ATT, I_MAX_ATT, OUT_MIN_ATT, OUT_MAX_ATT);

    this->declare_parameter("mass", 5.8940);
    this->declare_parameter("grav", 9.81);
    this->get_parameter("mass", mass_);
    this->get_parameter("grav", grav_);

    RCLCPP_INFO(this->get_logger(), "wrench_controller params: mass=%.3f grav=%.3f", mass_, grav_);

    sub_cmd_ = this->create_subscription<palletrone_interfaces::msg::Cmd>("/cmd", 10, std::bind(&WrenchController::onCmd, this, std::placeholders::_1));
    sub_state_ = this->create_subscription<palletrone_interfaces::msg::PalletroneState>("/palletrone_state", 10, std::bind(&WrenchController::onState, this, std::placeholders::_1));
    pub_wrench_ = this->create_publisher<palletrone_interfaces::msg::Wrench>("/wrench", 10);

    last_time_ = this->now();
  }

private:
  void onCmd(const palletrone_interfaces::msg::Cmd::SharedPtr msg)
  {
    pos_cmd_ << static_cast<double>(msg->pos_cmd[0]), static_cast<double>(msg->pos_cmd[1]), static_cast<double>(msg->pos_cmd[2]); have_cmd_ = true;
  }

  void onState(const palletrone_interfaces::msg::PalletroneState::SharedPtr msg)
  {
    pos_ << static_cast<double>(msg->pos[0]), static_cast<double>(msg->pos[1]), static_cast<double>(msg->pos[2]); 
    vel_ << static_cast<double>(msg->vel[0]), static_cast<double>(msg->vel[1]), static_cast<double>(msg->vel[2]); 
    rpy_ << static_cast<double>(msg->rpy[0]), static_cast<double>(msg->rpy[1]), static_cast<double>(msg->rpy[2]); 
    w_body_ << static_cast<double>(msg->w_rpy[0]), static_cast<double>(msg->w_rpy[1]), static_cast<double>(msg->w_rpy[2]); 

    const auto now = this->now();
    double dt = (now - last_time_).seconds();
    last_time_ = now;
    
    if (!(dt > 0.0) || dt > 0.2) dt = 1.0/400.0;
    have_state_ = true;
    
    const Eigen::Vector3d pos_ref = have_cmd_ ? pos_cmd_ : pos_;

    Eigen::Vector3d u_pos;
    u_pos.x() = pid_pos_[0](pos_ref.x(), pos_.x(), vel_.x(), dt);
    u_pos.y() = pid_pos_[1](pos_ref.y(), pos_.y(), vel_.y(), dt);
    u_pos.z() = pid_pos_[2](pos_ref.z(), pos_.z(), vel_.z(), dt);
    
    Eigen::Vector3d F_world(u_pos.x(), u_pos.y(), u_pos.z() + mass_ * grav_);
    const double r = rpy_.x(), p = rpy_.y(), y = rpy_.z();
    const double sr = std::sin(r), cr = std::cos(r);
    const double sp = std::sin(p), cp = std::cos(p);
    const double sy = std::sin(y), cy = std::cos(y);

    Eigen::Matrix3d R_WB;
    R_WB <<  cy*cp,  cy*sp*sr - sy*cr,  cy*sp*cr + sy*sr,
             sy*cp,  sy*sp*sr + cy*cr,  sy*sp*cr - cy*sr,
               -sp,              cp*sr,              cp*cr;

    const Eigen::Vector3d F_body = R_WB.transpose()*F_world;

    auto wrap_err = [](double ref, double cur){
    	return std::atan2(std::sin(ref - cur), std::cos(ref - cur));
    };

    double roll_ref  = 0.0;
    double pitch_ref = 0.0;
    double yaw_ref   = 0.0;

    double roll_ref_equiv  = rpy_.x() + wrap_err(roll_ref,  rpy_.x());
    double pitch_ref_equiv = rpy_.y() + wrap_err(pitch_ref, rpy_.y());
    double yaw_ref_equiv   = rpy_.z() + wrap_err(yaw_ref,   rpy_.z());
   
    Eigen::Vector3d M_body;
    M_body.x() = pid_att_[0](roll_ref_equiv,  rpy_.x(), w_body_.x(), dt);
    M_body.y() = pid_att_[1](pitch_ref_equiv, rpy_.y(), w_body_.y(), dt);
    M_body.z() = pid_att_[2](yaw_ref_equiv,   rpy_.z(), w_body_.z(), dt);

    palletrone_interfaces::msg::Wrench w;
    w.moment[0] = (float)M_body.x();
    w.moment[1] = (float)M_body.y();
    w.moment[2] = (float)M_body.z();
    
    
    w.force[0]  = (float)F_body.x();
    w.force[1]  = (float)F_body.y();
    w.force[2]  = (float)F_body.z();

    pub_wrench_->publish(w);
  }


  rclcpp::Subscription<palletrone_interfaces::msg::Cmd>::SharedPtr sub_cmd_;
  rclcpp::Subscription<palletrone_interfaces::msg::PalletroneState>::SharedPtr sub_state_;
  rclcpp::Publisher<palletrone_interfaces::msg::Wrench>::SharedPtr pub_wrench_;
  rclcpp::Time last_time_;

  Eigen::Vector3d pos_cmd_{Eigen::Vector3d::Zero()};
  Eigen::Vector3d pos_{Eigen::Vector3d::Zero()};
  Eigen::Vector3d vel_{Eigen::Vector3d::Zero()};
  Eigen::Vector3d rpy_{Eigen::Vector3d::Zero()};
  Eigen::Vector3d w_body_{Eigen::Vector3d::Zero()};

  std::function<double(double,double,double,double)> pid_pos_[3];
  std::function<double(double,double,double,double)> pid_att_[3];

  double mass_{5.8940};
  double grav_{9.81};

  bool have_state_{false}, have_cmd_{false};
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<WrenchController>());
  rclcpp::shutdown();
  return 0;
}
