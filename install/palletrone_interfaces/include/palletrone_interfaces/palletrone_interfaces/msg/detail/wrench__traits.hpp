// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from palletrone_interfaces:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__TRAITS_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "palletrone_interfaces/msg/detail/wrench__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace palletrone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Wrench & msg,
  std::ostream & out)
{
  out << "{";
  // member: moment
  {
    if (msg.moment.size() == 0) {
      out << "moment: []";
    } else {
      out << "moment: [";
      size_t pending_items = msg.moment.size();
      for (auto item : msg.moment) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force
  {
    if (msg.force.size() == 0) {
      out << "force: []";
    } else {
      out << "force: [";
      size_t pending_items = msg.force.size();
      for (auto item : msg.force) {
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
  const Wrench & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.moment.size() == 0) {
      out << "moment: []\n";
    } else {
      out << "moment:\n";
      for (auto item : msg.moment) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force.size() == 0) {
      out << "force: []\n";
    } else {
      out << "force:\n";
      for (auto item : msg.force) {
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

inline std::string to_yaml(const Wrench & msg, bool use_flow_style = false)
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
  const palletrone_interfaces::msg::Wrench & msg,
  std::ostream & out, size_t indentation = 0)
{
  palletrone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use palletrone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const palletrone_interfaces::msg::Wrench & msg)
{
  return palletrone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<palletrone_interfaces::msg::Wrench>()
{
  return "palletrone_interfaces::msg::Wrench";
}

template<>
inline const char * name<palletrone_interfaces::msg::Wrench>()
{
  return "palletrone_interfaces/msg/Wrench";
}

template<>
struct has_fixed_size<palletrone_interfaces::msg::Wrench>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<palletrone_interfaces::msg::Wrench>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<palletrone_interfaces::msg::Wrench>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__TRAITS_HPP_
