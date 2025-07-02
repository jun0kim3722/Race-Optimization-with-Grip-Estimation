// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/GpsReferenceReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_H_

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

// Struct defined in msg/GpsReferenceReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__GpsReferenceReport
{
  std_msgs__msg__Header header;
  float ref_latitude;
  float ref_longitude;
  float ref_heading;
} raptor_dbw_msgs__msg__GpsReferenceReport;

// Struct for a sequence of raptor_dbw_msgs__msg__GpsReferenceReport.
typedef struct raptor_dbw_msgs__msg__GpsReferenceReport__Sequence
{
  raptor_dbw_msgs__msg__GpsReferenceReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__GpsReferenceReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_H_
