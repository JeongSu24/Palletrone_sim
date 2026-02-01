// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from palletrone_interfaces:msg/Input.idl
// generated code does not contain a copyright notice
#include "palletrone_interfaces/msg/detail/input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
palletrone_interfaces__msg__Input__init(palletrone_interfaces__msg__Input * msg)
{
  if (!msg) {
    return false;
  }
  // u
  return true;
}

void
palletrone_interfaces__msg__Input__fini(palletrone_interfaces__msg__Input * msg)
{
  if (!msg) {
    return;
  }
  // u
}

bool
palletrone_interfaces__msg__Input__are_equal(const palletrone_interfaces__msg__Input * lhs, const palletrone_interfaces__msg__Input * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // u
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->u[i] != rhs->u[i]) {
      return false;
    }
  }
  return true;
}

bool
palletrone_interfaces__msg__Input__copy(
  const palletrone_interfaces__msg__Input * input,
  palletrone_interfaces__msg__Input * output)
{
  if (!input || !output) {
    return false;
  }
  // u
  for (size_t i = 0; i < 8; ++i) {
    output->u[i] = input->u[i];
  }
  return true;
}

palletrone_interfaces__msg__Input *
palletrone_interfaces__msg__Input__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__Input * msg = (palletrone_interfaces__msg__Input *)allocator.allocate(sizeof(palletrone_interfaces__msg__Input), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(palletrone_interfaces__msg__Input));
  bool success = palletrone_interfaces__msg__Input__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
palletrone_interfaces__msg__Input__destroy(palletrone_interfaces__msg__Input * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    palletrone_interfaces__msg__Input__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
palletrone_interfaces__msg__Input__Sequence__init(palletrone_interfaces__msg__Input__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__Input * data = NULL;

  if (size) {
    data = (palletrone_interfaces__msg__Input *)allocator.zero_allocate(size, sizeof(palletrone_interfaces__msg__Input), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = palletrone_interfaces__msg__Input__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        palletrone_interfaces__msg__Input__fini(&data[i - 1]);
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
palletrone_interfaces__msg__Input__Sequence__fini(palletrone_interfaces__msg__Input__Sequence * array)
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
      palletrone_interfaces__msg__Input__fini(&array->data[i]);
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

palletrone_interfaces__msg__Input__Sequence *
palletrone_interfaces__msg__Input__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__Input__Sequence * array = (palletrone_interfaces__msg__Input__Sequence *)allocator.allocate(sizeof(palletrone_interfaces__msg__Input__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = palletrone_interfaces__msg__Input__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
palletrone_interfaces__msg__Input__Sequence__destroy(palletrone_interfaces__msg__Input__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    palletrone_interfaces__msg__Input__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
palletrone_interfaces__msg__Input__Sequence__are_equal(const palletrone_interfaces__msg__Input__Sequence * lhs, const palletrone_interfaces__msg__Input__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!palletrone_interfaces__msg__Input__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
palletrone_interfaces__msg__Input__Sequence__copy(
  const palletrone_interfaces__msg__Input__Sequence * input,
  palletrone_interfaces__msg__Input__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(palletrone_interfaces__msg__Input);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    palletrone_interfaces__msg__Input * data =
      (palletrone_interfaces__msg__Input *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!palletrone_interfaces__msg__Input__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          palletrone_interfaces__msg__Input__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!palletrone_interfaces__msg__Input__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
