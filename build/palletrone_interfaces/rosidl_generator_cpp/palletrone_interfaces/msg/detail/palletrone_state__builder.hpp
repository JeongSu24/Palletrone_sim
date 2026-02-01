// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__BUILDER_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "palletrone_interfaces/msg/detail/palletrone_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace palletrone_interfaces
{

namespace msg
{

namespace builder
{

class Init_PalletroneState_servo
{
public:
  explicit Init_PalletroneState_servo(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  ::palletrone_interfaces::msg::PalletroneState servo(::palletrone_interfaces::msg::PalletroneState::_servo_type arg)
  {
    msg_.servo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_a_rpy
{
public:
  explicit Init_PalletroneState_a_rpy(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  Init_PalletroneState_servo a_rpy(::palletrone_interfaces::msg::PalletroneState::_a_rpy_type arg)
  {
    msg_.a_rpy = std::move(arg);
    return Init_PalletroneState_servo(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_w_rpy
{
public:
  explicit Init_PalletroneState_w_rpy(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  Init_PalletroneState_a_rpy w_rpy(::palletrone_interfaces::msg::PalletroneState::_w_rpy_type arg)
  {
    msg_.w_rpy = std::move(arg);
    return Init_PalletroneState_a_rpy(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_rpy
{
public:
  explicit Init_PalletroneState_rpy(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  Init_PalletroneState_w_rpy rpy(::palletrone_interfaces::msg::PalletroneState::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_PalletroneState_w_rpy(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_acc
{
public:
  explicit Init_PalletroneState_acc(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  Init_PalletroneState_rpy acc(::palletrone_interfaces::msg::PalletroneState::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_PalletroneState_rpy(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_vel
{
public:
  explicit Init_PalletroneState_vel(::palletrone_interfaces::msg::PalletroneState & msg)
  : msg_(msg)
  {}
  Init_PalletroneState_acc vel(::palletrone_interfaces::msg::PalletroneState::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_PalletroneState_acc(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

class Init_PalletroneState_pos
{
public:
  Init_PalletroneState_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PalletroneState_vel pos(::palletrone_interfaces::msg::PalletroneState::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PalletroneState_vel(msg_);
  }

private:
  ::palletrone_interfaces::msg::PalletroneState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::palletrone_interfaces::msg::PalletroneState>()
{
  return palletrone_interfaces::msg::builder::Init_PalletroneState_pos();
}

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__BUILDER_HPP_
