// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_pdu_msgs:msg/RelayReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_REPORT__STRUCT_H_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_REPORT__STRUCT_H_

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
// Member 'relay_1'
// Member 'relay_2'
// Member 'relay_3'
// Member 'relay_4'
// Member 'relay_5'
// Member 'relay_6'
// Member 'relay_7'
// Member 'relay_8'
#include "raptor_pdu_msgs/msg/detail/relay_status__struct.h"

// Struct defined in msg/RelayReport in the package raptor_pdu_msgs.
typedef struct raptor_pdu_msgs__msg__RelayReport
{
  std_msgs__msg__Header header;
  uint8_t grid_address;
  raptor_pdu_msgs__msg__RelayStatus relay_1;
  raptor_pdu_msgs__msg__RelayStatus relay_2;
  raptor_pdu_msgs__msg__RelayStatus relay_3;
  raptor_pdu_msgs__msg__RelayStatus relay_4;
  raptor_pdu_msgs__msg__RelayStatus relay_5;
  raptor_pdu_msgs__msg__RelayStatus relay_6;
  raptor_pdu_msgs__msg__RelayStatus relay_7;
  raptor_pdu_msgs__msg__RelayStatus relay_8;
} raptor_pdu_msgs__msg__RelayReport;

// Struct for a sequence of raptor_pdu_msgs__msg__RelayReport.
typedef struct raptor_pdu_msgs__msg__RelayReport__Sequence
{
  raptor_pdu_msgs__msg__RelayReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_pdu_msgs__msg__RelayReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_REPORT__STRUCT_H_
