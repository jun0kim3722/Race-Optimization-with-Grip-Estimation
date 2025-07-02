// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `fl_tire_temperature`
// Member `fr_tire_temperature`
// Member `rl_tire_temperature`
// Member `rr_tire_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deep_orange_msgs__msg__TireReport__init(deep_orange_msgs__msg__TireReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__TireReport__fini(msg);
    return false;
  }
  // fl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fl_tire_temperature, 0)) {
    deep_orange_msgs__msg__TireReport__fini(msg);
    return false;
  }
  // fl_damper_linear_potentiometer
  // fl_tire_pressure
  // fl_tire_pressure_gauge
  // fl_wheel_load
  // fr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fr_tire_temperature, 0)) {
    deep_orange_msgs__msg__TireReport__fini(msg);
    return false;
  }
  // fr_damper_linear_potentiometer
  // fr_tire_pressure
  // fr_tire_pressure_gauge
  // fr_wheel_load
  // rl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rl_tire_temperature, 0)) {
    deep_orange_msgs__msg__TireReport__fini(msg);
    return false;
  }
  // rl_damper_linear_potentiometer
  // rl_tire_pressure
  // rl_tire_pressure_gauge
  // rl_wheel_load
  // rr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rr_tire_temperature, 0)) {
    deep_orange_msgs__msg__TireReport__fini(msg);
    return false;
  }
  // rr_damper_linear_potentiometer
  // rr_tire_pressure
  // rr_tire_pressure_gauge
  // rr_wheel_load
  return true;
}

void
deep_orange_msgs__msg__TireReport__fini(deep_orange_msgs__msg__TireReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // fl_tire_temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->fl_tire_temperature);
  // fl_damper_linear_potentiometer
  // fl_tire_pressure
  // fl_tire_pressure_gauge
  // fl_wheel_load
  // fr_tire_temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->fr_tire_temperature);
  // fr_damper_linear_potentiometer
  // fr_tire_pressure
  // fr_tire_pressure_gauge
  // fr_wheel_load
  // rl_tire_temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->rl_tire_temperature);
  // rl_damper_linear_potentiometer
  // rl_tire_pressure
  // rl_tire_pressure_gauge
  // rl_wheel_load
  // rr_tire_temperature
  rosidl_runtime_c__float__Sequence__fini(&msg->rr_tire_temperature);
  // rr_damper_linear_potentiometer
  // rr_tire_pressure
  // rr_tire_pressure_gauge
  // rr_wheel_load
}

