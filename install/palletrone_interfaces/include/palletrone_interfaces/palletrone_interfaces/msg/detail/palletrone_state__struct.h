// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PalletroneState in the package palletrone_interfaces.
typedef struct palletrone_interfaces__msg__PalletroneState
{
  double pos[3];
  double vel[3];
  double acc[3];
  /// [roll, pitch, yaw]
  double rpy[3];
  /// [w_roll, w_pitch, w_yaw]
  double w_rpy[3];
  /// [a_roll, a_pitch, a_yaw]
  double a_rpy[3];
  /// [Motor1_tilted_angle, Motor2_tilted_angle, Motor3_tilted_angle, Motor4_tilted_angle]
  double servo[4];
} palletrone_interfaces__msg__PalletroneState;

// Struct for a sequence of palletrone_interfaces__msg__PalletroneState.
typedef struct palletrone_interfaces__msg__PalletroneState__Sequence
{
  palletrone_interfaces__msg__PalletroneState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} palletrone_interfaces__msg__PalletroneState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_H_
