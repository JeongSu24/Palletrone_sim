// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from palletrone_interfaces:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__CMD__TRAITS_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "palletrone_interfaces/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace palletrone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_cmd
  {
    if (msg.pos_cmd.size() == 0) {
      out << "pos_cmd: []";
    } else {
      out << "pos_cmd: [";
      size_t pending_items = msg.pos_cmd.size();
      for (auto item : msg.pos_cmd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_cmd.size() == 0) {
      out << "pos_cmd: []\n";
    } else {
      out << "pos_cmd:\n";
      for (auto item : msg.pos_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace palletrone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use palletrone_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const palletrone_interfaces::msg::Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  palletrone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use palletrone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const palletrone_interfaces::msg::Cmd & msg)
{
  return palletrone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<palletrone_interfaces::msg::Cmd>()
{
  return "palletrone_interfaces::msg::Cmd";
}

template<>
inline const char * name<palletrone_interfaces::msg::Cmd>()
{
  return "palletrone_interfaces/msg/Cmd";
}

template<>
struct has_fixed_size<palletrone_interfaces::msg::Cmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<palletrone_interfaces::msg::Cmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<palletrone_interfaces::msg::Cmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__CMD__TRAITS_HPP_
