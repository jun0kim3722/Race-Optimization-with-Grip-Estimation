// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `remote_estop_btn_pressed`
#include "raptor_dbw_msgs/msg/detail/button_state__functions.h"

bool
raptor_dbw_msgs__msg__FaultActionsReport__init(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__FaultActionsReport__fini(msg);
    return false;
  }
  // autonomous_disabled_no_brakes
  // autonomous_disabled_apply_brakes
  // can_gateway_disabled
  // inverter_contactor_disabled
  // prevent_enter_autonomous_mode
  // warn_driver_only
  // chime_fcw_beeps
  // last_active_fault_idx
  // estop_btn_pressed
  // remote_estop_btn_pressed
  if (!raptor_dbw_msgs__msg__ButtonState__init(&msg->remote_estop_btn_pressed)) {
    raptor_dbw_msgs__msg__FaultActionsReport__fini(msg);
    return false;
  }
  return true;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__fini(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // autonomous_disabled_no_brakes
  // autonomous_disabled_apply_brakes
  // can_gateway_disabled
  // inverter_contactor_disabled
  // prevent_enter_autonomous_mode
  // warn_driver_only
  // chime_fcw_beeps
  // last_active_fault_idx
  // estop_btn_pressed
  // remote_estop_btn_pressed
  raptor_dbw_msgs__msg__ButtonState__fini(&msg->remote_estop_btn_pressed);
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__are_equal(const raptor_dbw_msgs__msg__FaultActionsReport * lhs, const raptor_dbw_msgs__msg__FaultActionsReport * rhs)
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
  // autonomous_disabled_no_brakes
  if (lhs->autonomous_disabled_no_brakes != rhs->autonomous_disabled_no_brakes) {
    return false;
  }
  // autonomous_disabled_apply_brakes
  if (lhs->autonomous_disabled_apply_brakes != rhs->autonomous_disabled_apply_brakes) {
    return false;
  }
  // can_gateway_disabled
  if (lhs->can_gateway_disabled != rhs->can_gateway_disabled) {
    return false;
  }
  // inverter_contactor_disabled
  if (lhs->inverter_contactor_disabled != rhs->inverter_contactor_disabled) {
    return false;
  }
  // prevent_enter_autonomous_mode
  if (lhs->prevent_enter_autonomous_mode != rhs->prevent_enter_autonomous_mode) {
    return false;
  }
  // warn_driver_only
  if (lhs->warn_driver_only != rhs->warn_driver_only) {
    return false;
  }
  // chime_fcw_beeps
  if (lhs->chime_fcw_beeps != rhs->chime_fcw_beeps) {
    return false;
  }
  // last_active_fault_idx
  if (lhs->last_active_fault_idx != rhs->last_active_fault_idx) {
    return false;
  }
  // estop_btn_pressed
  if (lhs->estop_btn_pressed != rhs->estop_btn_pressed) {
    return false;
  }
  // remote_estop_btn_pressed
  if (!raptor_dbw_msgs__msg__ButtonState__are_equal(
      &(lhs->remote_estop_btn_pressed), &(rhs->remote_estop_btn_pressed)))
  {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__copy(
  const raptor_dbw_msgs__msg__FaultActionsReport * input,
  raptor_dbw_msgs__msg__FaultActionsReport * output)
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
  // autonomous_disabled_no_brakes
  output->autonomous_disabled_no_brakes = input->autonomous_disabled_no_brakes;
  // autonomous_disabled_apply_brakes
  output->autonomous_disabled_apply_brakes = input->autonomous_disabled_apply_brakes;
  // can_gateway_disabled
  output->can_gateway_disabled = input->can_gateway_disabled;
  // inverter_contactor_disabled
  output->inverter_contactor_disabled = input->inverter_contactor_disabled;
  // prevent_enter_autonomous_mode
  output->prevent_enter_autonomous_mode = input->prevent_enter_autonomous_mode;
  // warn_driver_only
  output->warn_driver_only = input->warn_driver_only;
  // chime_fcw_beeps
  output->chime_fcw_beeps = input->chime_fcw_beeps;
  // last_active_fault_idx
  output->last_active_fault_idx = input->last_active_fault_idx;
  // estop_btn_pressed
  output->estop_btn_pressed = input->estop_btn_pressed;
  // remote_estop_btn_pressed
  if (!raptor_dbw_msgs__msg__ButtonState__copy(
      &(input->remote_estop_btn_pressed), &(output->remote_estop_btn_pressed)))
  {
    return false;
  }
  return true;
}

raptor_dbw_msgs__msg__FaultActionsReport *
raptor_dbw_msgs__msg__FaultActionsReport__create()
{
  raptor_dbw_msgs__msg__FaultActionsReport * msg = (raptor_dbw_msgs__msg__FaultActionsReport *)malloc(sizeof(raptor_dbw_msgs__msg__FaultActionsReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__FaultActionsReport));
  bool success = raptor_dbw_msgs__msg__FaultActionsReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__destroy(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__FaultActionsReport__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__init(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__FaultActionsReport * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__FaultActionsReport *)calloc(size, sizeof(raptor_dbw_msgs__msg__FaultActionsReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__FaultActionsReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__FaultActionsReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__fini(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__FaultActionsReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__FaultActionsReport__Sequence *
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array = (raptor_dbw_msgs__msg__FaultActionsReport__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__FaultActionsReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__FaultActionsReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__destroy(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__FaultActionsReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__are_equal(const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * lhs, const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__FaultActionsReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__copy(
  const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * input,
  raptor_dbw_msgs__msg__FaultActionsReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__FaultActionsReport);
    raptor_dbw_msgs__msg__FaultActionsReport * data =
      (raptor_dbw_msgs__msg__FaultActionsReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__FaultActionsReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__FaultActionsReport__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__FaultActionsReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
