// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/exit_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/exit_report__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace raptor_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::ExitReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: akit_disable
  cdr << (ros_message.akit_disable ? true : false);
  // Member: driver_in_control
  cdr << (ros_message.driver_in_control ? true : false);
  // Member: idx_auton_disable_no_brakes
  cdr << ros_message.idx_auton_disable_no_brakes;
  // Member: idx_auton_disable_apply_brakes
  cdr << ros_message.idx_auton_disable_apply_brakes;
  // Member: auton_counter
  cdr << ros_message.auton_counter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::ExitReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: akit_disable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.akit_disable = tmp ? true : false;
  }

  // Member: driver_in_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.driver_in_control = tmp ? true : false;
  }

  // Member: idx_auton_disable_no_brakes
  cdr >> ros_message.idx_auton_disable_no_brakes;

  // Member: idx_auton_disable_apply_brakes
  cdr >> ros_message.idx_auton_disable_apply_brakes;

  // Member: auton_counter
  cdr >> ros_message.auton_counter;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::ExitReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: akit_disable
  {
    size_t item_size = sizeof(ros_message.akit_disable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_in_control
  {
    size_t item_size = sizeof(ros_message.driver_in_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: idx_auton_disable_no_brakes
  {
    size_t item_size = sizeof(ros_message.idx_auton_disable_no_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: idx_auton_disable_apply_brakes
  {
    size_t item_size = sizeof(ros_message.idx_auton_disable_apply_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auton_counter
  {
    size_t item_size = sizeof(ros_message.auton_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_ExitReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: akit_disable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driver_in_control
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: idx_auton_disable_no_brakes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: idx_auton_disable_apply_brakes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: auton_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ExitReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::ExitReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ExitReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::ExitReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ExitReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::ExitReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ExitReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ExitReport(full_bounded, 0);
}

static message_type_support_callbacks_t _ExitReport__callbacks = {
  "raptor_dbw_msgs::msg",
  "ExitReport",
  _ExitReport__cdr_serialize,
  _ExitReport__cdr_deserialize,
  _ExitReport__get_serialized_size,
  _ExitReport__max_serialized_size
};

static rosidl_message_type_support_t _ExitReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ExitReport__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::ExitReport>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_ExitReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, ExitReport)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_ExitReport__handle;
}

#ifdef __cplusplus
}
#endif
