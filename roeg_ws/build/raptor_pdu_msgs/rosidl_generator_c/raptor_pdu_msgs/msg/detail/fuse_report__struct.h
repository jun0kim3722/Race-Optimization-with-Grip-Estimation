// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_pdu_msgs:msg/FuseReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_H_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_H_

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
// Member 'fuse_1'
// Member 'fuse_2'
// Member 'fuse_3'
// Member 'fuse_4'
// Member 'fuse_5'
// Member 'fuse_6'
// Member 'fuse_7'
// Member 'fuse_8'
// Member 'fuse_9'
// Member 'fuse_10'
// Member 'fuse_11'
// Member 'fuse_12'
// Member 'fuse_13'
// Member 'fuse_14'
// Member 'fuse_15'
// Member 'fuse_16'
#include "raptor_pdu_msgs/msg/detail/fuse_status__struct.h"

// Struct defined in msg/FuseReport in the package raptor_pdu_msgs.
typedef struct raptor_pdu_msgs__msg__FuseReport
{
  std_msgs__msg__Header header;
  uint8_t grid_address;
  raptor_pdu_msgs__msg__FuseStatus fuse_1;
  raptor_pdu_msgs__msg__FuseStatus fuse_2;
  raptor_pdu_msgs__msg__FuseStatus fuse_3;
  raptor_pdu_msgs__msg__FuseStatus fuse_4;
  raptor_pdu_msgs__msg__FuseStatus fuse_5;
  raptor_pdu_msgs__msg__FuseStatus fuse_6;
  raptor_pdu_msgs__msg__FuseStatus fuse_7;
  raptor_pdu_msgs__msg__FuseStatus fuse_8;
  raptor_pdu_msgs__msg__FuseStatus fuse_9;
  raptor_pdu_msgs__msg__FuseStatus fuse_10;
  raptor_pdu_msgs__msg__FuseStatus fuse_11;
  raptor_pdu_msgs__msg__FuseStatus fuse_12;
  raptor_pdu_msgs__msg__FuseStatus fuse_13;
  raptor_pdu_msgs__msg__FuseStatus fuse_14;
  raptor_pdu_msgs__msg__FuseStatus fuse_15;
  raptor_pdu_msgs__msg__FuseStatus fuse_16;
} raptor_pdu_msgs__msg__FuseReport;

// Struct for a sequence of raptor_pdu_msgs__msg__FuseReport.
typedef struct raptor_pdu_msgs__msg__FuseReport__Sequence
{
  raptor_pdu_msgs__msg__FuseReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_pdu_msgs__msg__FuseReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_H_
