// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/HornState.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/horn_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/horn_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace raptor_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::HornState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::HornState & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::HornState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_HornState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _HornState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::HornState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HornState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::HornState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HornState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::HornState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HornState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HornState(full_bounded, 0);
}

static message_type_support_callbacks_t _HornState__callbacks = {
  "raptor_dbw_msgs::msg",
  "HornState",
  _HornState__cdr_serialize,
  _HornState__cdr_deserialize,
  _HornState__get_serialized_size,
  _HornState__max_serialized_size
};

static rosidl_message_type_support_t _HornState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HornState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace raptor_dbw_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<raptor_dbw_msgs::msg::HornState>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_HornState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, HornState)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_HornState__handle;
}

#ifdef __cplusplus
}
#endif
