// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_pdu_msgs:msg/RelayReport.idl
// generated code does not contain a copyright notice
#include "raptor_pdu_msgs/msg/detail/relay_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_pdu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_pdu_msgs/msg/detail/relay_report__struct.h"
#include "raptor_pdu_msgs/msg/detail/relay_report__functions.h"
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

#include "raptor_pdu_msgs/msg/detail/relay_status__functions.h"  // relay_1, relay_2, relay_3, relay_4, relay_5, relay_6, relay_7, relay_8
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_pdu_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_pdu_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_pdu_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RelayReport__ros_msg_type = raptor_pdu_msgs__msg__RelayReport;

static bool _RelayReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RelayReport__ros_msg_type * ros_message = static_cast<const _RelayReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: grid_address
  {
    cdr << ros_message->grid_address;
  }

  // Field name: relay_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_1, cdr))
    {
      return false;
    }
  }

  // Field name: relay_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_2, cdr))
    {
      return false;
    }
  }

  // Field name: relay_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_3, cdr))
    {
      return false;
    }
  }

  // Field name: relay_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_4, cdr))
    {
      return false;
    }
  }

  // Field name: relay_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_5, cdr))
    {
      return false;
    }
  }

  // Field name: relay_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_6, cdr))
    {
      return false;
    }
  }

  // Field name: relay_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_7, cdr))
    {
      return false;
    }
  }

  // Field name: relay_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->relay_8, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RelayReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RelayReport__ros_msg_type * ros_message = static_cast<_RelayReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: grid_address
  {
    cdr >> ros_message->grid_address;
  }

  // Field name: relay_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_1))
    {
      return false;
    }
  }

  // Field name: relay_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_2))
    {
      return false;
    }
  }

  // Field name: relay_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_3))
    {
      return false;
    }
  }

  // Field name: relay_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_4))
    {
      return false;
    }
  }

  // Field name: relay_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_5))
    {
      return false;
    }
  }

  // Field name: relay_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_6))
    {
      return false;
    }
  }

  // Field name: relay_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_7))
    {
      return false;
    }
  }

  // Field name: relay_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->relay_8))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_pdu_msgs
size_t get_serialized_size_raptor_pdu_msgs__msg__RelayReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RelayReport__ros_msg_type * ros_message = static_cast<const _RelayReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name grid_address
  {
    size_t item_size = sizeof(ros_message->grid_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relay_1

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_1), current_alignment);
  // field.name relay_2

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_2), current_alignment);
  // field.name relay_3

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_3), current_alignment);
  // field.name relay_4

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_4), current_alignment);
  // field.name relay_5

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_5), current_alignment);
  // field.name relay_6

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_6), current_alignment);
  // field.name relay_7

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_7), current_alignment);
  // field.name relay_8

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
    &(ros_message->relay_8), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RelayReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_pdu_msgs__msg__RelayReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_pdu_msgs
size_t max_serialized_size_raptor_pdu_msgs__msg__RelayReport(
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
  // member: grid_address
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relay_1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_6
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_7
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }
  // member: relay_8
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__RelayStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RelayReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_pdu_msgs__msg__RelayReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RelayReport = {
  "raptor_pdu_msgs::msg",
  "RelayReport",
  _RelayReport__cdr_serialize,
  _RelayReport__cdr_deserialize,
  _RelayReport__get_serialized_size,
  _RelayReport__max_serialized_size
};

static rosidl_message_type_support_t _RelayReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RelayReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, RelayReport)() {
  return &_RelayReport__type_support;
}

#if defined(__cplusplus)
}
#endif
