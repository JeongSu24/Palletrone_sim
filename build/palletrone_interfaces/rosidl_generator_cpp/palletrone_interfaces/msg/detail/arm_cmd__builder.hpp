// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__BUILDER_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "palletrone_interfaces/msg/detail/arm_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace palletrone_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmCmd_enable
{
public:
  explicit Init_ArmCmd_enable(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  ::palletrone_interfaces::msg::ArmCmd enable(::palletrone_interfaces::msg::ArmCmd::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_thruster_right
{
public:
  explicit Init_ArmCmd_thruster_right(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_enable thruster_right(::palletrone_interfaces::msg::ArmCmd::_thruster_right_type arg)
  {
    msg_.thruster_right = std::move(arg);
    return Init_ArmCmd_enable(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_thruster_left
{
public:
  explicit Init_ArmCmd_thruster_left(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_thruster_right thruster_left(::palletrone_interfaces::msg::ArmCmd::_thruster_left_type arg)
  {
    msg_.thruster_left = std::move(arg);
    return Init_ArmCmd_thruster_right(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_joint5_r
{
public:
  explicit Init_ArmCmd_joint5_r(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_thruster_left joint5_r(::palletrone_interfaces::msg::ArmCmd::_joint5_r_type arg)
  {
    msg_.joint5_r = std::move(arg);
    return Init_ArmCmd_thruster_left(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_joint5_l
{
public:
  explicit Init_ArmCmd_joint5_l(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_joint5_r joint5_l(::palletrone_interfaces::msg::ArmCmd::_joint5_l_type arg)
  {
    msg_.joint5_l = std::move(arg);
    return Init_ArmCmd_joint5_r(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_joint3
{
public:
  explicit Init_ArmCmd_joint3(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_joint5_l joint3(::palletrone_interfaces::msg::ArmCmd::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_ArmCmd_joint5_l(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_joint2
{
public:
  explicit Init_ArmCmd_joint2(::palletrone_interfaces::msg::ArmCmd & msg)
  : msg_(msg)
  {}
  Init_ArmCmd_joint3 joint2(::palletrone_interfaces::msg::ArmCmd::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_ArmCmd_joint3(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

class Init_ArmCmd_joint1
{
public:
  Init_ArmCmd_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCmd_joint2 joint1(::palletrone_interfaces::msg::ArmCmd::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_ArmCmd_joint2(msg_);
  }

private:
  ::palletrone_interfaces::msg::ArmCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::palletrone_interfaces::msg::ArmCmd>()
{
  return palletrone_interfaces::msg::builder::Init_ArmCmd_joint1();
}

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__BUILDER_HPP_
