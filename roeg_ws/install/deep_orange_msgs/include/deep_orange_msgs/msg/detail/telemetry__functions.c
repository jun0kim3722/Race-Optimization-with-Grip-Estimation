// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__Telemetry__init(deep_orange_msgs__msg__Telemetry * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__Telemetry__fini(msg);
    return false;
  }
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
  // track_cond_ack
  // veh_sig_ack
  // ct_state
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
  // look_ahead_error
  // lateral_error
  return true;
}

void
deep_orange_msgs__msg__Telemetry__fini(deep_orange_msgs__msg__Telemetry * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
  // track_cond_ack
  // veh_sig_ack
  // ct_state
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
  // look_ahead_error
  // lateral_error
}

bool
deep_orange_msgs__msg__Telemetry__are_equal(const deep_orange_msgs__msg__Telemetry * lhs, const deep_orange_msgs__msg__Telemetry * rhs)
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
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // off_grid_power_connection
  if (lhs->off_grid_power_connection != rhs->off_grid_power_connection) {
    return false;
  }
  // safety_switch_state
  if (lhs->safety_switch_state != rhs->safety_switch_state) {
    return false;
  }
  // mode_switch_state
  if (lhs->mode_switch_state != rhs->mode_switch_state) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  // track_cond_ack
  if (lhs->track_cond_ack != rhs->track_cond_ack) {
    return false;
  }
  // veh_sig_ack
  if (lhs->veh_sig_ack != rhs->veh_sig_ack) {
    return false;
  }
  // ct_state
  if (lhs->ct_state != rhs->ct_state) {
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
  // look_ahead_error
  if (lhs->look_ahead_error != rhs->look_ahead_error) {
    return false;
  }
  // lateral_error
  if (lhs->lateral_error != rhs->lateral_error) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__Telemetry__copy(
  const deep_orange_msgs__msg__Telemetry * input,
  deep_orange_msgs__msg__Telemetry * output)
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
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // off_grid_power_connection
  output->off_grid_power_connection = input->off_grid_power_connection;
  // safety_switch_state
  output->safety_switch_state = input->safety_switch_state;
  // mode_switch_state
  output->mode_switch_state = input->mode_switch_state;
  // sys_state
  output->sys_state = input->sys_state;
  // track_cond_ack
  output->track_cond_ack = input->track_cond_ack;
  // veh_sig_ack
  output->veh_sig_ack = input->veh_sig_ack;
  // ct_state
  output->ct_state = input->ct_state;
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
  // look_ahead_error
  output->look_ahead_error = input->look_ahead_error;
  // lateral_error
  output->lateral_error = input->lateral_error;
  return true;
}

deep_orange_msgs__msg__Telemetry *
deep_orange_msgs__msg__Telemetry__create()
{
  deep_orange_msgs__msg__Telemetry * msg = (deep_orange_msgs__msg__Telemetry *)malloc(sizeof(deep_orange_msgs__msg__Telemetry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__Telemetry));
  bool success = deep_orange_msgs__msg__Telemetry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__Telemetry__destroy(deep_orange_msgs__msg__Telemetry * msg)
{
  if (msg) {
    deep_orange_msgs__msg__Telemetry__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__Telemetry__Sequence__init(deep_orange_msgs__msg__Telemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__Telemetry * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__Telemetry *)calloc(size, sizeof(deep_orange_msgs__msg__Telemetry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__Telemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__Telemetry__fini(&data[i - 1]);
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
deep_orange_msgs__msg__Telemetry__Sequence__fini(deep_orange_msgs__msg__Telemetry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__Telemetry__fini(&array->data[i]);
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

deep_orange_msgs__msg__Telemetry__Sequence *
deep_orange_msgs__msg__Telemetry__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__Telemetry__Sequence * array = (deep_orange_msgs__msg__Telemetry__Sequence *)malloc(sizeof(deep_orange_msgs__msg__Telemetry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__Telemetry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__Telemetry__Sequence__destroy(deep_orange_msgs__msg__Telemetry__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__Telemetry__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__Telemetry__Sequence__are_equal(const deep_orange_msgs__msg__Telemetry__Sequence * lhs, const deep_orange_msgs__msg__Telemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__Telemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__Telemetry__Sequence__copy(
  const deep_orange_msgs__msg__Telemetry__Sequence * input,
  deep_orange_msgs__msg__Telemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__Telemetry);
    deep_orange_msgs__msg__Telemetry * data =
      (deep_orange_msgs__msg__Telemetry *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__Telemetry__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__Telemetry__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__Telemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
