// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/parking_brake__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
raptor_dbw_msgs__msg__ParkingBrake__init(raptor_dbw_msgs__msg__ParkingBrake * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
raptor_dbw_msgs__msg__ParkingBrake__fini(raptor_dbw_msgs__msg__ParkingBrake * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
raptor_dbw_msgs__msg__ParkingBrake__are_equal(const raptor_dbw_msgs__msg__ParkingBrake * lhs, const raptor_dbw_msgs__msg__ParkingBrake * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__ParkingBrake__copy(
  const raptor_dbw_msgs__msg__ParkingBrake * input,
  raptor_dbw_msgs__msg__ParkingBrake * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

raptor_dbw_msgs__msg__ParkingBrake *
raptor_dbw_msgs__msg__ParkingBrake__create()
{
  raptor_dbw_msgs__msg__ParkingBrake * msg = (raptor_dbw_msgs__msg__ParkingBrake *)malloc(sizeof(raptor_dbw_msgs__msg__ParkingBrake));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__ParkingBrake));
  bool success = raptor_dbw_msgs__msg__ParkingBrake__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__ParkingBrake__destroy(raptor_dbw_msgs__msg__ParkingBrake * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__ParkingBrake__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__ParkingBrake__Sequence__init(raptor_dbw_msgs__msg__ParkingBrake__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__ParkingBrake * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__ParkingBrake *)calloc(size, sizeof(raptor_dbw_msgs__msg__ParkingBrake));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__ParkingBrake__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__ParkingBrake__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
raptor_dbw_msgs__msg__ParkingBrake__Sequence__fini(raptor_dbw_msgs__msg__ParkingBrake__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__ParkingBrake__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

raptor_dbw_msgs__msg__ParkingBrake__Sequence *
raptor_dbw_msgs__msg__ParkingBrake__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__ParkingBrake__Sequence * array = (raptor_dbw_msgs__msg__ParkingBrake__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__ParkingBrake__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__ParkingBrake__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__ParkingBrake__Sequence__destroy(raptor_dbw_msgs__msg__ParkingBrake__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__ParkingBrake__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__ParkingBrake__Sequence__are_equal(const raptor_dbw_msgs__msg__ParkingBrake__Sequence * lhs, const raptor_dbw_msgs__msg__ParkingBrake__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__ParkingBrake__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__ParkingBrake__Sequence__copy(
  const raptor_dbw_msgs__msg__ParkingBrake__Sequence * input,
  raptor_dbw_msgs__msg__ParkingBrake__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__ParkingBrake);
    raptor_dbw_msgs__msg__ParkingBrake * data =
      (raptor_dbw_msgs__msg__ParkingBrake *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__ParkingBrake__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__ParkingBrake__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__ParkingBrake__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
