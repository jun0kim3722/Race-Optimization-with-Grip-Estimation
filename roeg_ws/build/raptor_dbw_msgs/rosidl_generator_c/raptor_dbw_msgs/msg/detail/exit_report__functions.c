// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/exit_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__ExitReport__init(raptor_dbw_msgs__msg__ExitReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__ExitReport__fini(msg);
    return false;
  }
  // akit_disable
  // driver_in_control
  // idx_auton_disable_no_brakes
  // idx_auton_disable_apply_brakes
  // auton_counter
  return true;
}

void
raptor_dbw_msgs__msg__ExitReport__fini(raptor_dbw_msgs__msg__ExitReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // akit_disable
  // driver_in_control
  // idx_auton_disable_no_brakes
  // idx_auton_disable_apply_brakes
  // auton_counter
}

bool
raptor_dbw_msgs__msg__ExitReport__are_equal(const raptor_dbw_msgs__msg__ExitReport * lhs, const raptor_dbw_msgs__msg__ExitReport * rhs)
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
  // akit_disable
  if (lhs->akit_disable != rhs->akit_disable) {
    return false;
  }
  // driver_in_control
  if (lhs->driver_in_control != rhs->driver_in_control) {
    return false;
  }
  // idx_auton_disable_no_brakes
  if (lhs->idx_auton_disable_no_brakes != rhs->idx_auton_disable_no_brakes) {
    return false;
  }
  // idx_auton_disable_apply_brakes
  if (lhs->idx_auton_disable_apply_brakes != rhs->idx_auton_disable_apply_brakes) {
    return false;
  }
  // auton_counter
  if (lhs->auton_counter != rhs->auton_counter) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__ExitReport__copy(
  const raptor_dbw_msgs__msg__ExitReport * input,
  raptor_dbw_msgs__msg__ExitReport * output)
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
  // akit_disable
  output->akit_disable = input->akit_disable;
  // driver_in_control
  output->driver_in_control = input->driver_in_control;
  // idx_auton_disable_no_brakes
  output->idx_auton_disable_no_brakes = input->idx_auton_disable_no_brakes;
  // idx_auton_disable_apply_brakes
  output->idx_auton_disable_apply_brakes = input->idx_auton_disable_apply_brakes;
  // auton_counter
  output->auton_counter = input->auton_counter;
  return true;
}

raptor_dbw_msgs__msg__ExitReport *
raptor_dbw_msgs__msg__ExitReport__create()
{
  raptor_dbw_msgs__msg__ExitReport * msg = (raptor_dbw_msgs__msg__ExitReport *)malloc(sizeof(raptor_dbw_msgs__msg__ExitReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__ExitReport));
  bool success = raptor_dbw_msgs__msg__ExitReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__ExitReport__destroy(raptor_dbw_msgs__msg__ExitReport * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__ExitReport__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__ExitReport__Sequence__init(raptor_dbw_msgs__msg__ExitReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__ExitReport * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__ExitReport *)calloc(size, sizeof(raptor_dbw_msgs__msg__ExitReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__ExitReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__ExitReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__ExitReport__Sequence__fini(raptor_dbw_msgs__msg__ExitReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__ExitReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__ExitReport__Sequence *
raptor_dbw_msgs__msg__ExitReport__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__ExitReport__Sequence * array = (raptor_dbw_msgs__msg__ExitReport__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__ExitReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__ExitReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__ExitReport__Sequence__destroy(raptor_dbw_msgs__msg__ExitReport__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__ExitReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__ExitReport__Sequence__are_equal(const raptor_dbw_msgs__msg__ExitReport__Sequence * lhs, const raptor_dbw_msgs__msg__ExitReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__ExitReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__ExitReport__Sequence__copy(
  const raptor_dbw_msgs__msg__ExitReport__Sequence * input,
  raptor_dbw_msgs__msg__ExitReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__ExitReport);
    raptor_dbw_msgs__msg__ExitReport * data =
      (raptor_dbw_msgs__msg__ExitReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__ExitReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__ExitReport__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__ExitReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
