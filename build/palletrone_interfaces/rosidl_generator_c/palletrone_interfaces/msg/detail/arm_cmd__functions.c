// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice
#include "palletrone_interfaces/msg/detail/arm_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
palletrone_interfaces__msg__ArmCmd__init(palletrone_interfaces__msg__ArmCmd * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint5_l
  // joint5_r
  // thruster_left
  // thruster_right
  // enable
  return true;
}

void
palletrone_interfaces__msg__ArmCmd__fini(palletrone_interfaces__msg__ArmCmd * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint5_l
  // joint5_r
  // thruster_left
  // thruster_right
  // enable
}

bool
palletrone_interfaces__msg__ArmCmd__are_equal(const palletrone_interfaces__msg__ArmCmd * lhs, const palletrone_interfaces__msg__ArmCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint5_l
  if (lhs->joint5_l != rhs->joint5_l) {
    return false;
  }
  // joint5_r
  if (lhs->joint5_r != rhs->joint5_r) {
    return false;
  }
  // thruster_left
  if (lhs->thruster_left != rhs->thruster_left) {
    return false;
  }
  // thruster_right
  if (lhs->thruster_right != rhs->thruster_right) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
palletrone_interfaces__msg__ArmCmd__copy(
  const palletrone_interfaces__msg__ArmCmd * input,
  palletrone_interfaces__msg__ArmCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint5_l
  output->joint5_l = input->joint5_l;
  // joint5_r
  output->joint5_r = input->joint5_r;
  // thruster_left
  output->thruster_left = input->thruster_left;
  // thruster_right
  output->thruster_right = input->thruster_right;
  // enable
  output->enable = input->enable;
  return true;
}

palletrone_interfaces__msg__ArmCmd *
palletrone_interfaces__msg__ArmCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__ArmCmd * msg = (palletrone_interfaces__msg__ArmCmd *)allocator.allocate(sizeof(palletrone_interfaces__msg__ArmCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(palletrone_interfaces__msg__ArmCmd));
  bool success = palletrone_interfaces__msg__ArmCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
palletrone_interfaces__msg__ArmCmd__destroy(palletrone_interfaces__msg__ArmCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    palletrone_interfaces__msg__ArmCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
palletrone_interfaces__msg__ArmCmd__Sequence__init(palletrone_interfaces__msg__ArmCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__ArmCmd * data = NULL;

  if (size) {
    data = (palletrone_interfaces__msg__ArmCmd *)allocator.zero_allocate(size, sizeof(palletrone_interfaces__msg__ArmCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = palletrone_interfaces__msg__ArmCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        palletrone_interfaces__msg__ArmCmd__fini(&data[i - 1]);
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
palletrone_interfaces__msg__ArmCmd__Sequence__fini(palletrone_interfaces__msg__ArmCmd__Sequence * array)
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
      palletrone_interfaces__msg__ArmCmd__fini(&array->data[i]);
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

palletrone_interfaces__msg__ArmCmd__Sequence *
palletrone_interfaces__msg__ArmCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  palletrone_interfaces__msg__ArmCmd__Sequence * array = (palletrone_interfaces__msg__ArmCmd__Sequence *)allocator.allocate(sizeof(palletrone_interfaces__msg__ArmCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = palletrone_interfaces__msg__ArmCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
palletrone_interfaces__msg__ArmCmd__Sequence__destroy(palletrone_interfaces__msg__ArmCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    palletrone_interfaces__msg__ArmCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
palletrone_interfaces__msg__ArmCmd__Sequence__are_equal(const palletrone_interfaces__msg__ArmCmd__Sequence * lhs, const palletrone_interfaces__msg__ArmCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!palletrone_interfaces__msg__ArmCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
palletrone_interfaces__msg__ArmCmd__Sequence__copy(
  const palletrone_interfaces__msg__ArmCmd__Sequence * input,
  palletrone_interfaces__msg__ArmCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(palletrone_interfaces__msg__ArmCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    palletrone_interfaces__msg__ArmCmd * data =
      (palletrone_interfaces__msg__ArmCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!palletrone_interfaces__msg__ArmCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          palletrone_interfaces__msg__ArmCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!palletrone_interfaces__msg__ArmCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
