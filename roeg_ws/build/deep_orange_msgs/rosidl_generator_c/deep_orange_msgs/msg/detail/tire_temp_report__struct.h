// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_H_

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
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "deep_orange_msgs/msg/detail/tire_temp__struct.h"

// Struct defined in msg/TireTempReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__TireTempReport
{
  std_msgs__msg__Header header;
  deep_orange_msgs__msg__TireTemp front_left;
  deep_orange_msgs__msg__TireTemp front_right;
  deep_orange_msgs__msg__TireTemp rear_left;
  deep_orange_msgs__msg__TireTemp rear_right;
} deep_orange_msgs__msg__TireTempReport;

// Struct for a sequence of deep_orange_msgs__msg__TireTempReport.
typedef struct deep_orange_msgs__msg__TireTempReport__Sequence
{
  deep_orange_msgs__msg__TireTempReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__TireTempReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_H_
