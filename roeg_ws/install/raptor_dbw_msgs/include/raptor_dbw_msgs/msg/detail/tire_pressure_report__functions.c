// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/TirePressureReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/tire_pressure_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__TirePressureReport__init(raptor_dbw_msgs__msg__TirePressureReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__TirePressureReport__fini(msg);
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  return true;
}

void
raptor_dbw_msgs__msg__TirePressureReport__fini(raptor_dbw_msgs__msg__TirePressureReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_left
  // front_right
  // rear_left
  // rear_right
}

bool
raptor_dbw_msgs__msg__TirePressureReport__are_equal(const raptor_dbw_msgs__msg__TirePressureReport * lhs, const raptor_dbw_msgs__msg__TirePressureReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__TirePressureReport__copy(
  const raptor_dbw_msgs__msg__TirePressureReport * input,
  raptor_dbw_msgs__msg__TirePressureReport * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  return true;
}

raptor_dbw_msgs__msg__TirePressureReport *
raptor_dbw_msgs__msg__TirePressureReport__create()
{
  raptor_dbw_msgs__msg__TirePressureReport * msg = (raptor_dbw_msgs__msg__TirePressureReport *)malloc(sizeof(raptor_dbw_msgs__msg__TirePressureReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__TirePressureReport));
  bool success = raptor_dbw_msgs__msg__TirePressureReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__TirePressureReport__destroy(raptor_dbw_msgs__msg__TirePressureReport * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__TirePressureReport__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__TirePressureReport__Sequence__init(raptor_dbw_msgs__msg__TirePressureReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__TirePressureReport * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__TirePressureReport *)calloc(size, sizeof(raptor_dbw_msgs__msg__TirePressureReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__TirePressureReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__TirePressureReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__TirePressureReport__Sequence__fini(raptor_dbw_msgs__msg__TirePressureReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__TirePressureReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__TirePressureReport__Sequence *
raptor_dbw_msgs__msg__TirePressureReport__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__TirePressureReport__Sequence * array = (raptor_dbw_msgs__msg__TirePressureReport__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__TirePressureReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__TirePressureReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__TirePressureReport__Sequence__destroy(raptor_dbw_msgs__msg__TirePressureReport__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__TirePressureReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__TirePressureReport__Sequence__are_equal(const raptor_dbw_msgs__msg__TirePressureReport__Sequence * lhs, const raptor_dbw_msgs__msg__TirePressureReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__TirePressureReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__TirePressureReport__Sequence__copy(
  const raptor_dbw_msgs__msg__TirePressureReport__Sequence * input,
  raptor_dbw_msgs__msg__TirePressureReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__TirePressureReport);
    raptor_dbw_msgs__msg__TirePressureReport * data =
      (raptor_dbw_msgs__msg__TirePressureReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__TirePressureReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__TirePressureReport__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__TirePressureReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
