// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__FUNCTIONS_H_
#define PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "palletrone_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "palletrone_interfaces/msg/detail/arm_cmd__struct.h"

/// Initialize msg/ArmCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * palletrone_interfaces__msg__ArmCmd
 * )) before or use
 * palletrone_interfaces__msg__ArmCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__init(palletrone_interfaces__msg__ArmCmd * msg);

/// Finalize msg/ArmCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
void
palletrone_interfaces__msg__ArmCmd__fini(palletrone_interfaces__msg__ArmCmd * msg);

/// Create msg/ArmCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * palletrone_interfaces__msg__ArmCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
palletrone_interfaces__msg__ArmCmd *
palletrone_interfaces__msg__ArmCmd__create();

/// Destroy msg/ArmCmd message.
/**
 * It calls
 * palletrone_interfaces__msg__ArmCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
void
palletrone_interfaces__msg__ArmCmd__destroy(palletrone_interfaces__msg__ArmCmd * msg);

/// Check for msg/ArmCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__are_equal(const palletrone_interfaces__msg__ArmCmd * lhs, const palletrone_interfaces__msg__ArmCmd * rhs);

/// Copy a msg/ArmCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__copy(
  const palletrone_interfaces__msg__ArmCmd * input,
  palletrone_interfaces__msg__ArmCmd * output);

/// Initialize array of msg/ArmCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * palletrone_interfaces__msg__ArmCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__Sequence__init(palletrone_interfaces__msg__ArmCmd__Sequence * array, size_t size);

/// Finalize array of msg/ArmCmd messages.
/**
 * It calls
 * palletrone_interfaces__msg__ArmCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
void
palletrone_interfaces__msg__ArmCmd__Sequence__fini(palletrone_interfaces__msg__ArmCmd__Sequence * array);

/// Create array of msg/ArmCmd messages.
/**
 * It allocates the memory for the array and calls
 * palletrone_interfaces__msg__ArmCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
palletrone_interfaces__msg__ArmCmd__Sequence *
palletrone_interfaces__msg__ArmCmd__Sequence__create(size_t size);

/// Destroy array of msg/ArmCmd messages.
/**
 * It calls
 * palletrone_interfaces__msg__ArmCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
void
palletrone_interfaces__msg__ArmCmd__Sequence__destroy(palletrone_interfaces__msg__ArmCmd__Sequence * array);

/// Check for msg/ArmCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__Sequence__are_equal(const palletrone_interfaces__msg__ArmCmd__Sequence * lhs, const palletrone_interfaces__msg__ArmCmd__Sequence * rhs);

/// Copy an array of msg/ArmCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_palletrone_interfaces
bool
palletrone_interfaces__msg__ArmCmd__Sequence__copy(
  const palletrone_interfaces__msg__ArmCmd__Sequence * input,
  palletrone_interfaces__msg__ArmCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__FUNCTIONS_H_
