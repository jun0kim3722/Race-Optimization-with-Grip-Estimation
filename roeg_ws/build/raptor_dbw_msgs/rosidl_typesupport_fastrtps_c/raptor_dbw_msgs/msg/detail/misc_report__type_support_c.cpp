// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/misc_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/misc_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/misc_report__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
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


using _MiscReport__ros_msg_type = raptor_dbw_msgs__msg__MiscReport;

static bool _MiscReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MiscReport__ros_msg_type * ros_message = static_cast<const _MiscReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fuel_level
  {
    cdr << ros_message->fuel_level;
  }

  // Field name: drive_by_wire_enabled
  {
    cdr << (ros_message->drive_by_wire_enabled ? true : false);
  }

  // Field name: vehicle_speed
  {
    cdr << ros_message->vehicle_speed;
  }

  // Field name: software_build_number
  {
    cdr << ros_message->software_build_number;
  }

  // Field name: general_actuator_fault
  {
    cdr << (ros_message->general_actuator_fault ? true : false);
  }

  // Field name: by_wire_ready
  {
    cdr << (ros_message->by_wire_ready ? true : false);
  }

  // Field name: general_driver_activity
  {
    cdr << (ros_message->general_driver_activity ? true : false);
  }

  // Field name: comms_fault
  {
    cdr << (ros_message->comms_fault ? true : false);
  }

  // Field name: ambient_temp
  {
    cdr << ros_message->ambient_temp;
  }

  return true;
}

static bool _MiscReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MiscReport__ros_msg_type * ros_message = static_cast<_MiscReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fuel_level
  {
    cdr >> ros_message->fuel_level;
  }

  // Field name: drive_by_wire_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->drive_by_wire_enabled = tmp ? true : false;
  }

  // Field name: vehicle_speed
  {
    cdr >> ros_message->vehicle_speed;
  }

  // Field name: software_build_number
  {
    cdr >> ros_message->software_build_number;
  }

  // Field name: general_actuator_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->general_actuator_fault = tmp ? true : false;
  }

  // Field name: by_wire_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->by_wire_ready = tmp ? true : false;
  }

  // Field name: general_driver_activity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->general_driver_activity = tmp ? true : false;
  }

  // Field name: comms_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->comms_fault = tmp ? true : false;
  }

  // Field name: ambient_temp
  {
    cdr >> ros_message->ambient_temp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__MiscReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MiscReport__ros_msg_type * ros_message = static_cast<const _MiscReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name fuel_level
  {
    size_t item_size = sizeof(ros_message->fuel_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drive_by_wire_enabled
  {
    size_t item_size = sizeof(ros_message->drive_by_wire_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed
  {
    size_t item_size = sizeof(ros_message->vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name software_build_number
  {
    size_t item_size = sizeof(ros_message->software_build_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name general_actuator_fault
  {
    size_t item_size = sizeof(ros_message->general_actuator_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name by_wire_ready
  {
    size_t item_size = sizeof(ros_message->by_wire_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name general_driver_activity
  {
    size_t item_size = sizeof(ros_message->general_driver_activity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name comms_fault
  {
    size_t item_size = sizeof(ros_message->comms_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ambient_temp
  {
    size_t item_size = sizeof(ros_message->ambient_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MiscReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__MiscReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__MiscReport(
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
  // member: fuel_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drive_by_wire_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: software_build_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: general_actuator_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: by_wire_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: general_driver_activity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: comms_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ambient_temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MiscReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__MiscReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MiscReport = {
  "raptor_dbw_msgs::msg",
  "MiscReport",
  _MiscReport__cdr_serialize,
  _MiscReport__cdr_deserialize,
  _MiscReport__get_serialized_size,
  _MiscReport__max_serialized_size
};

static rosidl_message_type_support_t _MiscReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MiscReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, MiscReport)() {
  return &_MiscReport__type_support;
}

#if defined(__cplusplus)
}
#endif
