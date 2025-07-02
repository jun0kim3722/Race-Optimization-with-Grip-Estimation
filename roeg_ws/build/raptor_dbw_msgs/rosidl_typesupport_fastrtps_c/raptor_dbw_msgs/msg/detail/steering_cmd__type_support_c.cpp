// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/steering_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/steering_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/steering_cmd__functions.h"
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

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode)();


using _SteeringCmd__ros_msg_type = raptor_dbw_msgs__msg__SteeringCmd;

static bool _SteeringCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SteeringCmd__ros_msg_type * ros_message = static_cast<const _SteeringCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: angle_cmd
  {
    cdr << ros_message->angle_cmd;
  }

  // Field name: angle_velocity
  {
    cdr << ros_message->angle_velocity;
  }

  // Field name: enable
  {
    cdr << (ros_message->enable ? true : false);
  }

  // Field name: ignore
  {
    cdr << (ros_message->ignore ? true : false);
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  // Field name: torque_cmd
  {
    cdr << ros_message->torque_cmd;
  }

  // Field name: vehicle_curvature_cmd
  {
    cdr << ros_message->vehicle_curvature_cmd;
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

static bool _SteeringCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SteeringCmd__ros_msg_type * ros_message = static_cast<_SteeringCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: angle_cmd
  {
    cdr >> ros_message->angle_cmd;
  }

  // Field name: angle_velocity
  {
    cdr >> ros_message->angle_velocity;
  }

  // Field name: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable = tmp ? true : false;
  }

  // Field name: ignore
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore = tmp ? true : false;
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  // Field name: torque_cmd
  {
    cdr >> ros_message->torque_cmd;
  }

  // Field name: vehicle_curvature_cmd
  {
    cdr >> ros_message->vehicle_curvature_cmd;
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
size_t get_serialized_size_raptor_dbw_msgs__msg__SteeringCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SteeringCmd__ros_msg_type * ros_message = static_cast<const _SteeringCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name angle_cmd
  {
    size_t item_size = sizeof(ros_message->angle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_velocity
  {
    size_t item_size = sizeof(ros_message->angle_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore
  {
    size_t item_size = sizeof(ros_message->ignore);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_cmd
  {
    size_t item_size = sizeof(ros_message->torque_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_curvature_cmd
  {
    size_t item_size = sizeof(ros_message->vehicle_curvature_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_type

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
    &(ros_message->control_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SteeringCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__SteeringCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__SteeringCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: angle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignore
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: torque_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_curvature_cmd
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

static size_t _SteeringCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__SteeringCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SteeringCmd = {
  "raptor_dbw_msgs::msg",
  "SteeringCmd",
  _SteeringCmd__cdr_serialize,
  _SteeringCmd__cdr_deserialize,
  _SteeringCmd__get_serialized_size,
  _SteeringCmd__max_serialized_size
};

static rosidl_message_type_support_t _SteeringCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SteeringCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, SteeringCmd)() {
  return &_SteeringCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
