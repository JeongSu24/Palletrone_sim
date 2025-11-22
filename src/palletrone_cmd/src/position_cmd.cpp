#include <chrono>
#include <cmath>
#include <rclcpp/rclcpp.hpp>
#include <palletrone_interfaces/msg/cmd.hpp>

static constexpr double X_CMD = 0.0;
static constexpr double Y_CMD = 0.0;
static constexpr double Z_CMD = 6.0;
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
    Cmd msg;

    // 시간 계산이나 궤적 계산 불필요

    // 목표 위치를 상수로 고정
    double x = 0.0;
    double y = 0.0;
    double z = 2.0;  // 높이 3m

    msg.pos_cmd[0] = static_cast<float>(x);
    msg.pos_cmd[1] = static_cast<float>(y);
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
