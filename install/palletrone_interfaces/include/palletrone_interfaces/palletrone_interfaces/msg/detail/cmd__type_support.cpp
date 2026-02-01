// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from palletrone_interfaces:msg/Cmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "palletrone_interfaces/msg/detail/cmd__struct.hpp"
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

void Cmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) palletrone_interfaces::msg::Cmd(_init);
}

void Cmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<palletrone_interfaces::msg::Cmd *>(message_memory);
  typed_message->~Cmd();
}

size_t size_function__Cmd__pos_cmd(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Cmd__pos_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Cmd__pos_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Cmd__pos_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Cmd__pos_cmd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Cmd__pos_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Cmd__pos_cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Cmd_message_member_array[1] = {
  {
    "pos_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(palletrone_interfaces::msg::Cmd, pos_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__Cmd__pos_cmd,  // size() function pointer
    get_const_function__Cmd__pos_cmd,  // get_const(index) function pointer
    get_function__Cmd__pos_cmd,  // get(index) function pointer
    fetch_function__Cmd__pos_cmd,  // fetch(index, &value) function pointer
    assign_function__Cmd__pos_cmd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Cmd_message_members = {
  "palletrone_interfaces::msg",  // message namespace
  "Cmd",  // message name
  1,  // number of fields
  sizeof(palletrone_interfaces::msg::Cmd),
  Cmd_message_member_array,  // message members
  Cmd_init_function,  // function to initialize message memory (memory has to be allocated)
  Cmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Cmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Cmd_message_members,
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
get_message_type_support_handle<palletrone_interfaces::msg::Cmd>()
{
  return &::palletrone_interfaces::msg::rosidl_typesupport_introspection_cpp::Cmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, palletrone_interfaces, msg, Cmd)() {
  return &::palletrone_interfaces::msg::rosidl_typesupport_introspection_cpp::Cmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
