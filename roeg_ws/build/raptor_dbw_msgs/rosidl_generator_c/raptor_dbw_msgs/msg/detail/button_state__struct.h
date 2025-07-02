// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_PRESSED'.
enum
{
  raptor_dbw_msgs__msg__ButtonState__NOT_PRESSED = 0
};

/// Constant 'PRESSED'.
enum
{
  raptor_dbw_msgs__msg__ButtonState__PRESSED = 1
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__ButtonState__SNA = 3
};

// Struct defined in msg/ButtonState in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__ButtonState
{
  uint8_t value;
} raptor_dbw_msgs__msg__ButtonState;

// Struct for a sequence of raptor_dbw_msgs__msg__ButtonState.
typedef struct raptor_dbw_msgs__msg__ButtonState__Sequence
{
  raptor_dbw_msgs__msg__ButtonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__ButtonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__STRUCT_H_
