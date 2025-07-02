// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_temp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/tire_temp__struct.h"
#include "deep_orange_msgs/msg/detail/tire_temp__functions.h"
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


// forward declare type support functions


using _TireTemp__ros_msg_type = deep_orange_msgs__msg__TireTemp;

static bool _TireTemp__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TireTemp__ros_msg_type * ros_message = static_cast<const _TireTemp__ros_msg_type *>(untyped_ros_message);
  // Field name: median
  {
    cdr << ros_message->median;
  }

  // Field name: mean
  {
    cdr << ros_message->mean;
  }

  // Field name: min
  {
    cdr << ros_message->min;
  }

  // Field name: max
  {
    cdr << ros_message->max;
  }

  return true;
}

static bool _TireTemp__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TireTemp__ros_msg_type * ros_message = static_cast<_TireTemp__ros_msg_type *>(untyped_ros_message);
  // Field name: median
  {
    cdr >> ros_message->median;
  }

  // Field name: mean
  {
    cdr >> ros_message->mean;
  }

  // Field name: min
  {
    cdr >> ros_message->min;
  }

  // Field name: max
  {
    cdr >> ros_message->max;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__TireTemp(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireTemp__ros_msg_type * ros_message = static_cast<const _TireTemp__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name median
  {
    size_t item_size = sizeof(ros_message->median);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean
  {
    size_t item_size = sizeof(ros_message->mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min
  {
    size_t item_size = sizeof(ros_message->min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max
  {
    size_t item_size = sizeof(ros_message->max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TireTemp__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__TireTemp(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__TireTemp(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: median
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mean
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TireTemp__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__TireTemp(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TireTemp = {
  "deep_orange_msgs::msg",
  "TireTemp",
  _TireTemp__cdr_serialize,
  _TireTemp__cdr_deserialize,
  _TireTemp__get_serialized_size,
  _TireTemp__max_serialized_size
};

static rosidl_message_type_support_t _TireTemp__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireTemp,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, TireTemp)() {
  return &_TireTemp__type_support;
}

#if defined(__cplusplus)
}
#endif
