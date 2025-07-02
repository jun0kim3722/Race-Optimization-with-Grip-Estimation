// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_pdu_msgs:msg/RelayStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_H_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__OK = 0
};

/// Constant 'RELAY_COIL_OPEN'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RELAY_COIL_OPEN = 1
};

/// Constant 'RELAY_COIL_SHORTED'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RELAY_COIL_SHORTED = 2
};

/// Constant 'NORM_OPEN_RELAY_OPEN'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__NORM_OPEN_RELAY_OPEN = 3
};

/// Constant 'NORM_CLOSED_RELAY_OPEN'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__NORM_CLOSED_RELAY_OPEN = 4
};

/// Constant 'COIL_NOT_POWERED'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__COIL_NOT_POWERED = 5
};

/// Constant 'NORM_OPEN_RELAY_SHORTED'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__NORM_OPEN_RELAY_SHORTED = 6
};

/// Constant 'NORM_CLOSED_RELAY_SHORTED'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__NORM_CLOSED_RELAY_SHORTED = 7
};

/// Constant 'RESERVED_01'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RESERVED_01 = 8
};

/// Constant 'RESERVED_02'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RESERVED_02 = 9
};

/// Constant 'RESERVED_03'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RESERVED_03 = 10
};

/// Constant 'HIGH_SIDE_FAULT'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__HIGH_SIDE_FAULT = 11
};

/// Constant 'HIGH_SIDE_OPEN_LOAD'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__HIGH_SIDE_OPEN_LOAD = 12
};

/// Constant 'HIGH_SIDE_OVER_VOLTAGE'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__HIGH_SIDE_OVER_VOLTAGE = 13
};

/// Constant 'RESERVED_04'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RESERVED_04 = 14
};

/// Constant 'RELAY_LOCATION_NOT_USED'.
enum
{
  raptor_pdu_msgs__msg__RelayStatus__RELAY_LOCATION_NOT_USED = 15
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/RelayStatus in the package raptor_pdu_msgs.
typedef struct raptor_pdu_msgs__msg__RelayStatus
{
  std_msgs__msg__Header header;
  uint8_t value;
} raptor_pdu_msgs__msg__RelayStatus;

// Struct for a sequence of raptor_pdu_msgs__msg__RelayStatus.
typedef struct raptor_pdu_msgs__msg__RelayStatus__Sequence
{
  raptor_pdu_msgs__msg__RelayStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_pdu_msgs__msg__RelayStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_H_
