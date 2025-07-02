// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_

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

// Struct defined in msg/SteeringCmd in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__SteeringCmd
{
  float angle_cmd;
  float angle_velocity;
  bool enable;
  bool ignore;
  uint8_t rolling_counter;
  float torque_cmd;
  float vehicle_curvature_cmd;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
} raptor_dbw_msgs__msg__SteeringCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__SteeringCmd.
typedef struct raptor_dbw_msgs__msg__SteeringCmd__Sequence
{
  raptor_dbw_msgs__msg__SteeringCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__SteeringCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
