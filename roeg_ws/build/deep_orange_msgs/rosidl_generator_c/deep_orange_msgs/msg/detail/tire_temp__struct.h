// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TireTemp in the package deep_orange_msgs.
typedef struct deep_orange_msgs__msg__TireTemp
{
  float median;
  float mean;
  float min;
  float max;
} deep_orange_msgs__msg__TireTemp;

// Struct for a sequence of deep_orange_msgs__msg__TireTemp.
typedef struct deep_orange_msgs__msg__TireTemp__Sequence
{
  deep_orange_msgs__msg__TireTemp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deep_orange_msgs__msg__TireTemp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_H_