bool
deep_orange_msgs__msg__TireReport__are_equal(const deep_orange_msgs__msg__TireReport * lhs, const deep_orange_msgs__msg__TireReport * rhs)
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
  // fl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fl_tire_temperature), &(rhs->fl_tire_temperature)))
  {
    return false;
  }
  // fl_damper_linear_potentiometer
  if (lhs->fl_damper_linear_potentiometer != rhs->fl_damper_linear_potentiometer) {
    return false;
  }
  // fl_tire_pressure
  if (lhs->fl_tire_pressure != rhs->fl_tire_pressure) {
    return false;
  }
  // fl_tire_pressure_gauge
  if (lhs->fl_tire_pressure_gauge != rhs->fl_tire_pressure_gauge) {
    return false;
  }
  // fl_wheel_load
  if (lhs->fl_wheel_load != rhs->fl_wheel_load) {
    return false;
  }
  // fr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fr_tire_temperature), &(rhs->fr_tire_temperature)))
  {
    return false;
  }
  // fr_damper_linear_potentiometer
  if (lhs->fr_damper_linear_potentiometer != rhs->fr_damper_linear_potentiometer) {
    return false;
  }
  // fr_tire_pressure
  if (lhs->fr_tire_pressure != rhs->fr_tire_pressure) {
    return false;
  }
  // fr_tire_pressure_gauge
  if (lhs->fr_tire_pressure_gauge != rhs->fr_tire_pressure_gauge) {
    return false;
  }
  // fr_wheel_load
  if (lhs->fr_wheel_load != rhs->fr_wheel_load) {
    return false;
  }
  // rl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rl_tire_temperature), &(rhs->rl_tire_temperature)))
  {
    return false;
  }
  // rl_damper_linear_potentiometer
  if (lhs->rl_damper_linear_potentiometer != rhs->rl_damper_linear_potentiometer) {
    return false;
  }
  // rl_tire_pressure
  if (lhs->rl_tire_pressure != rhs->rl_tire_pressure) {
    return false;
  }
  // rl_tire_pressure_gauge
  if (lhs->rl_tire_pressure_gauge != rhs->rl_tire_pressure_gauge) {
    return false;
  }
  // rl_wheel_load
  if (lhs->rl_wheel_load != rhs->rl_wheel_load) {
    return false;
  }
  // rr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rr_tire_temperature), &(rhs->rr_tire_temperature)))
  {
    return false;
  }
  // rr_damper_linear_potentiometer
  if (lhs->rr_damper_linear_potentiometer != rhs->rr_damper_linear_potentiometer) {
    return false;
  }
  // rr_tire_pressure
  if (lhs->rr_tire_pressure != rhs->rr_tire_pressure) {
    return false;
  }
  // rr_tire_pressure_gauge
  if (lhs->rr_tire_pressure_gauge != rhs->rr_tire_pressure_gauge) {
    return false;
  }
  // rr_wheel_load
  if (lhs->rr_wheel_load != rhs->rr_wheel_load) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__TireReport__copy(
  const deep_orange_msgs__msg__TireReport * input,
  deep_orange_msgs__msg__TireReport * output)
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
  // fl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fl_tire_temperature), &(output->fl_tire_temperature)))
  {
    return false;
  }
  // fl_damper_linear_potentiometer
  output->fl_damper_linear_potentiometer = input->fl_damper_linear_potentiometer;
  // fl_tire_pressure
  output->fl_tire_pressure = input->fl_tire_pressure;
  // fl_tire_pressure_gauge
  output->fl_tire_pressure_gauge = input->fl_tire_pressure_gauge;
  // fl_wheel_load
  output->fl_wheel_load = input->fl_wheel_load;
  // fr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fr_tire_temperature), &(output->fr_tire_temperature)))
  {
    return false;
  }
  // fr_damper_linear_potentiometer
  output->fr_damper_linear_potentiometer = input->fr_damper_linear_potentiometer;
  // fr_tire_pressure
  output->fr_tire_pressure = input->fr_tire_pressure;
  // fr_tire_pressure_gauge
  output->fr_tire_pressure_gauge = input->fr_tire_pressure_gauge;
  // fr_wheel_load
  output->fr_wheel_load = input->fr_wheel_load;
  // rl_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rl_tire_temperature), &(output->rl_tire_temperature)))
  {
    return false;
  }
  // rl_damper_linear_potentiometer
  output->rl_damper_linear_potentiometer = input->rl_damper_linear_potentiometer;
  // rl_tire_pressure
  output->rl_tire_pressure = input->rl_tire_pressure;
  // rl_tire_pressure_gauge
  output->rl_tire_pressure_gauge = input->rl_tire_pressure_gauge;
  // rl_wheel_load
  output->rl_wheel_load = input->rl_wheel_load;
  // rr_tire_temperature
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rr_tire_temperature), &(output->rr_tire_temperature)))
  {
    return false;
  }
  // rr_damper_linear_potentiometer
  output->rr_damper_linear_potentiometer = input->rr_damper_linear_potentiometer;
  // rr_tire_pressure
  output->rr_tire_pressure = input->rr_tire_pressure;
  // rr_tire_pressure_gauge
  output->rr_tire_pressure_gauge = input->rr_tire_pressure_gauge;
  // rr_wheel_load
  output->rr_wheel_load = input->rr_wheel_load;
  return true;
}

deep_orange_msgs__msg__TireReport *
deep_orange_msgs__msg__TireReport__create()
{
  deep_orange_msgs__msg__TireReport * msg = (deep_orange_msgs__msg__TireReport *)malloc(sizeof(deep_orange_msgs__msg__TireReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__TireReport));
  bool success = deep_orange_msgs__msg__TireReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__TireReport__destroy(deep_orange_msgs__msg__TireReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__TireReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__TireReport__Sequence__init(deep_orange_msgs__msg__TireReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__TireReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__TireReport *)calloc(size, sizeof(deep_orange_msgs__msg__TireReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__TireReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__TireReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__TireReport__Sequence__fini(deep_orange_msgs__msg__TireReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__TireReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__TireReport__Sequence *
deep_orange_msgs__msg__TireReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__TireReport__Sequence * array = (deep_orange_msgs__msg__TireReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__TireReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__TireReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__TireReport__Sequence__destroy(deep_orange_msgs__msg__TireReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__TireReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__TireReport__Sequence__are_equal(const deep_orange_msgs__msg__TireReport__Sequence * lhs, const deep_orange_msgs__msg__TireReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__TireReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__TireReport__Sequence__copy(
  const deep_orange_msgs__msg__TireReport__Sequence * input,
  deep_orange_msgs__msg__TireReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__TireReport);
    deep_orange_msgs__msg__TireReport * data =
      (deep_orange_msgs__msg__TireReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__TireReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__TireReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__TireReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
