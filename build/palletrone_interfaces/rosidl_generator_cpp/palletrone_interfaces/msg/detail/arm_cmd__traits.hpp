// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__TRAITS_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "palletrone_interfaces/msg/detail/arm_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace palletrone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint5_l
  {
    out << "joint5_l: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5_l, out);
    out << ", ";
  }

  // member: joint5_r
  {
    out << "joint5_r: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5_r, out);
    out << ", ";
  }

  // member: thruster_left
  {
    out << "thruster_left: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_left, out);
    out << ", ";
  }

  // member: thruster_right
  {
    out << "thruster_right: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_right, out);
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint5_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5_l: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5_l, out);
    out << "\n";
  }

  // member: joint5_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5_r: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5_r, out);
    out << "\n";
  }

  // member: thruster_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_left: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_left, out);
    out << "\n";
  }

  // member: thruster_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_right: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_right, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCmd & msg, bool use_flow_style = false)
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
  const palletrone_interfaces::msg::ArmCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  palletrone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use palletrone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const palletrone_interfaces::msg::ArmCmd & msg)
{
  return palletrone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<palletrone_interfaces::msg::ArmCmd>()
{
  return "palletrone_interfaces::msg::ArmCmd";
}

template<>
inline const char * name<palletrone_interfaces::msg::ArmCmd>()
{
  return "palletrone_interfaces/msg/ArmCmd";
}

template<>
struct has_fixed_size<palletrone_interfaces::msg::ArmCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<palletrone_interfaces::msg::ArmCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<palletrone_interfaces::msg::ArmCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__TRAITS_HPP_
