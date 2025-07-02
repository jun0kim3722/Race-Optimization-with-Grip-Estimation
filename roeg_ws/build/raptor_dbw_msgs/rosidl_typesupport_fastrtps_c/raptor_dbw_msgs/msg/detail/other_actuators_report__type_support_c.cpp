// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__functions.h"
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

#include "raptor_dbw_msgs/msg/detail/door_lock__functions.h"  // door_lock_state
#include "raptor_dbw_msgs/msg/detail/door_state__functions.h"  // left_rear_door_state, liftgate_door_state, right_rear_door_state
#include "raptor_dbw_msgs/msg/detail/high_beam_state__functions.h"  // high_beam_state
#include "raptor_dbw_msgs/msg/detail/horn_state__functions.h"  // horn_state
#include "raptor_dbw_msgs/msg/detail/ignition__functions.h"  // ignition_state
#include "raptor_dbw_msgs/msg/detail/low_beam_state__functions.h"  // low_beam_state
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"  // turn_signal_state
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"  // front_wiper_state
#include "raptor_dbw_msgs/msg/detail/wiper_rear__functions.h"  // rear_wiper_state
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__DoorLock(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__DoorLock(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorLock)();
size_t get_serialized_size_raptor_dbw_msgs__msg__DoorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__DoorState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState)();
size_t get_serialized_size_raptor_dbw_msgs__msg__HighBeamState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__HighBeamState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeamState)();
size_t get_serialized_size_raptor_dbw_msgs__msg__HornState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__HornState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HornState)();
size_t get_serialized_size_raptor_dbw_msgs__msg__Ignition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__Ignition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition)();
size_t get_serialized_size_raptor_dbw_msgs__msg__LowBeamState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__LowBeamState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeamState)();
size_t get_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal)();
size_t get_serialized_size_raptor_dbw_msgs__msg__WiperFront(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__WiperFront(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront)();
size_t get_serialized_size_raptor_dbw_msgs__msg__WiperRear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__WiperRear(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear)();
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


using _OtherActuatorsReport__ros_msg_type = raptor_dbw_msgs__msg__OtherActuatorsReport;

static bool _OtherActuatorsReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OtherActuatorsReport__ros_msg_type * ros_message = static_cast<const _OtherActuatorsReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ignition_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ignition_state, cdr))
    {
      return false;
    }
  }

  // Field name: horn_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HornState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->horn_state, cdr))
    {
      return false;
    }
  }

  // Field name: turn_signal_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->turn_signal_state, cdr))
    {
      return false;
    }
  }

  // Field name: turn_signal_sync
  {
    cdr << (ros_message->turn_signal_sync ? true : false);
  }

  // Field name: high_beam_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeamState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->high_beam_state, cdr))
    {
      return false;
    }
  }

  // Field name: low_beam_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeamState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->low_beam_state, cdr))
    {
      return false;
    }
  }

  // Field name: front_wiper_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_wiper_state, cdr))
    {
      return false;
    }
  }

  // Field name: rear_wiper_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_wiper_state, cdr))
    {
      return false;
    }
  }

  // Field name: right_rear_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_rear_door_state, cdr))
    {
      return false;
    }
  }

  // Field name: left_rear_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_rear_door_state, cdr))
    {
      return false;
    }
  }

  // Field name: liftgate_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->liftgate_door_state, cdr))
    {
      return false;
    }
  }

  // Field name: door_lock_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorLock
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->door_lock_state, cdr))
    {
      return false;
    }
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  return true;
}

