// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Telemetry in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__Telemetry
{
  builtin_interfaces__msg__Time stamp;
  float battery_voltage;
  bool off_grid_power_connection;
  uint8_t safety_switch_state;
  bool mode_switch_state;
  uint8_t sys_state;
  uint8_t track_cond_ack;
  uint8_t veh_sig_ack;
  uint8_t ct_state;
  float map_sensor;
  float lambda_sensor;
  float fuel_level;
  float fuel_pressure;
  float engine_oil_pressure;
  float engine_oil_temperature;
  float engine_coolant_temperature;
  float engine_coolant_pressure;
  float engine_rpm;
  bool engine_on_status;
  bool engine_run_switch_status;
  float throttle_position;
  int8_t current_gear;
  int8_t gear_shift_status;
  float transmission_oil_pressure;
  float transmission_accumulator_pressure;
  float transmission_oil_temperature;
  float vehicle_speed_kmph;
  double look_ahead_error;
  double lateral_error;
} deep_orange_msgs__msg__Telemetry;

// Struct for a sequence of deep_orange_msgs__msg__Telemetry.
typedef struct deep_orange_msgs__msg__Telemetry__Sequence
{
  deep_orange_msgs__msg__Telemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__Telemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_H_
