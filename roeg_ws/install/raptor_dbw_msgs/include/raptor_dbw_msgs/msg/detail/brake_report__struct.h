// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'parking_brake'
#include "raptor_dbw_msgs/msg/detail/parking_brake__struct.h"
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.h"

// Struct defined in msg/BrakeReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__BrakeReport
{
  std_msgs__msg__Header header;
  float pedal_position;
  float pedal_output;
  bool enabled;
  bool driver_activity;
  bool fault_brake_system;
  uint8_t rolling_counter;
  float brake_torque_actual;
  bool intervention_active;
  bool intervention_ready;
  raptor_dbw_msgs__msg__ParkingBrake parking_brake;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
} raptor_dbw_msgs__msg__BrakeReport;

// Struct for a sequence of raptor_dbw_msgs__msg__BrakeReport.
typedef struct raptor_dbw_msgs__msg__BrakeReport__Sequence
{
  raptor_dbw_msgs__msg__BrakeReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__BrakeReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__STRUCT_H_
