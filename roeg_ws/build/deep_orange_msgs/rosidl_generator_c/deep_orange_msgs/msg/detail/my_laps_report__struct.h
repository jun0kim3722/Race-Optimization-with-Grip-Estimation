// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/MyLapsReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__STRUCT_H_

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

// Struct defined in msg/MyLapsReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__MyLapsReport
{
  builtin_interfaces__msg__Time stamp;
  float speed;
  float heading;
  float lat;
  float lon;
} deep_orange_msgs__msg__MyLapsReport;

// Struct for a sequence of deep_orange_msgs__msg__MyLapsReport.
typedef struct deep_orange_msgs__msg__MyLapsReport__Sequence
{
  deep_orange_msgs__msg__MyLapsReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__MyLapsReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__STRUCT_H_
