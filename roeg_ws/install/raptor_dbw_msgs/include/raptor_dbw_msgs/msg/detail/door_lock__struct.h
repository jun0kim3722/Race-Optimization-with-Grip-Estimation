// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/DoorLock.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_REQUEST'.
enum
{
  raptor_dbw_msgs__msg__DoorLock__NO_REQUEST = 0
};

/// Constant 'UNLOCK'.
enum
{
  raptor_dbw_msgs__msg__DoorLock__UNLOCK = 1
};

/// Constant 'LOCK'.
enum
{
  raptor_dbw_msgs__msg__DoorLock__LOCK = 2
};

/// Constant 'FAULT'.
enum
{
  raptor_dbw_msgs__msg__DoorLock__FAULT = 3
};

// Struct defined in msg/DoorLock in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__DoorLock
{
  uint8_t value;
} raptor_dbw_msgs__msg__DoorLock;

// Struct for a sequence of raptor_dbw_msgs__msg__DoorLock.
typedef struct raptor_dbw_msgs__msg__DoorLock__Sequence
{
  raptor_dbw_msgs__msg__DoorLock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__DoorLock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_H_
