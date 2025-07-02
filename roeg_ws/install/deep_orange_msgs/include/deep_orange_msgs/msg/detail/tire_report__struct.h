// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_H_

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
// Member 'fl_tire_temperature'
// Member 'fr_tire_temperature'
// Member 'rl_tire_temperature'
// Member 'rr_tire_temperature'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TireReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__TireReport
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__float__Sequence fl_tire_temperature;
  float fl_damper_linear_potentiometer;
  float fl_tire_pressure;
  float fl_tire_pressure_gauge;
  float fl_wheel_load;
  rosidl_runtime_c__float__Sequence fr_tire_temperature;
  float fr_damper_linear_potentiometer;
  float fr_tire_pressure;
  float fr_tire_pressure_gauge;
  float fr_wheel_load;
  rosidl_runtime_c__float__Sequence rl_tire_temperature;
  float rl_damper_linear_potentiometer;
  float rl_tire_pressure;
  float rl_tire_pressure_gauge;
  float rl_wheel_load;
  rosidl_runtime_c__float__Sequence rr_tire_temperature;
  float rr_damper_linear_potentiometer;
  float rr_tire_pressure;
  float rr_tire_pressure_gauge;
  float rr_wheel_load;
} deep_orange_msgs__msg__TireReport;

// Struct for a sequence of deep_orange_msgs__msg__TireReport.
typedef struct deep_orange_msgs__msg__TireReport__Sequence
{
  deep_orange_msgs__msg__TireReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__TireReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__STRUCT_H_
