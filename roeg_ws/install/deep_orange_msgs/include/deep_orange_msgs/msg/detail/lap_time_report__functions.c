// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/LapTimeReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/lap_time_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__LapTimeReport__init(deep_orange_msgs__msg__LapTimeReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__LapTimeReport__fini(msg);
    return false;
  }
  // laps
  // lap_time
  // time_stamp
  return true;
}

void
deep_orange_msgs__msg__LapTimeReport__fini(deep_orange_msgs__msg__LapTimeReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // laps
  // lap_time
  // time_stamp
}

bool
deep_orange_msgs__msg__LapTimeReport__are_equal(const deep_orange_msgs__msg__LapTimeReport * lhs, const deep_orange_msgs__msg__LapTimeReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // laps
  if (lhs->laps != rhs->laps) {
    return false;
  }
  // lap_time
  if (lhs->lap_time != rhs->lap_time) {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__LapTimeReport__copy(
  const deep_orange_msgs__msg__LapTimeReport * input,
  deep_orange_msgs__msg__LapTimeReport * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // laps
  output->laps = input->laps;
  // lap_time
  output->lap_time = input->lap_time;
  // time_stamp
  output->time_stamp = input->time_stamp;
  return true;
}

deep_orange_msgs__msg__LapTimeReport *
deep_orange_msgs__msg__LapTimeReport__create()
{
  deep_orange_msgs__msg__LapTimeReport * msg = (deep_orange_msgs__msg__LapTimeReport *)malloc(sizeof(deep_orange_msgs__msg__LapTimeReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__LapTimeReport));
  bool success = deep_orange_msgs__msg__LapTimeReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__LapTimeReport__destroy(deep_orange_msgs__msg__LapTimeReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__LapTimeReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__LapTimeReport__Sequence__init(deep_orange_msgs__msg__LapTimeReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__LapTimeReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__LapTimeReport *)calloc(size, sizeof(deep_orange_msgs__msg__LapTimeReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__LapTimeReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__LapTimeReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__LapTimeReport__Sequence__fini(deep_orange_msgs__msg__LapTimeReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__LapTimeReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__LapTimeReport__Sequence *
deep_orange_msgs__msg__LapTimeReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__LapTimeReport__Sequence * array = (deep_orange_msgs__msg__LapTimeReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__LapTimeReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__LapTimeReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__LapTimeReport__Sequence__destroy(deep_orange_msgs__msg__LapTimeReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__LapTimeReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__LapTimeReport__Sequence__are_equal(const deep_orange_msgs__msg__LapTimeReport__Sequence * lhs, const deep_orange_msgs__msg__LapTimeReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__LapTimeReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__LapTimeReport__Sequence__copy(
  const deep_orange_msgs__msg__LapTimeReport__Sequence * input,
  deep_orange_msgs__msg__LapTimeReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__LapTimeReport);
    deep_orange_msgs__msg__LapTimeReport * data =
      (deep_orange_msgs__msg__LapTimeReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__LapTimeReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__LapTimeReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__LapTimeReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
