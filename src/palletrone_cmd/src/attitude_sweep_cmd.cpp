#include <chrono>
#include <cmath>
#include <string>
#include <rclcpp/rclcpp.hpp>
#include <palletrone_interfaces/msg/attitude_cmd.hpp>

using namespace std::chrono_literals;

class AttitudeSweepCmd : public rclcpp::Node
{
public:
  AttitudeSweepCmd()
  : rclcpp::Node("attitude_sweep_cmd"),
    current_deg_(0.0)
  {
    this->declare_parameter<std::string>("axis", "roll");
    this->declare_parameter<double>("max_deg", 20.0);
    this->declare_parameter<double>("speed_deg_s", 2.0);
    this->declare_parameter<double>("publish_hz", 400.0);

    axis_        = this->get_parameter("axis").as_string();
    max_deg_     = this->get_parameter("max_deg").as_double();
    speed_deg_s_ = this->get_parameter("speed_deg_s").as_double();
    double publish_hz = this->get_parameter("publish_hz").as_double();

    if (publish_hz <= 0.0) {
      RCLCPP_WARN(this->get_logger(),
                  "publish_hz <= 0.0 이라서 50Hz로 강제 설정합니다.");
      publish_hz = 50.0;
    }

    // /att_cmd publisher
    pub_att_cmd_ = this->create_publisher<palletrone_interfaces::msg::AttitudeCmd>(
      "/att_cmd", 10);

    auto period = std::chrono::duration<double>(1.0 / publish_hz);
    last_time_ = this->now();

    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::nanoseconds>(period),
      std::bind(&AttitudeSweepCmd::onTimer, this));

    RCLCPP_INFO(
      this->get_logger(),
      "AttitudeSweepCmd started. axis=%s, max_deg=%.1f, speed_deg_s=%.2f, publish_hz=%.1f",
      axis_.c_str(), max_deg_, speed_deg_s_, publish_hz);
  }

private:
  void onTimer()
  {
    rclcpp::Time now = this->now();
    double dt = (now - last_time_).seconds();
    if (dt <= 0.0 || dt > 1.0) {
      dt = 0.02;  // 초기 이상값 방지
    }
    last_time_ = now;

    if (current_deg_ < max_deg_) {
      current_deg_ += speed_deg_s_ * dt;
      if (current_deg_ > max_deg_) {
        current_deg_ = max_deg_;
      }
    }

    double angle_deg = current_deg_;
    double angle_rad = angle_deg * M_PI / 180.0;

    palletrone_interfaces::msg::AttitudeCmd msg;
    msg.roll_ref  = 0.0f;
    msg.pitch_ref = 0.0f;
    msg.yaw_ref   = 0.0f;

    if (axis_ == "roll") {
      msg.roll_ref = static_cast<float>(angle_rad);
    } else if (axis_ == "pitch") {
      msg.pitch_ref = static_cast<float>(angle_rad);
    } else if (axis_ == "yaw") {
      msg.yaw_ref = static_cast<float>(angle_rad);
    } else {
      RCLCPP_WARN_THROTTLE(
        this->get_logger(),
        *this->get_clock(), 2000,
        "Unknown axis parameter: '%s'. 유효한 값은 'roll', 'pitch', 'yaw' 입니다.",
        axis_.c_str());
    }

    pub_att_cmd_->publish(msg);
  }

private:
  rclcpp::Publisher<palletrone_interfaces::msg::AttitudeCmd>::SharedPtr pub_att_cmd_;
  rclcpp::TimerBase::SharedPtr timer_;

  std::string axis_;
  double max_deg_;
  double speed_deg_s_;
  double current_deg_;
  rclcpp::Time last_time_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AttitudeSweepCmd>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

