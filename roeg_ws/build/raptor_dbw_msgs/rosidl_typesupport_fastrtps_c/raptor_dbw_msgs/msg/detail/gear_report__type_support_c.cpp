// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/gear_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/gear_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/gear_report__functions.h"
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

#include "raptor_dbw_msgs/msg/detail/gear__functions.h"  // state
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__Gear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__Gear(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Gear)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GearReport__ros_msg_type = raptor_dbw_msgs__msg__GearReport;

static bool _GearReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GearReport__ros_msg_type * ros_message = static_cast<const _GearReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Gear
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->state, cdr))
    {
      return false;
    }
  }

  // Field name: reject
  {
    cdr << (ros_message->reject ? true : false);
  }

  // Field name: driver_activity
  {
    cdr << (ros_message->driver_activity ? true : false);
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: trans_curr_gear
  {
    cdr << ros_message->trans_curr_gear;
  }

  // Field name: gear_select_system_fault
  {
    cdr << (ros_message->gear_select_system_fault ? true : false);
  }

  // Field name: gear_mismatch_flash
  {
    cdr << (ros_message->gear_mismatch_flash ? true : false);
  }

  return true;
}

static bool _GearReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GearReport__ros_msg_type * ros_message = static_cast<_GearReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Gear
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->state))
    {
      return false;
    }
  }

  // Field name: reject
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject = tmp ? true : false;
  }

  // Field name: driver_activity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->driver_activity = tmp ? true : false;
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: trans_curr_gear
  {
    cdr >> ros_message->trans_curr_gear;
  }

  // Field name: gear_select_system_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_select_system_fault = tmp ? true : false;
  }

  // Field name: gear_mismatch_flash
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_mismatch_flash = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__GearReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GearReport__ros_msg_type * ros_message = static_cast<const _GearReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__Gear(
    &(ros_message->state), current_alignment);
  // field.name reject
  {
    size_t item_size = sizeof(ros_message->reject);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_activity
  {
    size_t item_size = sizeof(ros_message->driver_activity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trans_curr_gear
  {
    size_t item_size = sizeof(ros_message->trans_curr_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_select_system_fault
  {
    size_t item_size = sizeof(ros_message->gear_select_system_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_mismatch_flash
  {
    size_t item_size = sizeof(ros_message->gear_mismatch_flash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GearReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__GearReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__GearReport(
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
  // member: state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__Gear(
        full_bounded, current_alignment);
    }
  }
  // member: reject
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driver_activity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trans_curr_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_select_system_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_mismatch_flash
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GearReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__GearReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GearReport = {
  "raptor_dbw_msgs::msg",
  "GearReport",
  _GearReport__cdr_serialize,
  _GearReport__cdr_deserialize,
  _GearReport__get_serialized_size,
  _GearReport__max_serialized_size
};

static rosidl_message_type_support_t _GearReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GearReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, GearReport)() {
  return &_GearReport__type_support;
}

#if defined(__cplusplus)
}
#endif
