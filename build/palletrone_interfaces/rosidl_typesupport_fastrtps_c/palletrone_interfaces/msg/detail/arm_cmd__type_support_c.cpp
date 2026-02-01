// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice
#include "palletrone_interfaces/msg/detail/arm_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "palletrone_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "palletrone_interfaces/msg/detail/arm_cmd__struct.h"
#include "palletrone_interfaces/msg/detail/arm_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmCmd__ros_msg_type = palletrone_interfaces__msg__ArmCmd;

static bool _ArmCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmCmd__ros_msg_type * ros_message = static_cast<const _ArmCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr << ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr << ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr << ros_message->joint3;
  }

  // Field name: joint5_l
  {
    cdr << ros_message->joint5_l;
  }

  // Field name: joint5_r
  {
    cdr << ros_message->joint5_r;
  }

  // Field name: thruster_left
  {
    cdr << ros_message->thruster_left;
  }

  // Field name: thruster_right
  {
    cdr << ros_message->thruster_right;
  }

  // Field name: enable
  {
    cdr << (ros_message->enable ? true : false);
  }

  return true;
}

static bool _ArmCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmCmd__ros_msg_type * ros_message = static_cast<_ArmCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr >> ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr >> ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr >> ros_message->joint3;
  }

  // Field name: joint5_l
  {
    cdr >> ros_message->joint5_l;
  }

  // Field name: joint5_r
  {
    cdr >> ros_message->joint5_r;
  }

  // Field name: thruster_left
  {
    cdr >> ros_message->thruster_left;
  }

  // Field name: thruster_right
  {
    cdr >> ros_message->thruster_right;
  }

  // Field name: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_palletrone_interfaces
size_t get_serialized_size_palletrone_interfaces__msg__ArmCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmCmd__ros_msg_type * ros_message = static_cast<const _ArmCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint1
  {
    size_t item_size = sizeof(ros_message->joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint2
  {
    size_t item_size = sizeof(ros_message->joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint3
  {
    size_t item_size = sizeof(ros_message->joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint5_l
  {
    size_t item_size = sizeof(ros_message->joint5_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint5_r
  {
    size_t item_size = sizeof(ros_message->joint5_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thruster_left
  {
    size_t item_size = sizeof(ros_message->thruster_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thruster_right
  {
    size_t item_size = sizeof(ros_message->thruster_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_palletrone_interfaces__msg__ArmCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_palletrone_interfaces
size_t max_serialized_size_palletrone_interfaces__msg__ArmCmd(
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

  // member: joint1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint5_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint5_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thruster_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thruster_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: enable
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
    using DataType = palletrone_interfaces__msg__ArmCmd;
    is_plain =
      (
      offsetof(DataType, enable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_palletrone_interfaces__msg__ArmCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmCmd = {
  "palletrone_interfaces::msg",
  "ArmCmd",
  _ArmCmd__cdr_serialize,
  _ArmCmd__cdr_deserialize,
  _ArmCmd__get_serialized_size,
  _ArmCmd__max_serialized_size
};

static rosidl_message_type_support_t _ArmCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, palletrone_interfaces, msg, ArmCmd)() {
  return &_ArmCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
