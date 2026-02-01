// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from palletrone_interfaces:msg/Wrench.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "palletrone_interfaces/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
#include "palletrone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "palletrone_interfaces/msg/detail/wrench__functions.h"
#include "palletrone_interfaces/msg/detail/wrench__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  palletrone_interfaces__msg__Wrench__init(message_memory);
}

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_fini_function(void * message_memory)
{
  palletrone_interfaces__msg__Wrench__fini(message_memory);
}

size_t palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__size_function__Wrench__moment(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__moment(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__moment(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__fetch_function__Wrench__moment(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__moment(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__assign_function__Wrench__moment(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__moment(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__size_function__Wrench__force(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__force(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__force(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__fetch_function__Wrench__force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__force(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__assign_function__Wrench__force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__force(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_member_array[2] = {
  {
    "moment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__Wrench, moment),  // bytes offset in struct
    NULL,  // default value
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__size_function__Wrench__moment,  // size() function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__moment,  // get_const(index) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__moment,  // get(index) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__fetch_function__Wrench__moment,  // fetch(index, &value) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__assign_function__Wrench__moment,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces__msg__Wrench, force),  // bytes offset in struct
    NULL,  // default value
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__size_function__Wrench__force,  // size() function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_const_function__Wrench__force,  // get_const(index) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__get_function__Wrench__force,  // get(index) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__fetch_function__Wrench__force,  // fetch(index, &value) function pointer
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__assign_function__Wrench__force,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_members = {
  "palletrone_interfaces__msg",  // message namespace
  "Wrench",  // message name
  2,  // number of fields
  sizeof(palletrone_interfaces__msg__Wrench),
  palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_member_array,  // message members
  palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_init_function,  // function to initialize message memory (memory has to be allocated)
  palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_type_support_handle = {
  0,
  &palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_palletrone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, palletrone_interfaces, msg, Wrench)() {
  if (!palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_type_support_handle.typesupport_identifier) {
    palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &palletrone_interfaces__msg__Wrench__rosidl_typesupport_introspection_c__Wrench_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
