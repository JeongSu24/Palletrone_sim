// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "palletrone_interfaces/msg/detail/palletrone_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace palletrone_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PalletroneState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) palletrone_interfaces::msg::PalletroneState(_init);
}

void PalletroneState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<palletrone_interfaces::msg::PalletroneState *>(message_memory);
  typed_message->~PalletroneState();
}

size_t size_function__PalletroneState__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__vel(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__vel(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__acc(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__acc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__acc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__acc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__acc(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__acc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__acc(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__rpy(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__rpy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__rpy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__rpy(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__rpy(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__w_rpy(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__w_rpy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__w_rpy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__w_rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__w_rpy(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__w_rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__w_rpy(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__a_rpy(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PalletroneState__a_rpy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__a_rpy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__a_rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__a_rpy(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__a_rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__a_rpy(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PalletroneState__servo(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__PalletroneState__servo(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__PalletroneState__servo(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__PalletroneState__servo(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PalletroneState__servo(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PalletroneState__servo(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PalletroneState__servo(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PalletroneState_message_member_array[7] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__pos,  // size() function pointer
    get_const_function__PalletroneState__pos,  // get_const(index) function pointer
    get_function__PalletroneState__pos,  // get(index) function pointer
    fetch_function__PalletroneState__pos,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__vel,  // size() function pointer
    get_const_function__PalletroneState__vel,  // get_const(index) function pointer
    get_function__PalletroneState__vel,  // get(index) function pointer
    fetch_function__PalletroneState__vel,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__vel,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, acc),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__acc,  // size() function pointer
    get_const_function__PalletroneState__acc,  // get_const(index) function pointer
    get_function__PalletroneState__acc,  // get(index) function pointer
    fetch_function__PalletroneState__acc,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__acc,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, rpy),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__rpy,  // size() function pointer
    get_const_function__PalletroneState__rpy,  // get_const(index) function pointer
    get_function__PalletroneState__rpy,  // get(index) function pointer
    fetch_function__PalletroneState__rpy,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__rpy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "w_rpy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, w_rpy),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__w_rpy,  // size() function pointer
    get_const_function__PalletroneState__w_rpy,  // get_const(index) function pointer
    get_function__PalletroneState__w_rpy,  // get(index) function pointer
    fetch_function__PalletroneState__w_rpy,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__w_rpy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a_rpy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, a_rpy),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__a_rpy,  // size() function pointer
    get_const_function__PalletroneState__a_rpy,  // get_const(index) function pointer
    get_function__PalletroneState__a_rpy,  // get(index) function pointer
    fetch_function__PalletroneState__a_rpy,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__a_rpy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servo",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::PalletroneState, servo),  // bytes offset in struct
    nullptr,  // default value
    size_function__PalletroneState__servo,  // size() function pointer
    get_const_function__PalletroneState__servo,  // get_const(index) function pointer
    get_function__PalletroneState__servo,  // get(index) function pointer
    fetch_function__PalletroneState__servo,  // fetch(index, &value) function pointer
    assign_function__PalletroneState__servo,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PalletroneState_message_members = {
  "palletrone_interfaces::msg",  // message namespace
  "PalletroneState",  // message name
  7,  // number of fields
  sizeof(palletrone_interfaces::msg::PalletroneState),
  PalletroneState_message_member_array,  // message members
  PalletroneState_init_function,  // function to initialize message memory (memory has to be allocated)
  PalletroneState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PalletroneState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PalletroneState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace palletrone_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<palletrone_interfaces::msg::PalletroneState>()
{
  return &::palletrone_interfaces::msg::rosidl_typesupport_introspection_cpp::PalletroneState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, palletrone_interfaces, msg, PalletroneState)() {
  return &::palletrone_interfaces::msg::rosidl_typesupport_introspection_cpp::PalletroneState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
