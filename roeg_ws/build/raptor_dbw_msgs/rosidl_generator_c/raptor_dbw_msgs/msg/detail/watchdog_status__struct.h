// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/WatchdogStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__NONE = 0
};

/// Constant 'OTHER_BRAKE'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_BRAKE = 1
};

/// Constant 'OTHER_ACCELERATOR_PEDAL'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_ACCELERATOR_PEDAL = 2
};

/// Constant 'OTHER_STEERING'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_STEERING = 3
};

/// Constant 'BRAKE_COUNTER'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_COUNTER = 4
};

/// Constant 'BRAKE_DISABLED'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_DISABLED = 5
};

/// Constant 'BRAKE_COMMAND'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_COMMAND = 6
};

/// Constant 'BRAKE_REPORT'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_REPORT = 7
};

/// Constant 'ACCELERATOR_PEDAL_COUNTER'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_COUNTER = 8
};

/// Constant 'ACCELERATOR_PEDAL_DISABLED'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_DISABLED = 9
};

/// Constant 'ACCELERATOR_PEDAL_COMMAND'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_COMMAND = 10
};

/// Constant 'ACCELERATOR_PEDAL_REPORT'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_REPORT = 11
};

/// Constant 'STEERING_COUNTER'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_COUNTER = 12
};

/// Constant 'STEERING_DISABLED'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_DISABLED = 13
};

/// Constant 'STEERING_COMMAND'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_COMMAND = 14
};

/// Constant 'STEERING_REPORT'.
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_REPORT = 15
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/WatchdogStatus in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__WatchdogStatus
{
  std_msgs__msg__Header header;
  uint8_t source;
} raptor_dbw_msgs__msg__WatchdogStatus;

// Struct for a sequence of raptor_dbw_msgs__msg__WatchdogStatus.
typedef struct raptor_dbw_msgs__msg__WatchdogStatus__Sequence
{
  raptor_dbw_msgs__msg__WatchdogStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__WatchdogStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_
