// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/steering2_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/steering2_report__struct.hpp"

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
  const raptor_dbw_msgs::msg::Steering2Report & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: vehicle_curvature_actual
  cdr << ros_message.vehicle_curvature_actual;
  // Member: max_torque_driver
  cdr << ros_message.max_torque_driver;
  // Member: max_torque_motor
  cdr << ros_message.max_torque_motor;
  // Member: expect_torque_driver
  cdr << ros_message.expect_torque_driver;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::Steering2Report & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: vehicle_curvature_actual
  cdr >> ros_message.vehicle_curvature_actual;

  // Member: max_torque_driver
  cdr >> ros_message.max_torque_driver;

  // Member: max_torque_motor
  cdr >> ros_message.max_torque_motor;

  // Member: expect_torque_driver
  cdr >> ros_message.expect_torque_driver;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::Steering2Report & ros_message,
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
  // Member: vehicle_curvature_actual
  {
    size_t item_size = sizeof(ros_message.vehicle_curvature_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque_driver
  {
    size_t item_size = sizeof(ros_message.max_torque_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque_motor
  {
    size_t item_size = sizeof(ros_message.max_torque_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: expect_torque_driver
  {
    size_t item_size = sizeof(ros_message.expect_torque_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_Steering2Report(
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

  // Member: vehicle_curvature_actual
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque_driver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_torque_motor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: expect_torque_driver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Steering2Report__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::Steering2Report *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Steering2Report__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::Steering2Report *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Steering2Report__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::Steering2Report *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Steering2Report__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Steering2Report(full_bounded, 0);
}

static message_type_support_callbacks_t _Steering2Report__callbacks = {
  "raptor_dbw_msgs::msg",
  "Steering2Report",
  _Steering2Report__cdr_serialize,
  _Steering2Report__cdr_deserialize,
  _Steering2Report__get_serialized_size,
  _Steering2Report__max_serialized_size
};

static rosidl_message_type_support_t _Steering2Report__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Steering2Report__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::Steering2Report>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_Steering2Report__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, Steering2Report)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_Steering2Report__handle;
}

#ifdef __cplusplus
}
#endif
