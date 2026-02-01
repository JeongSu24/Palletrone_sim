// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "palletrone_interfaces/msg/detail/arm_cmd__rosidl_typesupport_introspection_c.h"
#include "palletrone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "palletrone_interfaces/msg/detail/arm_cmd__functions.h"
#include "palletrone_interfaces/msg/detail/arm_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  palletrone_interfaces__msg__ArmCmd__init(message_memory);
}

void palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_fini_function(void * message_memory)
{
  palletrone_interfaces__msg__ArmCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_member_array[8] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, joint5_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, joint5_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thruster_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, thruster_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thruster_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, thruster_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__ArmCmd, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_members = {
  "palletrone_interfaces__msg",  // message namespace
  "ArmCmd",  // message name
  8,  // number of fields
  sizeof(palletrone_interfaces__msg__ArmCmd),
  palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_member_array,  // message members
  palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_type_support_handle = {
  0,
  &palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_palletrone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, palletrone_interfaces, msg, ArmCmd)() {
  if (!palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_type_support_handle.typesupport_identifier) {
    palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &palletrone_interfaces__msg__ArmCmd__rosidl_typesupport_introspection_c__ArmCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
