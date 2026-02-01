// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from palletrone_interfaces:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Cmd in the package palletrone_interfaces.
typedef struct palletrone_interfaces__msg__Cmd
{
  float pos_cmd[3];
} palletrone_interfaces__msg__Cmd;

// Struct for a sequence of palletrone_interfaces__msg__Cmd.
typedef struct palletrone_interfaces__msg__Cmd__Sequence
{
  palletrone_interfaces__msg__Cmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} palletrone_interfaces__msg__Cmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_H_
