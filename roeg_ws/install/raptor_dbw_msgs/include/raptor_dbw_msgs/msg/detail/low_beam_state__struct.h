// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/LowBeamState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  raptor_dbw_msgs__msg__LowBeamState__OFF = 0
};

/// Constant 'RESERVED'.
enum
{
  raptor_dbw_msgs__msg__LowBeamState__RESERVED = 1
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__LowBeamState__ON = 2
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__LowBeamState__SNA = 3
};

// Struct defined in msg/LowBeamState in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__LowBeamState
{
  uint8_t status;
} raptor_dbw_msgs__msg__LowBeamState;

// Struct for a sequence of raptor_dbw_msgs__msg__LowBeamState.
typedef struct raptor_dbw_msgs__msg__LowBeamState__Sequence
{
  raptor_dbw_msgs__msg__LowBeamState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__LowBeamState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_H_
