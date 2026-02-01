// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice
#include "palletrone_interfaces/msg/detail/palletrone_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
palletrone_interfaces__msg__PalletroneState__init(palletrone_interfaces__msg__PalletroneState * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  // vel
  // acc
  // rpy
  // w_rpy
  // a_rpy
  // servo
  return true;
}

void
palletrone_interfaces__msg__PalletroneState__fini(palletrone_interfaces__msg__PalletroneState * msg)
{
  if (!msg) {
    return;
  }
  // pos
  // vel
  // acc
  // rpy
  // w_rpy
  // a_rpy
  // servo
}

bool
palletrone_interfaces__msg__PalletroneState__are_equal(const palletrone_interfaces__msg__PalletroneState * lhs, const palletrone_interfaces__msg__PalletroneState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos[i] != rhs->pos[i]) {
      return false;
    }
  }
  // vel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel[i] != rhs->vel[i]) {
      return false;
    }
  }
  // acc
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acc[i] != rhs->acc[i]) {
      return false;
    }
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rpy[i] != rhs->rpy[i]) {
      return false;
    }
  }
  // w_rpy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->w_rpy[i] != rhs->w_rpy[i]) {
      return false;
    }
  }
  // a_rpy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->a_rpy[i] != rhs->a_rpy[i]) {
      return false;
    }
  }
  // servo
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->servo[i] != rhs->servo[i]) {
      return false;
    }
  }
  return true;
}

bool
palletrone_interfaces__msg__PalletroneState__copy(
  const palletrone_interfaces__msg__PalletroneState * input,
  palletrone_interfaces__msg__PalletroneState * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  for (size_t i = 0; i < 3; ++i) {
    output->pos[i] = input->pos[i];
  }
  // vel
  for (size_t i = 0; i < 3; ++i) {
    output->vel[i] = input->vel[i];
  }
  // acc
  for (size_t i = 0; i < 3; ++i) {
    output->acc[i] = input->acc[i];
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    output->rpy[i] = input->rpy[i];
  }
  // w_rpy
  for (size_t i = 0; i < 3; ++i) {
    output->w_rpy[i] = input->w_rpy[i];
  }
  // a_rpy
  for (size_t i = 0; i < 3; ++i) {
    output->a_rpy[i] = input->a_rpy[i];
  }
  // servo
  for (size_t i = 0; i < 4; ++i) {
    output->servo[i] = input->servo[i];
  }
  return true;
}

palletrone_interfaces__msg__PalletroneState *
palletrone_interfaces__msg__PalletroneState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__PalletroneState * msg = (palletrone_interfaces__msg__PalletroneState *)allocator.allocate(sizeof(palletrone_interfaces__msg__PalletroneState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(palletrone_interfaces__msg__PalletroneState));
  bool success = palletrone_interfaces__msg__PalletroneState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
palletrone_interfaces__msg__PalletroneState__destroy(palletrone_interfaces__msg__PalletroneState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    palletrone_interfaces__msg__PalletroneState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
palletrone_interfaces__msg__PalletroneState__Sequence__init(palletrone_interfaces__msg__PalletroneState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__PalletroneState * data = NULL;

  if (size) {
    data = (palletrone_interfaces__msg__PalletroneState *)allocator.zero_allocate(size, sizeof(palletrone_interfaces__msg__PalletroneState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = palletrone_interfaces__msg__PalletroneState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        palletrone_interfaces__msg__PalletroneState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
palletrone_interfaces__msg__PalletroneState__Sequence__fini(palletrone_interfaces__msg__PalletroneState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      palletrone_interfaces__msg__PalletroneState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

palletrone_interfaces__msg__PalletroneState__Sequence *
palletrone_interfaces__msg__PalletroneState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__PalletroneState__Sequence * array = (palletrone_interfaces__msg__PalletroneState__Sequence *)allocator.allocate(sizeof(palletrone_interfaces__msg__PalletroneState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = palletrone_interfaces__msg__PalletroneState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
palletrone_interfaces__msg__PalletroneState__Sequence__destroy(palletrone_interfaces__msg__PalletroneState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    palletrone_interfaces__msg__PalletroneState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
palletrone_interfaces__msg__PalletroneState__Sequence__are_equal(const palletrone_interfaces__msg__PalletroneState__Sequence * lhs, const palletrone_interfaces__msg__PalletroneState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!palletrone_interfaces__msg__PalletroneState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
palletrone_interfaces__msg__PalletroneState__Sequence__copy(
  const palletrone_interfaces__msg__PalletroneState__Sequence * input,
  palletrone_interfaces__msg__PalletroneState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(palletrone_interfaces__msg__PalletroneState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    palletrone_interfaces__msg__PalletroneState * data =
      (palletrone_interfaces__msg__PalletroneState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!palletrone_interfaces__msg__PalletroneState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          palletrone_interfaces__msg__PalletroneState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!palletrone_interfaces__msg__PalletroneState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
