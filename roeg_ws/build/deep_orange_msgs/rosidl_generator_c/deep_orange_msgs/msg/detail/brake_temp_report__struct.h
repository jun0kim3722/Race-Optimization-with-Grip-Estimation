// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/BrakeTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_H_

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

// Struct defined in msg/BrakeTempReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__BrakeTempReport
{
  builtin_interfaces__msg__Time stamp;
  float fl_brake_temp;
  float fr_brake_temp;
  float rl_brake_temp;
  float rr_brake_temp;
} deep_orange_msgs__msg__BrakeTempReport;

// Struct for a sequence of deep_orange_msgs__msg__BrakeTempReport.
typedef struct deep_orange_msgs__msg__BrakeTempReport__Sequence
{
  deep_orange_msgs__msg__BrakeTempReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__BrakeTempReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_H_
