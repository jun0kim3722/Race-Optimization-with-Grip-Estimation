// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/brake_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `control_type`
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"
// Member `park_brake_cmd`
#include "raptor_dbw_msgs/msg/detail/parking_brake__functions.h"

bool
raptor_dbw_msgs__msg__BrakeCmd__init(raptor_dbw_msgs__msg__BrakeCmd * msg)
{
  if (!msg) {
    return false;
  }
  // pedal_cmd
  // enable
  // rolling_counter
  // torque_cmd
  // decel_limit
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__init(&msg->control_type)) {
    raptor_dbw_msgs__msg__BrakeCmd__fini(msg);
    return false;
  }
  // decel_negative_jerk_limit
  // park_brake_cmd
  if (!raptor_dbw_msgs__msg__ParkingBrake__init(&msg->park_brake_cmd)) {
    raptor_dbw_msgs__msg__BrakeCmd__fini(msg);
    return false;
  }
  return true;
}

void
raptor_dbw_msgs__msg__BrakeCmd__fini(raptor_dbw_msgs__msg__BrakeCmd * msg)
{
  if (!msg) {
    return;
  }
  // pedal_cmd
  // enable
  // rolling_counter
  // torque_cmd
  // decel_limit
  // control_type
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(&msg->control_type);
  // decel_negative_jerk_limit
  // park_brake_cmd
  raptor_dbw_msgs__msg__ParkingBrake__fini(&msg->park_brake_cmd);
}

bool
raptor_dbw_msgs__msg__BrakeCmd__are_equal(const raptor_dbw_msgs__msg__BrakeCmd * lhs, const raptor_dbw_msgs__msg__BrakeCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pedal_cmd
  if (lhs->pedal_cmd != rhs->pedal_cmd) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // torque_cmd
  if (lhs->torque_cmd != rhs->torque_cmd) {
    return false;
  }
  // decel_limit
  if (lhs->decel_limit != rhs->decel_limit) {
    return false;
  }
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__are_equal(
      &(lhs->control_type), &(rhs->control_type)))
  {
    return false;
  }
  // decel_negative_jerk_limit
  if (lhs->decel_negative_jerk_limit != rhs->decel_negative_jerk_limit) {
    return false;
  }
  // park_brake_cmd
  if (!raptor_dbw_msgs__msg__ParkingBrake__are_equal(
      &(lhs->park_brake_cmd), &(rhs->park_brake_cmd)))
  {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__BrakeCmd__copy(
  const raptor_dbw_msgs__msg__BrakeCmd * input,
  raptor_dbw_msgs__msg__BrakeCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // pedal_cmd
  output->pedal_cmd = input->pedal_cmd;
  // enable
  output->enable = input->enable;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // torque_cmd
  output->torque_cmd = input->torque_cmd;
  // decel_limit
  output->decel_limit = input->decel_limit;
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__copy(
      &(input->control_type), &(output->control_type)))
  {
    return false;
  }
  // decel_negative_jerk_limit
  output->decel_negative_jerk_limit = input->decel_negative_jerk_limit;
  // park_brake_cmd
  if (!raptor_dbw_msgs__msg__ParkingBrake__copy(
      &(input->park_brake_cmd), &(output->park_brake_cmd)))
  {
    return false;
  }
  return true;
}

raptor_dbw_msgs__msg__BrakeCmd *
raptor_dbw_msgs__msg__BrakeCmd__create()
{
  raptor_dbw_msgs__msg__BrakeCmd * msg = (raptor_dbw_msgs__msg__BrakeCmd *)malloc(sizeof(raptor_dbw_msgs__msg__BrakeCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__BrakeCmd));
  bool success = raptor_dbw_msgs__msg__BrakeCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__BrakeCmd__destroy(raptor_dbw_msgs__msg__BrakeCmd * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__BrakeCmd__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__BrakeCmd__Sequence__init(raptor_dbw_msgs__msg__BrakeCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__BrakeCmd * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__BrakeCmd *)calloc(size, sizeof(raptor_dbw_msgs__msg__BrakeCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__BrakeCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__BrakeCmd__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__BrakeCmd__Sequence__fini(raptor_dbw_msgs__msg__BrakeCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__BrakeCmd__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__BrakeCmd__Sequence *
raptor_dbw_msgs__msg__BrakeCmd__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__BrakeCmd__Sequence * array = (raptor_dbw_msgs__msg__BrakeCmd__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__BrakeCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__BrakeCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__BrakeCmd__Sequence__destroy(raptor_dbw_msgs__msg__BrakeCmd__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__BrakeCmd__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__BrakeCmd__Sequence__are_equal(const raptor_dbw_msgs__msg__BrakeCmd__Sequence * lhs, const raptor_dbw_msgs__msg__BrakeCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__BrakeCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__BrakeCmd__Sequence__copy(
  const raptor_dbw_msgs__msg__BrakeCmd__Sequence * input,
  raptor_dbw_msgs__msg__BrakeCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__BrakeCmd);
    raptor_dbw_msgs__msg__BrakeCmd * data =
      (raptor_dbw_msgs__msg__BrakeCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__BrakeCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__BrakeCmd__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__BrakeCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
