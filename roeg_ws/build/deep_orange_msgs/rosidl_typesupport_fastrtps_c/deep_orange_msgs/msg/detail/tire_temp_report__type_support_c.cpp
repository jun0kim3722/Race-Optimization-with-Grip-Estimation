// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_temp_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/tire_temp_report__struct.h"
#include "deep_orange_msgs/msg/detail/tire_temp_report__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deep_orange_msgs/msg/detail/tire_temp__functions.h"  // front_left, front_right, rear_left, rear_right
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_deep_orange_msgs__msg__TireTemp(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deep_orange_msgs__msg__TireTemp(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TireTempReport__ros_msg_type = deep_orange_msgs__msg__TireTempReport;

static bool _TireTempReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TireTempReport__ros_msg_type * ros_message = static_cast<const _TireTempReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: front_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_left, cdr))
    {
      return false;
    }
  }

  // Field name: front_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_right, cdr))
    {
      return false;
    }
  }

  // Field name: rear_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_left, cdr))
    {
      return false;
    }
  }

  // Field name: rear_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_right, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TireTempReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TireTempReport__ros_msg_type * ros_message = static_cast<_TireTempReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: front_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_left))
    {
      return false;
    }
  }

  // Field name: front_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_right))
    {
      return false;
    }
  }

  // Field name: rear_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_left))
    {
      return false;
    }
  }

  // Field name: rear_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_right))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__TireTempReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireTempReport__ros_msg_type * ros_message = static_cast<const _TireTempReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name front_left

  current_alignment += get_serialized_size_deep_orange_msgs__msg__TireTemp(
    &(ros_message->front_left), current_alignment);
  // field.name front_right

  current_alignment += get_serialized_size_deep_orange_msgs__msg__TireTemp(
    &(ros_message->front_right), current_alignment);
  // field.name rear_left

  current_alignment += get_serialized_size_deep_orange_msgs__msg__TireTemp(
    &(ros_message->rear_left), current_alignment);
  // field.name rear_right

  current_alignment += get_serialized_size_deep_orange_msgs__msg__TireTemp(
    &(ros_message->rear_right), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TireTempReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__TireTempReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__TireTempReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: front_left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_deep_orange_msgs__msg__TireTemp(
        full_bounded, current_alignment);
    }
  }
  // member: front_right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_deep_orange_msgs__msg__TireTemp(
        full_bounded, current_alignment);
    }
  }
  // member: rear_left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_deep_orange_msgs__msg__TireTemp(
        full_bounded, current_alignment);
    }
  }
  // member: rear_right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_deep_orange_msgs__msg__TireTemp(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TireTempReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__TireTempReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TireTempReport = {
  "deep_orange_msgs::msg",
  "TireTempReport",
  _TireTempReport__cdr_serialize,
  _TireTempReport__cdr_deserialize,
  _TireTempReport__get_serialized_size,
  _TireTempReport__max_serialized_size
};

static rosidl_message_type_support_t _TireTempReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireTempReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTempReport)() {
  return &_TireTempReport__type_support;
}

#if defined(__cplusplus)
}
#endif
