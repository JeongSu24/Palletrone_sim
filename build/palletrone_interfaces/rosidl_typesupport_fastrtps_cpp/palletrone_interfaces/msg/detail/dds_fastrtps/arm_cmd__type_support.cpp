// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice
#include "palletrone_interfaces/msg/detail/arm_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "palletrone_interfaces/msg/detail/arm_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace palletrone_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_palletrone_interfaces
cdr_serialize(
  const palletrone_interfaces::msg::ArmCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint1
  cdr << ros_message.joint1;
  // Member: joint2
  cdr << ros_message.joint2;
  // Member: joint3
  cdr << ros_message.joint3;
  // Member: joint5_l
  cdr << ros_message.joint5_l;
  // Member: joint5_r
  cdr << ros_message.joint5_r;
  // Member: thruster_left
  cdr << ros_message.thruster_left;
  // Member: thruster_right
  cdr << ros_message.thruster_right;
  // Member: enable
  cdr << (ros_message.enable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_palletrone_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  palletrone_interfaces::msg::ArmCmd & ros_message)
{
  // Member: joint1
  cdr >> ros_message.joint1;

  // Member: joint2
  cdr >> ros_message.joint2;

  // Member: joint3
  cdr >> ros_message.joint3;

  // Member: joint5_l
  cdr >> ros_message.joint5_l;

  // Member: joint5_r
  cdr >> ros_message.joint5_r;

  // Member: thruster_left
  cdr >> ros_message.thruster_left;

  // Member: thruster_right
  cdr >> ros_message.thruster_right;

  // Member: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_palletrone_interfaces
get_serialized_size(
  const palletrone_interfaces::msg::ArmCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint1
  {
    size_t item_size = sizeof(ros_message.joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint2
  {
    size_t item_size = sizeof(ros_message.joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint3
  {
    size_t item_size = sizeof(ros_message.joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint5_l
  {
    size_t item_size = sizeof(ros_message.joint5_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint5_r
  {
    size_t item_size = sizeof(ros_message.joint5_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thruster_left
  {
    size_t item_size = sizeof(ros_message.thruster_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thruster_right
  {
    size_t item_size = sizeof(ros_message.thruster_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable
  {
    size_t item_size = sizeof(ros_message.enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_palletrone_interfaces
max_serialized_size_ArmCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint5_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint5_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thruster_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thruster_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = palletrone_interfaces::msg::ArmCmd;
    is_plain =
      (
      offsetof(DataType, enable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const palletrone_interfaces::msg::ArmCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<palletrone_interfaces::msg::ArmCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const palletrone_interfaces::msg::ArmCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmCmd__callbacks = {
  "palletrone_interfaces::msg",
  "ArmCmd",
  _ArmCmd__cdr_serialize,
  _ArmCmd__cdr_deserialize,
  _ArmCmd__get_serialized_size,
  _ArmCmd__max_serialized_size
};

static rosidl_message_type_support_t _ArmCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace palletrone_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_palletrone_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<palletrone_interfaces::msg::ArmCmd>()
{
  return &palletrone_interfaces::msg::typesupport_fastrtps_cpp::_ArmCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, palletrone_interfaces, msg, ArmCmd)() {
  return &palletrone_interfaces::msg::typesupport_fastrtps_cpp::_ArmCmd__handle;
}

#ifdef __cplusplus
}
#endif
