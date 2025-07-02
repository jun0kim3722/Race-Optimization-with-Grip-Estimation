// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/gear_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "raptor_dbw_msgs/msg/detail/gear__functions.h"

bool
raptor_dbw_msgs__msg__GearReport__init(raptor_dbw_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
    return false;
  }
  // state
  if (!raptor_dbw_msgs__msg__Gear__init(&msg->state)) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
    return false;
  }
  // reject
  // driver_activity
  // enabled
  // trans_curr_gear
  // gear_select_system_fault
  // gear_mismatch_flash
  return true;
}

void
raptor_dbw_msgs__msg__GearReport__fini(raptor_dbw_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  raptor_dbw_msgs__msg__Gear__fini(&msg->state);
  // reject
  // driver_activity
  // enabled
  // trans_curr_gear
  // gear_select_system_fault
  // gear_mismatch_flash
}

bool
raptor_dbw_msgs__msg__GearReport__are_equal(const raptor_dbw_msgs__msg__GearReport * lhs, const raptor_dbw_msgs__msg__GearReport * rhs)
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
  // state
  if (!raptor_dbw_msgs__msg__Gear__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // reject
  if (lhs->reject != rhs->reject) {
    return false;
  }
  // driver_activity
  if (lhs->driver_activity != rhs->driver_activity) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // trans_curr_gear
  if (lhs->trans_curr_gear != rhs->trans_curr_gear) {
    return false;
  }
  // gear_select_system_fault
  if (lhs->gear_select_system_fault != rhs->gear_select_system_fault) {
    return false;
  }
  // gear_mismatch_flash
  if (lhs->gear_mismatch_flash != rhs->gear_mismatch_flash) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__GearReport__copy(
  const raptor_dbw_msgs__msg__GearReport * input,
  raptor_dbw_msgs__msg__GearReport * output)
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
  // state
  if (!raptor_dbw_msgs__msg__Gear__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // reject
  output->reject = input->reject;
  // driver_activity
  output->driver_activity = input->driver_activity;
  // enabled
  output->enabled = input->enabled;
  // trans_curr_gear
  output->trans_curr_gear = input->trans_curr_gear;
  // gear_select_system_fault
  output->gear_select_system_fault = input->gear_select_system_fault;
  // gear_mismatch_flash
  output->gear_mismatch_flash = input->gear_mismatch_flash;
  return true;
}

raptor_dbw_msgs__msg__GearReport *
raptor_dbw_msgs__msg__GearReport__create()
{
  raptor_dbw_msgs__msg__GearReport * msg = (raptor_dbw_msgs__msg__GearReport *)malloc(sizeof(raptor_dbw_msgs__msg__GearReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__GearReport));
  bool success = raptor_dbw_msgs__msg__GearReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__GearReport__destroy(raptor_dbw_msgs__msg__GearReport * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__GearReport__Sequence__init(raptor_dbw_msgs__msg__GearReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__GearReport * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__GearReport *)calloc(size, sizeof(raptor_dbw_msgs__msg__GearReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__GearReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__GearReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__GearReport__Sequence__fini(raptor_dbw_msgs__msg__GearReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__GearReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__GearReport__Sequence *
raptor_dbw_msgs__msg__GearReport__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__GearReport__Sequence * array = (raptor_dbw_msgs__msg__GearReport__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__GearReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__GearReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__GearReport__Sequence__destroy(raptor_dbw_msgs__msg__GearReport__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__GearReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__GearReport__Sequence__are_equal(const raptor_dbw_msgs__msg__GearReport__Sequence * lhs, const raptor_dbw_msgs__msg__GearReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__GearReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__GearReport__Sequence__copy(
  const raptor_dbw_msgs__msg__GearReport__Sequence * input,
  raptor_dbw_msgs__msg__GearReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__GearReport);
    raptor_dbw_msgs__msg__GearReport * data =
      (raptor_dbw_msgs__msg__GearReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__GearReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__GearReport__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__GearReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
