// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_temp_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `front_left`
// Member `front_right`
// Member `rear_left`
// Member `rear_right`
#include "deep_orange_msgs/msg/detail/tire_temp__functions.h"

bool
deep_orange_msgs__msg__TireTempReport__init(deep_orange_msgs__msg__TireTempReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
    return false;
  }
  // front_left
  if (!deep_orange_msgs__msg__TireTemp__init(&msg->front_left)) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
    return false;
  }
  // front_right
  if (!deep_orange_msgs__msg__TireTemp__init(&msg->front_right)) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
    return false;
  }
  // rear_left
  if (!deep_orange_msgs__msg__TireTemp__init(&msg->rear_left)) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
    return false;
  }
  // rear_right
  if (!deep_orange_msgs__msg__TireTemp__init(&msg->rear_right)) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
    return false;
  }
  return true;
}

void
deep_orange_msgs__msg__TireTempReport__fini(deep_orange_msgs__msg__TireTempReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_left
  deep_orange_msgs__msg__TireTemp__fini(&msg->front_left);
  // front_right
  deep_orange_msgs__msg__TireTemp__fini(&msg->front_right);
  // rear_left
  deep_orange_msgs__msg__TireTemp__fini(&msg->rear_left);
  // rear_right
  deep_orange_msgs__msg__TireTemp__fini(&msg->rear_right);
}

bool
deep_orange_msgs__msg__TireTempReport__are_equal(const deep_orange_msgs__msg__TireTempReport * lhs, const deep_orange_msgs__msg__TireTempReport * rhs)
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
  if (!deep_orange_msgs__msg__TireTemp__are_equal(
      &(lhs->front_left), &(rhs->front_left)))
  {
    return false;
  }
  // front_right
  if (!deep_orange_msgs__msg__TireTemp__are_equal(
      &(lhs->front_right), &(rhs->front_right)))
  {
    return false;
  }
  // rear_left
  if (!deep_orange_msgs__msg__TireTemp__are_equal(
      &(lhs->rear_left), &(rhs->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!deep_orange_msgs__msg__TireTemp__are_equal(
      &(lhs->rear_right), &(rhs->rear_right)))
  {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__TireTempReport__copy(
  const deep_orange_msgs__msg__TireTempReport * input,
  deep_orange_msgs__msg__TireTempReport * output)
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
  if (!deep_orange_msgs__msg__TireTemp__copy(
      &(input->front_left), &(output->front_left)))
  {
    return false;
  }
  // front_right
  if (!deep_orange_msgs__msg__TireTemp__copy(
      &(input->front_right), &(output->front_right)))
  {
    return false;
  }
  // rear_left
  if (!deep_orange_msgs__msg__TireTemp__copy(
      &(input->rear_left), &(output->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!deep_orange_msgs__msg__TireTemp__copy(
      &(input->rear_right), &(output->rear_right)))
  {
    return false;
  }
  return true;
}

deep_orange_msgs__msg__TireTempReport *
deep_orange_msgs__msg__TireTempReport__create()
{
  deep_orange_msgs__msg__TireTempReport * msg = (deep_orange_msgs__msg__TireTempReport *)malloc(sizeof(deep_orange_msgs__msg__TireTempReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__TireTempReport));
  bool success = deep_orange_msgs__msg__TireTempReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__TireTempReport__destroy(deep_orange_msgs__msg__TireTempReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__TireTempReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__TireTempReport__Sequence__init(deep_orange_msgs__msg__TireTempReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__TireTempReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__TireTempReport *)calloc(size, sizeof(deep_orange_msgs__msg__TireTempReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__TireTempReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__TireTempReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__TireTempReport__Sequence__fini(deep_orange_msgs__msg__TireTempReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__TireTempReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__TireTempReport__Sequence *
deep_orange_msgs__msg__TireTempReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__TireTempReport__Sequence * array = (deep_orange_msgs__msg__TireTempReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__TireTempReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__TireTempReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__TireTempReport__Sequence__destroy(deep_orange_msgs__msg__TireTempReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__TireTempReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__TireTempReport__Sequence__are_equal(const deep_orange_msgs__msg__TireTempReport__Sequence * lhs, const deep_orange_msgs__msg__TireTempReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__TireTempReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__TireTempReport__Sequence__copy(
  const deep_orange_msgs__msg__TireTempReport__Sequence * input,
  deep_orange_msgs__msg__TireTempReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__TireTempReport);
    deep_orange_msgs__msg__TireTempReport * data =
      (deep_orange_msgs__msg__TireTempReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__TireTempReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__TireTempReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__TireTempReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