static bool _OtherActuatorsReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OtherActuatorsReport__ros_msg_type * ros_message = static_cast<_OtherActuatorsReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ignition_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ignition_state))
    {
      return false;
    }
  }

  // Field name: horn_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HornState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->horn_state))
    {
      return false;
    }
  }

  // Field name: turn_signal_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->turn_signal_state))
    {
      return false;
    }
  }

  // Field name: turn_signal_sync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_signal_sync = tmp ? true : false;
  }

  // Field name: high_beam_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeamState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->high_beam_state))
    {
      return false;
    }
  }

  // Field name: low_beam_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeamState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->low_beam_state))
    {
      return false;
    }
  }

  // Field name: front_wiper_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_wiper_state))
    {
      return false;
    }
  }

  // Field name: rear_wiper_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_wiper_state))
    {
      return false;
    }
  }

  // Field name: right_rear_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_rear_door_state))
    {
      return false;
    }
  }

  // Field name: left_rear_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_rear_door_state))
    {
      return false;
    }
  }

  // Field name: liftgate_door_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->liftgate_door_state))
    {
      return false;
    }
  }

  // Field name: door_lock_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorLock
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->door_lock_state))
    {
      return false;
    }
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__OtherActuatorsReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OtherActuatorsReport__ros_msg_type * ros_message = static_cast<const _OtherActuatorsReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ignition_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__Ignition(
    &(ros_message->ignition_state), current_alignment);
  // field.name horn_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__HornState(
    &(ros_message->horn_state), current_alignment);
  // field.name turn_signal_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
    &(ros_message->turn_signal_state), current_alignment);
  // field.name turn_signal_sync
  {
    size_t item_size = sizeof(ros_message->turn_signal_sync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__HighBeamState(
    &(ros_message->high_beam_state), current_alignment);
  // field.name low_beam_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__LowBeamState(
    &(ros_message->low_beam_state), current_alignment);
  // field.name front_wiper_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__WiperFront(
    &(ros_message->front_wiper_state), current_alignment);
  // field.name rear_wiper_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__WiperRear(
    &(ros_message->rear_wiper_state), current_alignment);
  // field.name right_rear_door_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorState(
    &(ros_message->right_rear_door_state), current_alignment);
  // field.name left_rear_door_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorState(
    &(ros_message->left_rear_door_state), current_alignment);
  // field.name liftgate_door_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorState(
    &(ros_message->liftgate_door_state), current_alignment);
  // field.name door_lock_state

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorLock(
    &(ros_message->door_lock_state), current_alignment);
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OtherActuatorsReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__OtherActuatorsReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__OtherActuatorsReport(
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
  // member: ignition_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__Ignition(
        full_bounded, current_alignment);
    }
  }
  // member: horn_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__HornState(
        full_bounded, current_alignment);
    }
  }
  // member: turn_signal_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
        full_bounded, current_alignment);
    }
  }
  // member: turn_signal_sync
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: high_beam_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__HighBeamState(
        full_bounded, current_alignment);
    }
  }
  // member: low_beam_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__LowBeamState(
        full_bounded, current_alignment);
    }
  }
  // member: front_wiper_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__WiperFront(
        full_bounded, current_alignment);
    }
  }
  // member: rear_wiper_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__WiperRear(
        full_bounded, current_alignment);
    }
  }
  // member: right_rear_door_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__DoorState(
        full_bounded, current_alignment);
    }
  }
  // member: left_rear_door_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__DoorState(
        full_bounded, current_alignment);
    }
  }
  // member: liftgate_door_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__DoorState(
        full_bounded, current_alignment);
    }
  }
  // member: door_lock_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_dbw_msgs__msg__DoorLock(
        full_bounded, current_alignment);
    }
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OtherActuatorsReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_dbw_msgs__msg__OtherActuatorsReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OtherActuatorsReport = {
  "raptor_dbw_msgs::msg",
  "OtherActuatorsReport",
  _OtherActuatorsReport__cdr_serialize,
  _OtherActuatorsReport__cdr_deserialize,
  _OtherActuatorsReport__get_serialized_size,
  _OtherActuatorsReport__max_serialized_size
};

static rosidl_message_type_support_t _OtherActuatorsReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OtherActuatorsReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, OtherActuatorsReport)() {
  return &_OtherActuatorsReport__type_support;
}

#if defined(__cplusplus)
}
#endif
