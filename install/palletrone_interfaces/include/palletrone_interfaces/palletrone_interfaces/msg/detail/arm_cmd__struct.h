// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArmCmd in the package palletrone_interfaces.
typedef struct palletrone_interfaces__msg__ArmCmd
{
  double joint1;
  double joint2;
  double joint3;
  double joint5_l;
  double joint5_r;
  double thruster_left;
  double thruster_right;
  bool enable;
} palletrone_interfaces__msg__ArmCmd;

// Struct for a sequence of palletrone_interfaces__msg__ArmCmd.
typedef struct palletrone_interfaces__msg__ArmCmd__Sequence
{
  palletrone_interfaces__msg__ArmCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} palletrone_interfaces__msg__ArmCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_H_
