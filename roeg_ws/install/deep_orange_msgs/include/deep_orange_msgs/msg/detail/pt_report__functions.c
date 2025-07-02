// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/pt_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__PtReport__init(deep_orange_msgs__msg__PtReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__PtReport__fini(msg);
    return false;
  }
  // map_sensor
  // lambda_sensor
  // fuel_level
  // fuel_pressure
  // engine_oil_pressure
  // engine_oil_temperature
  // engine_coolant_temperature
  // engine_coolant_pressure
  // engine_rpm
  // engine_on_status
  // engine_run_switch_status
  // throttle_position
  // current_gear
  // gear_shift_status
  // transmission_oil_pressure
  // transmission_accumulator_pressure
  // transmission_oil_temperature
  // vehicle_speed_kmph
  // torque_wheels
  // driver_traction_aim_switch
  // driver_traction_range_switch
  return true;
}

void
deep_orange_msgs__msg__PtReport__fini(deep_orange_msgs__msg__PtReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // map_sensor
  // lambda_sensor
  // fuel_level
  // fuel_pressure
  // engine_oil_pressure
  // engine_oil_temperature
  // engine_coolant_temperature
  // engine_coolant_pressure
  // engine_rpm
  // engine_on_status
  // engine_run_switch_status
  // throttle_position
  // current_gear
  // gear_shift_status
  // transmission_oil_pressure
  // transmission_accumulator_pressure
  // transmission_oil_temperature
  // vehicle_speed_kmph
  // torque_wheels
  // driver_traction_aim_switch
  // driver_traction_range_switch
}

