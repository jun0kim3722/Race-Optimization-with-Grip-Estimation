// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_temp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deep_orange_msgs/msg/detail/tire_temp__struct.hpp"

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

namespace deep_orange_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_serialize(
  const deep_orange_msgs::msg::TireTemp & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: median
  cdr << ros_message.median;
  // Member: mean
  cdr << ros_message.mean;
  // Member: min
  cdr << ros_message.min;
  // Member: max
  cdr << ros_message.max;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deep_orange_msgs::msg::TireTemp & ros_message)
{
  // Member: median
  cdr >> ros_message.median;

  // Member: mean
  cdr >> ros_message.mean;

  // Member: min
  cdr >> ros_message.min;

  // Member: max
  cdr >> ros_message.max;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
get_serialized_size(
  const deep_orange_msgs::msg::TireTemp & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: median
  {
    size_t item_size = sizeof(ros_message.median);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean
  {
    size_t item_size = sizeof(ros_message.mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max
  {
    size_t item_size = sizeof(ros_message.max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
max_serialized_size_TireTemp(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: median
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mean
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TireTemp__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::TireTemp *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TireTemp__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deep_orange_msgs::msg::TireTemp *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TireTemp__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::TireTemp *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TireTemp__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TireTemp(full_bounded, 0);
}

static message_type_support_callbacks_t _TireTemp__callbacks = {
  "deep_orange_msgs::msg",
  "TireTemp",
  _TireTemp__cdr_serialize,
  _TireTemp__cdr_deserialize,
  _TireTemp__get_serialized_size,
  _TireTemp__max_serialized_size
};

static rosidl_message_type_support_t _TireTemp__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TireTemp__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deep_orange_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deep_orange_msgs::msg::TireTemp>()
{
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_TireTemp__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deep_orange_msgs, msg, TireTemp)() {
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_TireTemp__handle;
}

#ifdef __cplusplus
}
#endif
