// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_H_

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

// Struct defined in msg/BaseToCarSummary in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__BaseToCarSummary
{
  builtin_interfaces__msg__Time stamp;
  uint8_t base_to_car_heartbeat;
  uint8_t track_flag;
  uint8_t veh_flag;
  uint8_t veh_rank;
  float lap_status_whole;
  float lap_status_fraction;
  float round_target_speed;
} deep_orange_msgs__msg__BaseToCarSummary;

// Struct for a sequence of deep_orange_msgs__msg__BaseToCarSummary.
typedef struct deep_orange_msgs__msg__BaseToCarSummary__Sequence
{
  deep_orange_msgs__msg__BaseToCarSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__BaseToCarSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_H_
