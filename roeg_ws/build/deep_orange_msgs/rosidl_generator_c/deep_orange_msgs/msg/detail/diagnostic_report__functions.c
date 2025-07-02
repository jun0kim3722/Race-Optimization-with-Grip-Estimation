// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/diagnostic_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__DiagnosticReport__init(deep_orange_msgs__msg__DiagnosticReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__DiagnosticReport__fini(msg);
    return false;
  }
  // sd_system_warning
  // sd_system_failure
  // motec_warning
  // sd_brake_warning1
  // sd_brake_warning2
  // sd_brake_warning3
  // sd_steer_warning1
  // sd_steer_warning2
  // sd_steer_warning3
  // est1_oos_front_brk
  // est2_oos_rear_brk
  // est3_low_eng_speed
  // est4_sd_comms_loss
  // est5_motec_comms_loss
  // est6_sd_ebrake
  // adlink_hb_lost
  // rc_lost
  return true;
}

void
deep_orange_msgs__msg__DiagnosticReport__fini(deep_orange_msgs__msg__DiagnosticReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // sd_system_warning
  // sd_system_failure
  // motec_warning
  // sd_brake_warning1
  // sd_brake_warning2
  // sd_brake_warning3
  // sd_steer_warning1
  // sd_steer_warning2
  // sd_steer_warning3
  // est1_oos_front_brk
  // est2_oos_rear_brk
  // est3_low_eng_speed
  // est4_sd_comms_loss
  // est5_motec_comms_loss
  // est6_sd_ebrake
  // adlink_hb_lost
  // rc_lost
}

bool
deep_orange_msgs__msg__DiagnosticReport__are_equal(const deep_orange_msgs__msg__DiagnosticReport * lhs, const deep_orange_msgs__msg__DiagnosticReport * rhs)
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
  // sd_system_warning
  if (lhs->sd_system_warning != rhs->sd_system_warning) {
    return false;
  }
  // sd_system_failure
  if (lhs->sd_system_failure != rhs->sd_system_failure) {
    return false;
  }
  // motec_warning
  if (lhs->motec_warning != rhs->motec_warning) {
    return false;
  }
  // sd_brake_warning1
  if (lhs->sd_brake_warning1 != rhs->sd_brake_warning1) {
    return false;
  }
  // sd_brake_warning2
  if (lhs->sd_brake_warning2 != rhs->sd_brake_warning2) {
    return false;
  }
  // sd_brake_warning3
  if (lhs->sd_brake_warning3 != rhs->sd_brake_warning3) {
    return false;
  }
  // sd_steer_warning1
  if (lhs->sd_steer_warning1 != rhs->sd_steer_warning1) {
    return false;
  }
  // sd_steer_warning2
  if (lhs->sd_steer_warning2 != rhs->sd_steer_warning2) {
    return false;
  }
  // sd_steer_warning3
  if (lhs->sd_steer_warning3 != rhs->sd_steer_warning3) {
    return false;
  }
  // est1_oos_front_brk
  if (lhs->est1_oos_front_brk != rhs->est1_oos_front_brk) {
    return false;
  }
  // est2_oos_rear_brk
  if (lhs->est2_oos_rear_brk != rhs->est2_oos_rear_brk) {
    return false;
  }
  // est3_low_eng_speed
  if (lhs->est3_low_eng_speed != rhs->est3_low_eng_speed) {
    return false;
  }
  // est4_sd_comms_loss
  if (lhs->est4_sd_comms_loss != rhs->est4_sd_comms_loss) {
    return false;
  }
  // est5_motec_comms_loss
  if (lhs->est5_motec_comms_loss != rhs->est5_motec_comms_loss) {
    return false;
  }
  // est6_sd_ebrake
  if (lhs->est6_sd_ebrake != rhs->est6_sd_ebrake) {
    return false;
  }
  // adlink_hb_lost
  if (lhs->adlink_hb_lost != rhs->adlink_hb_lost) {
    return false;
  }
  // rc_lost
  if (lhs->rc_lost != rhs->rc_lost) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__DiagnosticReport__copy(
  const deep_orange_msgs__msg__DiagnosticReport * input,
  deep_orange_msgs__msg__DiagnosticReport * output)
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
  // sd_system_warning
  output->sd_system_warning = input->sd_system_warning;
  // sd_system_failure
  output->sd_system_failure = input->sd_system_failure;
  // motec_warning
  output->motec_warning = input->motec_warning;
  // sd_brake_warning1
  output->sd_brake_warning1 = input->sd_brake_warning1;
  // sd_brake_warning2
  output->sd_brake_warning2 = input->sd_brake_warning2;
  // sd_brake_warning3
  output->sd_brake_warning3 = input->sd_brake_warning3;
  // sd_steer_warning1
  output->sd_steer_warning1 = input->sd_steer_warning1;
  // sd_steer_warning2
  output->sd_steer_warning2 = input->sd_steer_warning2;
  // sd_steer_warning3
  output->sd_steer_warning3 = input->sd_steer_warning3;
  // est1_oos_front_brk
  output->est1_oos_front_brk = input->est1_oos_front_brk;
  // est2_oos_rear_brk
  output->est2_oos_rear_brk = input->est2_oos_rear_brk;
  // est3_low_eng_speed
  output->est3_low_eng_speed = input->est3_low_eng_speed;
  // est4_sd_comms_loss
  output->est4_sd_comms_loss = input->est4_sd_comms_loss;
  // est5_motec_comms_loss
  output->est5_motec_comms_loss = input->est5_motec_comms_loss;
  // est6_sd_ebrake
  output->est6_sd_ebrake = input->est6_sd_ebrake;
  // adlink_hb_lost
  output->adlink_hb_lost = input->adlink_hb_lost;
  // rc_lost
  output->rc_lost = input->rc_lost;
  return true;
}

