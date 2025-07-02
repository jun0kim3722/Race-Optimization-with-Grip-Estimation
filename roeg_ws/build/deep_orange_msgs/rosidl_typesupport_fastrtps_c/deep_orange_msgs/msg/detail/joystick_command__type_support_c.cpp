// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/joystick_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/joystick_command__struct.h"
#include "deep_orange_msgs/msg/detail/joystick_command__functions.h"
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


using _JoystickCommand__ros_msg_type = deep_orange_msgs__msg__JoystickCommand;

static bool _JoystickCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JoystickCommand__ros_msg_type * ros_message = static_cast<const _JoystickCommand__ros_msg_type *>(untyped_ros_message);
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

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: emergency_stop
  {
    cdr << ros_message->emergency_stop;
  }

  // Field name: coordinated_stop
  {
    cdr << ros_message->coordinated_stop;
  }

  // Field name: joy_enable
  {
    cdr << ros_message->joy_enable;
  }

  // Field name: steering_cmd
  {
    cdr << ros_message->steering_cmd;
  }

  // Field name: brake_cmd
  {
    cdr << ros_message->brake_cmd;
  }

  // Field name: accelerator_cmd
  {
    cdr << ros_message->accelerator_cmd;
  }

  // Field name: gear_cmd
  {
    cdr << ros_message->gear_cmd;
  }

  // Field name: joystick_healthy
  {
    cdr << (ros_message->joystick_healthy ? true : false);
  }

  return true;
}

static bool _JoystickCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JoystickCommand__ros_msg_type * ros_message = static_cast<_JoystickCommand__ros_msg_type *>(untyped_ros_message);
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

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: emergency_stop
  {
    cdr >> ros_message->emergency_stop;
  }

  // Field name: coordinated_stop
  {
    cdr >> ros_message->coordinated_stop;
  }

  // Field name: joy_enable
  {
    cdr >> ros_message->joy_enable;
  }

  // Field name: steering_cmd
  {
    cdr >> ros_message->steering_cmd;
  }

  // Field name: brake_cmd
  {
    cdr >> ros_message->brake_cmd;
  }

  // Field name: accelerator_cmd
  {
    cdr >> ros_message->accelerator_cmd;
  }

  // Field name: gear_cmd
  {
    cdr >> ros_message->gear_cmd;
  }

  // Field name: joystick_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joystick_healthy = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__JoystickCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JoystickCommand__ros_msg_type * ros_message = static_cast<const _JoystickCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coordinated_stop
  {
    size_t item_size = sizeof(ros_message->coordinated_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joy_enable
  {
    size_t item_size = sizeof(ros_message->joy_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_cmd
  {
    size_t item_size = sizeof(ros_message->steering_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_cmd
  {
    size_t item_size = sizeof(ros_message->brake_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelerator_cmd
  {
    size_t item_size = sizeof(ros_message->accelerator_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_cmd
  {
    size_t item_size = sizeof(ros_message->gear_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joystick_healthy
  {
    size_t item_size = sizeof(ros_message->joystick_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JoystickCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__JoystickCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__JoystickCommand(
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
  // member: counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coordinated_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joy_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accelerator_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joystick_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _JoystickCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__JoystickCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JoystickCommand = {
  "deep_orange_msgs::msg",
  "JoystickCommand",
  _JoystickCommand__cdr_serialize,
  _JoystickCommand__cdr_deserialize,
  _JoystickCommand__get_serialized_size,
  _JoystickCommand__max_serialized_size
};

static rosidl_message_type_support_t _JoystickCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JoystickCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, JoystickCommand)() {
  return &_JoystickCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
