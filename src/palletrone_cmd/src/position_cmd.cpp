#include <chrono>
#include <cmath>
#include <rclcpp/rclcpp.hpp>
#include <palletrone_interfaces/msg/cmd.hpp>

static constexpr double X_CMD = 0.0;
static constexpr double Y_CMD = 0.0;
static constexpr double Z_CMD = 1.0;
static constexpr int    RATE_HZ = 400;

class PositionCmd : public rclcpp::Node {
public:
  PositionCmd() : rclcpp::Node("position_cmd")
  {
    using palletrone_interfaces::msg::Cmd;

    pub_cmd_ = this->create_publisher<Cmd>("/cmd", 10);

    auto period_ms = std::chrono::milliseconds(1000 / (RATE_HZ > 0 ? RATE_HZ : 1));
    t0_ = std::chrono::steady_clock::now();
    timer_ = this->create_wall_timer(period_ms,std::bind(&PositionCmd::onTick, this));

  }

private:
  void onTick(){
    using palletrone_interfaces::msg::Cmd;

    // 경과 시간 계산
    auto now = std::chrono::steady_clock::now();
    double t = std::chrono::duration<double>(now - t0_).count();  // [sec]

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    if (t < 5.0) {
      // 처음 5초: z만 명령
      x = 0.0;
      y = 0.0;
      z = Z_CMD;
    } else if (t < 10.0) {
      // 다음 5초: x 추가
      x = X_CMD;
      y = 0.0;
      z = Z_CMD;
    } else {
      // 10초 이후: y까지 추가
      x = X_CMD;
      y = Y_CMD;
      z = Z_CMD;
    }

    Cmd msg;
    // 시간 계산이나 궤적 계산 불필요

    // 목표 위치를 상수로 고정
   /*double x = X_CMD;
    double y = Y_CMD;
    double z = Z_CMD;  // 높이 3m*/

    msg.pos_cmd[0] = static_cast<float>(x);
    msg.pos_cmd[1] = static_cast<float>(y)                       ;
    msg.pos_cmd[2] = static_cast<float>(z);

    pub_cmd_->publish(msg);
  }

  rclcpp::Publisher<palletrone_interfaces::msg::Cmd>::SharedPtr pub_cmd_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::chrono::steady_clock::time_point t0_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PositionCmd>());
  rclcpp::shutdown();
  return 0;
}
