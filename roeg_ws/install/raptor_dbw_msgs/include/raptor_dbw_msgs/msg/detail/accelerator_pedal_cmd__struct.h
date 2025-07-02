// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.h"

// Struct defined in msg/AcceleratorPedalCmd in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__AcceleratorPedalCmd
{
  float pedal_cmd;
  float torque_cmd;
  float speed_cmd;
  bool enable;
  bool ignore;
  uint8_t rolling_counter;
  float road_slope;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
  float accel_limit;
  float accel_positive_jerk_limit;
} raptor_dbw_msgs__msg__AcceleratorPedalCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__AcceleratorPedalCmd.
typedef struct raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence
{
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_H_
