// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__functions.h"
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


using _HmiGlobalEnableReport__ros_msg_type = raptor_dbw_msgs__msg__HmiGlobalEnableReport;

static bool _HmiGlobalEnableReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HmiGlobalEnableReport__ros_msg_type * ros_message = static_cast<const _HmiGlobalEnableReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: enable_request
  {
    cdr << (ros_message->enable_request ? true : false);
  }

  // Field name: disable_request
  {
    cdr << (ros_message->disable_request ? true : false);
  }

  // Field name: checksum
  {
    cdr << ros_message->checksum;
  }

  // Field name: ecu_build_number
  {
    cdr << ros_message->ecu_build_number;
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  return true;
}

static bool _HmiGlobalEnableReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HmiGlobalEnableReport__ros_msg_type * ros_message = static_cast<_HmiGlobalEnableReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: enable_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_request = tmp ? true : false;
  }

  // Field name: disable_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_request = tmp ? true : false;
  }

  // Field name: checksum
  {
    cdr >> ros_message->checksum;
  }

  // Field name: ecu_build_number
  {
    cdr >> ros_message->ecu_build_number;
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__HmiGlobalEnableReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HmiGlobalEnableReport__ros_msg_type * ros_message = static_cast<const _HmiGlobalEnableReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name enable_request
  {
    size_t item_size = sizeof(ros_message->enable_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disable_request
  {
    size_t item_size = sizeof(ros_message->disable_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name checksum
  {
    size_t item_size = sizeof(ros_message->checksum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecu_build_number
  {
    size_t item_size = sizeof(ros_message->ecu_build_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HmiGlobalEnableReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__HmiGlobalEnableReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__HmiGlobalEnableReport(
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
  // member: enable_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disable_request
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: checksum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ecu_build_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _HmiGlobalEnableReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__HmiGlobalEnableReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HmiGlobalEnableReport = {
  "raptor_dbw_msgs::msg",
  "HmiGlobalEnableReport",
  _HmiGlobalEnableReport__cdr_serialize,
  _HmiGlobalEnableReport__cdr_deserialize,
  _HmiGlobalEnableReport__get_serialized_size,
  _HmiGlobalEnableReport__max_serialized_size
};

static rosidl_message_type_support_t _HmiGlobalEnableReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HmiGlobalEnableReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HmiGlobalEnableReport)() {
  return &_HmiGlobalEnableReport__type_support;
}

#if defined(__cplusplus)
}
#endif
