// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__functions.h"
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

#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"  // control_type
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode)();
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


using _AcceleratorPedalReport__ros_msg_type = raptor_dbw_msgs__msg__AcceleratorPedalReport;

static bool _AcceleratorPedalReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AcceleratorPedalReport__ros_msg_type * ros_message = static_cast<const _AcceleratorPedalReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: pedal_input
  {
    cdr << ros_message->pedal_input;
  }

  // Field name: pedal_output
  {
    cdr << ros_message->pedal_output;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: ignore_driver
  {
    cdr << (ros_message->ignore_driver ? true : false);
  }

  // Field name: driver_activity
  {
    cdr << (ros_message->driver_activity ? true : false);
  }

  // Field name: fault_accel_pedal_system
  {
    cdr << (ros_message->fault_accel_pedal_system ? true : false);
  }

  // Field name: fault_ch1
  {
    cdr << (ros_message->fault_ch1 ? true : false);
  }

  // Field name: fault_ch2
  {
    cdr << (ros_message->fault_ch2 ? true : false);
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  // Field name: torque_actual
  {
    cdr << ros_message->torque_actual;
  }

  // Field name: control_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->control_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AcceleratorPedalReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AcceleratorPedalReport__ros_msg_type * ros_message = static_cast<_AcceleratorPedalReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: pedal_input
  {
    cdr >> ros_message->pedal_input;
  }

  // Field name: pedal_output
  {
    cdr >> ros_message->pedal_output;
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: ignore_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_driver = tmp ? true : false;
  }

  // Field name: driver_activity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->driver_activity = tmp ? true : false;
  }

  // Field name: fault_accel_pedal_system
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_accel_pedal_system = tmp ? true : false;
  }

  // Field name: fault_ch1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_ch1 = tmp ? true : false;
  }

  // Field name: fault_ch2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fault_ch2 = tmp ? true : false;
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  // Field name: torque_actual
  {
    cdr >> ros_message->torque_actual;
  }

  // Field name: control_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->control_type))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AcceleratorPedalReport__ros_msg_type * ros_message = static_cast<const _AcceleratorPedalReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name pedal_input
  {
    size_t item_size = sizeof(ros_message->pedal_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pedal_output
  {
    size_t item_size = sizeof(ros_message->pedal_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore_driver
  {
    size_t item_size = sizeof(ros_message->ignore_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_activity
  {
    size_t item_size = sizeof(ros_message->driver_activity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault_accel_pedal_system
  {
    size_t item_size = sizeof(ros_message->fault_accel_pedal_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault_ch1
  {
    size_t item_size = sizeof(ros_message->fault_ch1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault_ch2
  {
    size_t item_size = sizeof(ros_message->fault_ch2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_actual
  {
    size_t item_size = sizeof(ros_message->torque_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_type

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
    &(ros_message->control_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AcceleratorPedalReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalReport(
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
  // member: pedal_input
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pedal_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignore_driver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driver_activity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault_accel_pedal_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault_ch1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault_ch2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: torque_actual
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AcceleratorPedalReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AcceleratorPedalReport = {
  "raptor_dbw_msgs::msg",
  "AcceleratorPedalReport",
  _AcceleratorPedalReport__cdr_serialize,
  _AcceleratorPedalReport__cdr_deserialize,
  _AcceleratorPedalReport__get_serialized_size,
  _AcceleratorPedalReport__max_serialized_size
};

static rosidl_message_type_support_t _AcceleratorPedalReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AcceleratorPedalReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, AcceleratorPedalReport)() {
  return &_AcceleratorPedalReport__type_support;
}

#if defined(__cplusplus)
}
#endif
