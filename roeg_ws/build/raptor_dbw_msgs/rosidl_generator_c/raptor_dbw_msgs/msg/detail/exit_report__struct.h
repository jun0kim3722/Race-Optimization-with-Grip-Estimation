// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_H_

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

// Struct defined in msg/ExitReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__ExitReport
{
  std_msgs__msg__Header header;
  bool akit_disable;
  bool driver_in_control;
  uint16_t idx_auton_disable_no_brakes;
  uint16_t idx_auton_disable_apply_brakes;
  uint8_t auton_counter;
} raptor_dbw_msgs__msg__ExitReport;

// Struct for a sequence of raptor_dbw_msgs__msg__ExitReport.
typedef struct raptor_dbw_msgs__msg__ExitReport__Sequence
{
  raptor_dbw_msgs__msg__ExitReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__ExitReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_H_
