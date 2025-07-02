// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_H_

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

// Struct defined in msg/RaceControlReport in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__RaceControlReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t base_to_car_heartbeat;
  uint8_t track_flag;
  uint8_t veh_flag;
  uint8_t veh_rank;
  uint8_t lap_count;
  float lap_distance;
  float round_target_speed;
  uint8_t marelli_track_flag;
  uint8_t marelli_vehicle_flag;
  uint8_t marelli_sector_flag;
  int8_t lte_modem_lte_rssi;
  bool lte_sync_ok;
} deep_orange_msgs__msg__RaceControlReport;

// Struct for a sequence of deep_orange_msgs__msg__RaceControlReport.
typedef struct deep_orange_msgs__msg__RaceControlReport__Sequence
{
  deep_orange_msgs__msg__RaceControlReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__RaceControlReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_H_
