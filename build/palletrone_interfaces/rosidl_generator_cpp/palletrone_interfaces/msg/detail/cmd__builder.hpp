// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from palletrone_interfaces:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__CMD__BUILDER_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "palletrone_interfaces/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace palletrone_interfaces
{

namespace msg
{

namespace builder
{

class Init_Cmd_pos_cmd
{
public:
  Init_Cmd_pos_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::palletrone_interfaces::msg::Cmd pos_cmd(::palletrone_interfaces::msg::Cmd::_pos_cmd_type arg)
  {
    msg_.pos_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::palletrone_interfaces::msg::Cmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::palletrone_interfaces::msg::Cmd>()
{
  return palletrone_interfaces::msg::builder::Init_Cmd_pos_cmd();
}

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__CMD__BUILDER_HPP_
