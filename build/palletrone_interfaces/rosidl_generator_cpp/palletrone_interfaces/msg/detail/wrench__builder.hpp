// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from palletrone_interfaces:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__BUILDER_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "palletrone_interfaces/msg/detail/wrench__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace palletrone_interfaces
{

namespace msg
{

namespace builder
{

class Init_Wrench_force
{
public:
  explicit Init_Wrench_force(::palletrone_interfaces::msg::Wrench & msg)
  : msg_(msg)
  {}
  ::palletrone_interfaces::msg::Wrench force(::palletrone_interfaces::msg::Wrench::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::palletrone_interfaces::msg::Wrench msg_;
};

class Init_Wrench_moment
{
public:
  Init_Wrench_moment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wrench_force moment(::palletrone_interfaces::msg::Wrench::_moment_type arg)
  {
    msg_.moment = std::move(arg);
    return Init_Wrench_force(msg_);
  }

private:
  ::palletrone_interfaces::msg::Wrench msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::palletrone_interfaces::msg::Wrench>()
{
  return palletrone_interfaces::msg::builder::Init_Wrench_moment();
}

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__BUILDER_HPP_