deep_orange_msgs__msg__DiagnosticReport *
deep_orange_msgs__msg__DiagnosticReport__create()
{
  deep_orange_msgs__msg__DiagnosticReport * msg = (deep_orange_msgs__msg__DiagnosticReport *)malloc(sizeof(deep_orange_msgs__msg__DiagnosticReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__DiagnosticReport));
  bool success = deep_orange_msgs__msg__DiagnosticReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__DiagnosticReport__destroy(deep_orange_msgs__msg__DiagnosticReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__DiagnosticReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__DiagnosticReport__Sequence__init(deep_orange_msgs__msg__DiagnosticReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__DiagnosticReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__DiagnosticReport *)calloc(size, sizeof(deep_orange_msgs__msg__DiagnosticReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__DiagnosticReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__DiagnosticReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__DiagnosticReport__Sequence__fini(deep_orange_msgs__msg__DiagnosticReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__DiagnosticReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__DiagnosticReport__Sequence *
deep_orange_msgs__msg__DiagnosticReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__DiagnosticReport__Sequence * array = (deep_orange_msgs__msg__DiagnosticReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__DiagnosticReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__DiagnosticReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__DiagnosticReport__Sequence__destroy(deep_orange_msgs__msg__DiagnosticReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__DiagnosticReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__DiagnosticReport__Sequence__are_equal(const deep_orange_msgs__msg__DiagnosticReport__Sequence * lhs, const deep_orange_msgs__msg__DiagnosticReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__DiagnosticReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__DiagnosticReport__Sequence__copy(
  const deep_orange_msgs__msg__DiagnosticReport__Sequence * input,
  deep_orange_msgs__msg__DiagnosticReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__DiagnosticReport);
    deep_orange_msgs__msg__DiagnosticReport * data =
      (deep_orange_msgs__msg__DiagnosticReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__DiagnosticReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__DiagnosticReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__DiagnosticReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