bool
deep_orange_msgs__msg__PtReport__are_equal(const deep_orange_msgs__msg__PtReport * lhs, const deep_orange_msgs__msg__PtReport * rhs)
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
  // map_sensor
  if (lhs->map_sensor != rhs->map_sensor) {
    return false;
  }
  // lambda_sensor
  if (lhs->lambda_sensor != rhs->lambda_sensor) {
    return false;
  }
  // fuel_level
  if (lhs->fuel_level != rhs->fuel_level) {
    return false;
  }
  // fuel_pressure
  if (lhs->fuel_pressure != rhs->fuel_pressure) {
    return false;
  }
  // engine_oil_pressure
  if (lhs->engine_oil_pressure != rhs->engine_oil_pressure) {
    return false;
  }
  // engine_oil_temperature
  if (lhs->engine_oil_temperature != rhs->engine_oil_temperature) {
    return false;
  }
  // engine_coolant_temperature
  if (lhs->engine_coolant_temperature != rhs->engine_coolant_temperature) {
    return false;
  }
  // engine_coolant_pressure
  if (lhs->engine_coolant_pressure != rhs->engine_coolant_pressure) {
    return false;
  }
  // engine_rpm
  if (lhs->engine_rpm != rhs->engine_rpm) {
    return false;
  }
  // engine_on_status
  if (lhs->engine_on_status != rhs->engine_on_status) {
    return false;
  }
  // engine_run_switch_status
  if (lhs->engine_run_switch_status != rhs->engine_run_switch_status) {
    return false;
  }
  // throttle_position
  if (lhs->throttle_position != rhs->throttle_position) {
    return false;
  }
  // current_gear
  if (lhs->current_gear != rhs->current_gear) {
    return false;
  }
  // gear_shift_status
  if (lhs->gear_shift_status != rhs->gear_shift_status) {
    return false;
  }
  // transmission_oil_pressure
  if (lhs->transmission_oil_pressure != rhs->transmission_oil_pressure) {
    return false;
  }
  // transmission_accumulator_pressure
  if (lhs->transmission_accumulator_pressure != rhs->transmission_accumulator_pressure) {
    return false;
  }
  // transmission_oil_temperature
  if (lhs->transmission_oil_temperature != rhs->transmission_oil_temperature) {
    return false;
  }
  // vehicle_speed_kmph
  if (lhs->vehicle_speed_kmph != rhs->vehicle_speed_kmph) {
    return false;
  }
  // torque_wheels
  if (lhs->torque_wheels != rhs->torque_wheels) {
    return false;
  }
  // driver_traction_aim_switch
  if (lhs->driver_traction_aim_switch != rhs->driver_traction_aim_switch) {
    return false;
  }
  // driver_traction_range_switch
  if (lhs->driver_traction_range_switch != rhs->driver_traction_range_switch) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__PtReport__copy(
  const deep_orange_msgs__msg__PtReport * input,
  deep_orange_msgs__msg__PtReport * output)
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
  // map_sensor
  output->map_sensor = input->map_sensor;
  // lambda_sensor
  output->lambda_sensor = input->lambda_sensor;
  // fuel_level
  output->fuel_level = input->fuel_level;
  // fuel_pressure
  output->fuel_pressure = input->fuel_pressure;
  // engine_oil_pressure
  output->engine_oil_pressure = input->engine_oil_pressure;
  // engine_oil_temperature
  output->engine_oil_temperature = input->engine_oil_temperature;
  // engine_coolant_temperature
  output->engine_coolant_temperature = input->engine_coolant_temperature;
  // engine_coolant_pressure
  output->engine_coolant_pressure = input->engine_coolant_pressure;
  // engine_rpm
  output->engine_rpm = input->engine_rpm;
  // engine_on_status
  output->engine_on_status = input->engine_on_status;
  // engine_run_switch_status
  output->engine_run_switch_status = input->engine_run_switch_status;
  // throttle_position
  output->throttle_position = input->throttle_position;
  // current_gear
  output->current_gear = input->current_gear;
  // gear_shift_status
  output->gear_shift_status = input->gear_shift_status;
  // transmission_oil_pressure
  output->transmission_oil_pressure = input->transmission_oil_pressure;
  // transmission_accumulator_pressure
  output->transmission_accumulator_pressure = input->transmission_accumulator_pressure;
  // transmission_oil_temperature
  output->transmission_oil_temperature = input->transmission_oil_temperature;
  // vehicle_speed_kmph
  output->vehicle_speed_kmph = input->vehicle_speed_kmph;
  // torque_wheels
  output->torque_wheels = input->torque_wheels;
  // driver_traction_aim_switch
  output->driver_traction_aim_switch = input->driver_traction_aim_switch;
  // driver_traction_range_switch
  output->driver_traction_range_switch = input->driver_traction_range_switch;
  return true;
}

deep_orange_msgs__msg__PtReport *
deep_orange_msgs__msg__PtReport__create()
{
  deep_orange_msgs__msg__PtReport * msg = (deep_orange_msgs__msg__PtReport *)malloc(sizeof(deep_orange_msgs__msg__PtReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__PtReport));
  bool success = deep_orange_msgs__msg__PtReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__PtReport__destroy(deep_orange_msgs__msg__PtReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__PtReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__PtReport__Sequence__init(deep_orange_msgs__msg__PtReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__PtReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__PtReport *)calloc(size, sizeof(deep_orange_msgs__msg__PtReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__PtReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__PtReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__PtReport__Sequence__fini(deep_orange_msgs__msg__PtReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__PtReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__PtReport__Sequence *
deep_orange_msgs__msg__PtReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__PtReport__Sequence * array = (deep_orange_msgs__msg__PtReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__PtReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__PtReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__PtReport__Sequence__destroy(deep_orange_msgs__msg__PtReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__PtReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__PtReport__Sequence__are_equal(const deep_orange_msgs__msg__PtReport__Sequence * lhs, const deep_orange_msgs__msg__PtReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__PtReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__PtReport__Sequence__copy(
  const deep_orange_msgs__msg__PtReport__Sequence * input,
  deep_orange_msgs__msg__PtReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__PtReport);
    deep_orange_msgs__msg__PtReport * data =
      (deep_orange_msgs__msg__PtReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__PtReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__PtReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__PtReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
