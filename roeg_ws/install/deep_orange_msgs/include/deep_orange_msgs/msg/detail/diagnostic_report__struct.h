// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_

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

// Struct defined in msg/DiagnosticReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__DiagnosticReport
{
  builtin_interfaces__msg__Time stamp;
  bool sd_system_warning;
  bool sd_system_failure;
  int32_t motec_warning;
  bool sd_brake_warning1;
  bool sd_brake_warning2;
  bool sd_brake_warning3;
  bool sd_steer_warning1;
  bool sd_steer_warning2;
  bool sd_steer_warning3;
  bool est1_oos_front_brk;
  bool est2_oos_rear_brk;
  bool est3_low_eng_speed;
  bool est4_sd_comms_loss;
  bool est5_motec_comms_loss;
  bool est6_sd_ebrake;
  bool adlink_hb_lost;
  bool rc_lost;
} deep_orange_msgs__msg__DiagnosticReport;

// Struct for a sequence of deep_orange_msgs__msg__DiagnosticReport.
typedef struct deep_orange_msgs__msg__DiagnosticReport__Sequence
{
  deep_orange_msgs__msg__DiagnosticReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__DiagnosticReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_
