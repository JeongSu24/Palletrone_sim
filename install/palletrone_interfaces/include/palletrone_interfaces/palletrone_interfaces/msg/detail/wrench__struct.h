// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from palletrone_interfaces:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Wrench in the package palletrone_interfaces.
typedef struct palletrone_interfaces__msg__Wrench
{
  float moment[3];
  float force[3];
} palletrone_interfaces__msg__Wrench;

// Struct for a sequence of palletrone_interfaces__msg__Wrench.
typedef struct palletrone_interfaces__msg__Wrench__Sequence
{
  palletrone_interfaces__msg__Wrench * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} palletrone_interfaces__msg__Wrench__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_H_
