// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from palletrone_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "palletrone_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace palletrone_interfaces
{

namespace msg
{

namespace builder
{

class Init_Input_u
{
public:
  Init_Input_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::palletrone_interfaces::msg::Input u(::palletrone_interfaces::msg::Input::_u_type arg)
  {
    msg_.u = std::move(arg);
    return std::move(msg_);
  }

private:
  ::palletrone_interfaces::msg::Input msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::palletrone_interfaces::msg::Input>()
{
  return palletrone_interfaces::msg::builder::Init_Input_u();
}

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
