// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/base_to_car_summary__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/base_to_car_summary__struct.h"
#include "deep_orange_msgs/msg/detail/base_to_car_summary__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _BaseToCarSummary__ros_msg_type = deep_orange_msgs__msg__BaseToCarSummary;

static bool _BaseToCarSummary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseToCarSummary__ros_msg_type * ros_message = static_cast<const _BaseToCarSummary__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: base_to_car_heartbeat
  {
    cdr << ros_message->base_to_car_heartbeat;
  }

  // Field name: track_flag
  {
    cdr << ros_message->track_flag;
  }

  // Field name: veh_flag
  {
    cdr << ros_message->veh_flag;
  }

  // Field name: veh_rank
  {
    cdr << ros_message->veh_rank;
  }

  // Field name: lap_status_whole
  {
    cdr << ros_message->lap_status_whole;
  }

  // Field name: lap_status_fraction
  {
    cdr << ros_message->lap_status_fraction;
  }

  // Field name: round_target_speed
  {
    cdr << ros_message->round_target_speed;
  }

  return true;
}

static bool _BaseToCarSummary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseToCarSummary__ros_msg_type * ros_message = static_cast<_BaseToCarSummary__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: base_to_car_heartbeat
  {
    cdr >> ros_message->base_to_car_heartbeat;
  }

  // Field name: track_flag
  {
    cdr >> ros_message->track_flag;
  }

  // Field name: veh_flag
  {
    cdr >> ros_message->veh_flag;
  }

  // Field name: veh_rank
  {
    cdr >> ros_message->veh_rank;
  }

  // Field name: lap_status_whole
  {
    cdr >> ros_message->lap_status_whole;
  }

  // Field name: lap_status_fraction
  {
    cdr >> ros_message->lap_status_fraction;
  }

  // Field name: round_target_speed
  {
    cdr >> ros_message->round_target_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__BaseToCarSummary(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseToCarSummary__ros_msg_type * ros_message = static_cast<const _BaseToCarSummary__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name base_to_car_heartbeat
  {
    size_t item_size = sizeof(ros_message->base_to_car_heartbeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_flag
  {
    size_t item_size = sizeof(ros_message->track_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_flag
  {
    size_t item_size = sizeof(ros_message->veh_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_rank
  {
    size_t item_size = sizeof(ros_message->veh_rank);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lap_status_whole
  {
    size_t item_size = sizeof(ros_message->lap_status_whole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lap_status_fraction
  {
    size_t item_size = sizeof(ros_message->lap_status_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name round_target_speed
  {
    size_t item_size = sizeof(ros_message->round_target_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseToCarSummary__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__BaseToCarSummary(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__BaseToCarSummary(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: base_to_car_heartbeat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_rank
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lap_status_whole
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lap_status_fraction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: round_target_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseToCarSummary__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__BaseToCarSummary(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseToCarSummary = {
  "deep_orange_msgs::msg",
  "BaseToCarSummary",
  _BaseToCarSummary__cdr_serialize,
  _BaseToCarSummary__cdr_deserialize,
  _BaseToCarSummary__get_serialized_size,
  _BaseToCarSummary__max_serialized_size
};

static rosidl_message_type_support_t _BaseToCarSummary__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseToCarSummary,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, BaseToCarSummary)() {
  return &_BaseToCarSummary__type_support;
}

#if defined(__cplusplus)
}
#endif
