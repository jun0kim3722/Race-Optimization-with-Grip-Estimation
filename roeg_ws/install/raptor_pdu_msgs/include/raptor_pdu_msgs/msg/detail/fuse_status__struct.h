// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_pdu_msgs:msg/FuseStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__STRUCT_H_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_FAULT'.
enum
{
  raptor_pdu_msgs__msg__FuseStatus__NO_FAULT = 0
};

/// Constant 'BLOWN'.
enum
{
  raptor_pdu_msgs__msg__FuseStatus__BLOWN = 1
};

/// Constant 'NOT_POWERED'.
enum
{
  raptor_pdu_msgs__msg__FuseStatus__NOT_POWERED = 2
};

/// Constant 'NOT_USED'.
enum
{
  raptor_pdu_msgs__msg__FuseStatus__NOT_USED = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/FuseStatus in the package raptor_pdu_msgs.
typedef struct raptor_pdu_msgs__msg__FuseStatus
{
  std_msgs__msg__Header header;
  uint8_t value;
} raptor_pdu_msgs__msg__FuseStatus;

// Struct for a sequence of raptor_pdu_msgs__msg__FuseStatus.
typedef struct raptor_pdu_msgs__msg__FuseStatus__Sequence
{
  raptor_pdu_msgs__msg__FuseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_pdu_msgs__msg__FuseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__STRUCT_H_
