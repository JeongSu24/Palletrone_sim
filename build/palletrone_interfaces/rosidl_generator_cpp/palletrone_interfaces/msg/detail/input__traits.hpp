// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from palletrone_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "palletrone_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace palletrone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Input & msg,
  std::ostream & out)
{
  out << "{";
  // member: u
  {
    if (msg.u.size() == 0) {
      out << "u: []";
    } else {
      out << "u: [";
      size_t pending_items = msg.u.size();
      for (auto item : msg.u) {
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
  const Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.u.size() == 0) {
      out << "u: []\n";
    } else {
      out << "u:\n";
      for (auto item : msg.u) {
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

inline std::string to_yaml(const Input & msg, bool use_flow_style = false)
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
  const palletrone_interfaces::msg::Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  palletrone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use palletrone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const palletrone_interfaces::msg::Input & msg)
{
  return palletrone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<palletrone_interfaces::msg::Input>()
{
  return "palletrone_interfaces::msg::Input";
}

template<>
inline const char * name<palletrone_interfaces::msg::Input>()
{
  return "palletrone_interfaces/msg/Input";
}

template<>
struct has_fixed_size<palletrone_interfaces::msg::Input>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<palletrone_interfaces::msg::Input>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<palletrone_interfaces::msg::Input>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
