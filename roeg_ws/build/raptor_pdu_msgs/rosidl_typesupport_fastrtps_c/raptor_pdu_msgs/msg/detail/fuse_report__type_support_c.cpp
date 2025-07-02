// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_pdu_msgs:msg/FuseReport.idl
// generated code does not contain a copyright notice
#include "raptor_pdu_msgs/msg/detail/fuse_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_pdu_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_pdu_msgs/msg/detail/fuse_report__struct.h"
#include "raptor_pdu_msgs/msg/detail/fuse_report__functions.h"
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

#include "raptor_pdu_msgs/msg/detail/fuse_status__functions.h"  // fuse_1, fuse_10, fuse_11, fuse_12, fuse_13, fuse_14, fuse_15, fuse_16, fuse_2, fuse_3, fuse_4, fuse_5, fuse_6, fuse_7, fuse_8, fuse_9
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus)();
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


using _FuseReport__ros_msg_type = raptor_pdu_msgs__msg__FuseReport;

static bool _FuseReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FuseReport__ros_msg_type * ros_message = static_cast<const _FuseReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fuse_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_1, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_2, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_3, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_4, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_5, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_6, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_7, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_8, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_9
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_9, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_10
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_10, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_11
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_11, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_12
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_12, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_13
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_13, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_14, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_15
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_15, cdr))
    {
      return false;
    }
  }

  // Field name: fuse_16
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuse_16, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FuseReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FuseReport__ros_msg_type * ros_message = static_cast<_FuseReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fuse_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_1))
    {
      return false;
    }
  }

  // Field name: fuse_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_2))
    {
      return false;
    }
  }

  // Field name: fuse_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_3))
    {
      return false;
    }
  }

  // Field name: fuse_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_4))
    {
      return false;
    }
  }

  // Field name: fuse_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_5))
    {
      return false;
    }
  }

  // Field name: fuse_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_6))
    {
      return false;
    }
  }

  // Field name: fuse_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_7))
    {
      return false;
    }
  }

  // Field name: fuse_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_8))
    {
      return false;
    }
  }

  // Field name: fuse_9
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_9))
    {
      return false;
    }
  }

  // Field name: fuse_10
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_10))
    {
      return false;
    }
  }

  // Field name: fuse_11
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_11))
    {
      return false;
    }
  }

  // Field name: fuse_12
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_12))
    {
      return false;
    }
  }

  // Field name: fuse_13
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_13))
    {
      return false;
    }
  }

  // Field name: fuse_14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_14))
    {
      return false;
    }
  }

  // Field name: fuse_15
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_15))
    {
      return false;
    }
  }

  // Field name: fuse_16
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuse_16))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_pdu_msgs
size_t get_serialized_size_raptor_pdu_msgs__msg__FuseReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FuseReport__ros_msg_type * ros_message = static_cast<const _FuseReport__ros_msg_type *>(untyped_ros_message);
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
  // field.name fuse_1

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_1), current_alignment);
  // field.name fuse_2

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_2), current_alignment);
  // field.name fuse_3

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_3), current_alignment);
  // field.name fuse_4

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_4), current_alignment);
  // field.name fuse_5

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_5), current_alignment);
  // field.name fuse_6

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_6), current_alignment);
  // field.name fuse_7

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_7), current_alignment);
  // field.name fuse_8

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_8), current_alignment);
  // field.name fuse_9

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_9), current_alignment);
  // field.name fuse_10

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_10), current_alignment);
  // field.name fuse_11

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_11), current_alignment);
  // field.name fuse_12

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_12), current_alignment);
  // field.name fuse_13

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_13), current_alignment);
  // field.name fuse_14

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_14), current_alignment);
  // field.name fuse_15

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_15), current_alignment);
  // field.name fuse_16

  current_alignment += get_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
    &(ros_message->fuse_16), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FuseReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_pdu_msgs__msg__FuseReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_pdu_msgs
size_t max_serialized_size_raptor_pdu_msgs__msg__FuseReport(
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
  // member: fuse_1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_6
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_7
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_8
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_9
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_10
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_11
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_12
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_13
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_14
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_15
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: fuse_16
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_raptor_pdu_msgs__msg__FuseStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FuseReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_raptor_pdu_msgs__msg__FuseReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FuseReport = {
  "raptor_pdu_msgs::msg",
  "FuseReport",
  _FuseReport__cdr_serialize,
  _FuseReport__cdr_deserialize,
  _FuseReport__get_serialized_size,
  _FuseReport__max_serialized_size
};

static rosidl_message_type_support_t _FuseReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FuseReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_pdu_msgs, msg, FuseReport)() {
  return &_FuseReport__type_support;
}

#if defined(__cplusplus)
}
#endif
