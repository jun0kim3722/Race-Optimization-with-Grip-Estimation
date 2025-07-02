// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/diagnostic_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/diagnostic_report__struct.h"
#include "deep_orange_msgs/msg/detail/diagnostic_report__functions.h"
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


using _DiagnosticReport__ros_msg_type = deep_orange_msgs__msg__DiagnosticReport;

static bool _DiagnosticReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiagnosticReport__ros_msg_type * ros_message = static_cast<const _DiagnosticReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sd_system_warning
  {
    cdr << (ros_message->sd_system_warning ? true : false);
  }

  // Field name: sd_system_failure
  {
    cdr << (ros_message->sd_system_failure ? true : false);
  }

  // Field name: motec_warning
  {
    cdr << ros_message->motec_warning;
  }

  // Field name: sd_brake_warning1
  {
    cdr << (ros_message->sd_brake_warning1 ? true : false);
  }

  // Field name: sd_brake_warning2
  {
    cdr << (ros_message->sd_brake_warning2 ? true : false);
  }

  // Field name: sd_brake_warning3
  {
    cdr << (ros_message->sd_brake_warning3 ? true : false);
  }

  // Field name: sd_steer_warning1
  {
    cdr << (ros_message->sd_steer_warning1 ? true : false);
  }

  // Field name: sd_steer_warning2
  {
    cdr << (ros_message->sd_steer_warning2 ? true : false);
  }

  // Field name: sd_steer_warning3
  {
    cdr << (ros_message->sd_steer_warning3 ? true : false);
  }

  // Field name: est1_oos_front_brk
  {
    cdr << (ros_message->est1_oos_front_brk ? true : false);
  }

  // Field name: est2_oos_rear_brk
  {
    cdr << (ros_message->est2_oos_rear_brk ? true : false);
  }

  // Field name: est3_low_eng_speed
  {
    cdr << (ros_message->est3_low_eng_speed ? true : false);
  }

  // Field name: est4_sd_comms_loss
  {
    cdr << (ros_message->est4_sd_comms_loss ? true : false);
  }

  // Field name: est5_motec_comms_loss
  {
    cdr << (ros_message->est5_motec_comms_loss ? true : false);
  }

  // Field name: est6_sd_ebrake
  {
    cdr << (ros_message->est6_sd_ebrake ? true : false);
  }

  // Field name: adlink_hb_lost
  {
    cdr << (ros_message->adlink_hb_lost ? true : false);
  }

  // Field name: rc_lost
  {
    cdr << (ros_message->rc_lost ? true : false);
  }

  return true;
}

static bool _DiagnosticReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiagnosticReport__ros_msg_type * ros_message = static_cast<_DiagnosticReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sd_system_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_system_warning = tmp ? true : false;
  }

  // Field name: sd_system_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_system_failure = tmp ? true : false;
  }

  // Field name: motec_warning
  {
    cdr >> ros_message->motec_warning;
  }

  // Field name: sd_brake_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_brake_warning1 = tmp ? true : false;
  }

  // Field name: sd_brake_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_brake_warning2 = tmp ? true : false;
  }

  // Field name: sd_brake_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_brake_warning3 = tmp ? true : false;
  }

  // Field name: sd_steer_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_steer_warning1 = tmp ? true : false;
  }

  // Field name: sd_steer_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_steer_warning2 = tmp ? true : false;
  }

  // Field name: sd_steer_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_steer_warning3 = tmp ? true : false;
  }

  // Field name: est1_oos_front_brk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est1_oos_front_brk = tmp ? true : false;
  }

  // Field name: est2_oos_rear_brk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est2_oos_rear_brk = tmp ? true : false;
  }

  // Field name: est3_low_eng_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est3_low_eng_speed = tmp ? true : false;
  }

  // Field name: est4_sd_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est4_sd_comms_loss = tmp ? true : false;
  }

  // Field name: est5_motec_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est5_motec_comms_loss = tmp ? true : false;
  }

  // Field name: est6_sd_ebrake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->est6_sd_ebrake = tmp ? true : false;
  }

  // Field name: adlink_hb_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->adlink_hb_lost = tmp ? true : false;
  }

  // Field name: rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_lost = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__DiagnosticReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiagnosticReport__ros_msg_type * ros_message = static_cast<const _DiagnosticReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name sd_system_warning
  {
    size_t item_size = sizeof(ros_message->sd_system_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_system_failure
  {
    size_t item_size = sizeof(ros_message->sd_system_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motec_warning
  {
    size_t item_size = sizeof(ros_message->motec_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_brake_warning1
  {
    size_t item_size = sizeof(ros_message->sd_brake_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_brake_warning2
  {
    size_t item_size = sizeof(ros_message->sd_brake_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_brake_warning3
  {
    size_t item_size = sizeof(ros_message->sd_brake_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_steer_warning1
  {
    size_t item_size = sizeof(ros_message->sd_steer_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_steer_warning2
  {
    size_t item_size = sizeof(ros_message->sd_steer_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_steer_warning3
  {
    size_t item_size = sizeof(ros_message->sd_steer_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est1_oos_front_brk
  {
    size_t item_size = sizeof(ros_message->est1_oos_front_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est2_oos_rear_brk
  {
    size_t item_size = sizeof(ros_message->est2_oos_rear_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est3_low_eng_speed
  {
    size_t item_size = sizeof(ros_message->est3_low_eng_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est4_sd_comms_loss
  {
    size_t item_size = sizeof(ros_message->est4_sd_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est5_motec_comms_loss
  {
    size_t item_size = sizeof(ros_message->est5_motec_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est6_sd_ebrake
  {
    size_t item_size = sizeof(ros_message->est6_sd_ebrake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adlink_hb_lost
  {
    size_t item_size = sizeof(ros_message->adlink_hb_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_lost
  {
    size_t item_size = sizeof(ros_message->rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiagnosticReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__DiagnosticReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__DiagnosticReport(
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
  // member: sd_system_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_system_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motec_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sd_brake_warning1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_brake_warning2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_brake_warning3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_steer_warning1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_steer_warning2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_steer_warning3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est1_oos_front_brk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est2_oos_rear_brk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est3_low_eng_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est4_sd_comms_loss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est5_motec_comms_loss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: est6_sd_ebrake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adlink_hb_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DiagnosticReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__DiagnosticReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DiagnosticReport = {
  "deep_orange_msgs::msg",
  "DiagnosticReport",
  _DiagnosticReport__cdr_serialize,
  _DiagnosticReport__cdr_deserialize,
  _DiagnosticReport__get_serialized_size,
  _DiagnosticReport__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiagnosticReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, DiagnosticReport)() {
  return &_DiagnosticReport__type_support;
}

#if defined(__cplusplus)
}
#endif
