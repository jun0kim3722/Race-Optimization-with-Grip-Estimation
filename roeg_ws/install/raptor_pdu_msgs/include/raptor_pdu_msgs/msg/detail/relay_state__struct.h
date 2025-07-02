// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_pdu_msgs:msg/RelayState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_H_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELAY_OFF'.
enum
{
  raptor_pdu_msgs__msg__RelayState__RELAY_OFF = 0
};

/// Constant 'RELAY_ON'.
enum
{
  raptor_pdu_msgs__msg__RelayState__RELAY_ON = 1
};

/// Constant 'MAINTAIN_STATE'.
enum
{
  raptor_pdu_msgs__msg__RelayState__MAINTAIN_STATE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/RelayState in the package raptor_pdu_msgs.
typedef struct raptor_pdu_msgs__msg__RelayState
{
  std_msgs__msg__Header header;
  uint8_t value;
} raptor_pdu_msgs__msg__RelayState;

// Struct for a sequence of raptor_pdu_msgs__msg__RelayState.
typedef struct raptor_pdu_msgs__msg__RelayState__Sequence
{
  raptor_pdu_msgs__msg__RelayState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_pdu_msgs__msg__RelayState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_H_
