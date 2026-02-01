// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__TRAITS_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "palletrone_interfaces/msg/detail/palletrone_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace palletrone_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PalletroneState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel
  {
    if (msg.vel.size() == 0) {
      out << "vel: []";
    } else {
      out << "vel: [";
      size_t pending_items = msg.vel.size();
      for (auto item : msg.vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc
  {
    if (msg.acc.size() == 0) {
      out << "acc: []";
    } else {
      out << "acc: [";
      size_t pending_items = msg.acc.size();
      for (auto item : msg.acc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: w_rpy
  {
    if (msg.w_rpy.size() == 0) {
      out << "w_rpy: []";
    } else {
      out << "w_rpy: [";
      size_t pending_items = msg.w_rpy.size();
      for (auto item : msg.w_rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a_rpy
  {
    if (msg.a_rpy.size() == 0) {
      out << "a_rpy: []";
    } else {
      out << "a_rpy: [";
      size_t pending_items = msg.a_rpy.size();
      for (auto item : msg.a_rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servo
  {
    if (msg.servo.size() == 0) {
      out << "servo: []";
    } else {
      out << "servo: [";
      size_t pending_items = msg.servo.size();
      for (auto item : msg.servo) {
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
  const PalletroneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel.size() == 0) {
      out << "vel: []\n";
    } else {
      out << "vel:\n";
      for (auto item : msg.vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc.size() == 0) {
      out << "acc: []\n";
    } else {
      out << "acc:\n";
      for (auto item : msg.acc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: w_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.w_rpy.size() == 0) {
      out << "w_rpy: []\n";
    } else {
      out << "w_rpy:\n";
      for (auto item : msg.w_rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a_rpy.size() == 0) {
      out << "a_rpy: []\n";
    } else {
      out << "a_rpy:\n";
      for (auto item : msg.a_rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo.size() == 0) {
      out << "servo: []\n";
    } else {
      out << "servo:\n";
      for (auto item : msg.servo) {
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

inline std::string to_yaml(const PalletroneState & msg, bool use_flow_style = false)
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
  const palletrone_interfaces::msg::PalletroneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  palletrone_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use palletrone_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const palletrone_interfaces::msg::PalletroneState & msg)
{
  return palletrone_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<palletrone_interfaces::msg::PalletroneState>()
{
  return "palletrone_interfaces::msg::PalletroneState";
}

template<>
inline const char * name<palletrone_interfaces::msg::PalletroneState>()
{
  return "palletrone_interfaces/msg/PalletroneState";
}

template<>
struct has_fixed_size<palletrone_interfaces::msg::PalletroneState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<palletrone_interfaces::msg::PalletroneState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<palletrone_interfaces::msg::PalletroneState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__TRAITS_HPP_
