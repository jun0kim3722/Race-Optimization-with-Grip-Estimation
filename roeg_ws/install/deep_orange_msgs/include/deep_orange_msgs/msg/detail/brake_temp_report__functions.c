// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/BrakeTempReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/brake_temp_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__BrakeTempReport__init(deep_orange_msgs__msg__BrakeTempReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__BrakeTempReport__fini(msg);
    return false;
  }
  // fl_brake_temp
  // fr_brake_temp
  // rl_brake_temp
  // rr_brake_temp
  return true;
}

void
deep_orange_msgs__msg__BrakeTempReport__fini(deep_orange_msgs__msg__BrakeTempReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // fl_brake_temp
  // fr_brake_temp
  // rl_brake_temp
  // rr_brake_temp
}

bool
deep_orange_msgs__msg__BrakeTempReport__are_equal(const deep_orange_msgs__msg__BrakeTempReport * lhs, const deep_orange_msgs__msg__BrakeTempReport * rhs)
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
  // fl_brake_temp
  if (lhs->fl_brake_temp != rhs->fl_brake_temp) {
    return false;
  }
  // fr_brake_temp
  if (lhs->fr_brake_temp != rhs->fr_brake_temp) {
    return false;
  }
  // rl_brake_temp
  if (lhs->rl_brake_temp != rhs->rl_brake_temp) {
    return false;
  }
  // rr_brake_temp
  if (lhs->rr_brake_temp != rhs->rr_brake_temp) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__BrakeTempReport__copy(
  const deep_orange_msgs__msg__BrakeTempReport * input,
  deep_orange_msgs__msg__BrakeTempReport * output)
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
  // fl_brake_temp
  output->fl_brake_temp = input->fl_brake_temp;
  // fr_brake_temp
  output->fr_brake_temp = input->fr_brake_temp;
  // rl_brake_temp
  output->rl_brake_temp = input->rl_brake_temp;
  // rr_brake_temp
  output->rr_brake_temp = input->rr_brake_temp;
  return true;
}

deep_orange_msgs__msg__BrakeTempReport *
deep_orange_msgs__msg__BrakeTempReport__create()
{
  deep_orange_msgs__msg__BrakeTempReport * msg = (deep_orange_msgs__msg__BrakeTempReport *)malloc(sizeof(deep_orange_msgs__msg__BrakeTempReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__BrakeTempReport));
  bool success = deep_orange_msgs__msg__BrakeTempReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__BrakeTempReport__destroy(deep_orange_msgs__msg__BrakeTempReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__BrakeTempReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__BrakeTempReport__Sequence__init(deep_orange_msgs__msg__BrakeTempReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__BrakeTempReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__BrakeTempReport *)calloc(size, sizeof(deep_orange_msgs__msg__BrakeTempReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__BrakeTempReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__BrakeTempReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__BrakeTempReport__Sequence__fini(deep_orange_msgs__msg__BrakeTempReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__BrakeTempReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__BrakeTempReport__Sequence *
deep_orange_msgs__msg__BrakeTempReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__BrakeTempReport__Sequence * array = (deep_orange_msgs__msg__BrakeTempReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__BrakeTempReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__BrakeTempReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__BrakeTempReport__Sequence__destroy(deep_orange_msgs__msg__BrakeTempReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__BrakeTempReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__BrakeTempReport__Sequence__are_equal(const deep_orange_msgs__msg__BrakeTempReport__Sequence * lhs, const deep_orange_msgs__msg__BrakeTempReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__BrakeTempReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__BrakeTempReport__Sequence__copy(
  const deep_orange_msgs__msg__BrakeTempReport__Sequence * input,
  deep_orange_msgs__msg__BrakeTempReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__BrakeTempReport);
    deep_orange_msgs__msg__BrakeTempReport * data =
      (deep_orange_msgs__msg__BrakeTempReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__BrakeTempReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__BrakeTempReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__BrakeTempReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
