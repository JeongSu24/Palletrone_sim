// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from palletrone_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Input in the package palletrone_interfaces.
/**
  * order: w1 w2 w3 w4 th1 th2 th3 th4
 */
typedef struct palletrone_interfaces__msg__Input
{
  double u[8];
} palletrone_interfaces__msg__Input;

// Struct for a sequence of palletrone_interfaces__msg__Input.
typedef struct palletrone_interfaces__msg__Input__Sequence
{
  palletrone_interfaces__msg__Input * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} palletrone_interfaces__msg__Input__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
