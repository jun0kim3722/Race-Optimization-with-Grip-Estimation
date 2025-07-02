// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__struct.hpp"

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
bool cdr_serialize(
  const raptor_dbw_msgs::msg::ButtonState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::ButtonState &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::ButtonState &,
  size_t current_alignment);
size_t
max_serialized_size_ButtonState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace raptor_dbw_msgs


namespace raptor_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::FaultActionsReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: autonomous_disabled_no_brakes
  cdr << (ros_message.autonomous_disabled_no_brakes ? true : false);
  // Member: autonomous_disabled_apply_brakes
  cdr << (ros_message.autonomous_disabled_apply_brakes ? true : false);
  // Member: can_gateway_disabled
  cdr << (ros_message.can_gateway_disabled ? true : false);
  // Member: inverter_contactor_disabled
  cdr << (ros_message.inverter_contactor_disabled ? true : false);
  // Member: prevent_enter_autonomous_mode
  cdr << (ros_message.prevent_enter_autonomous_mode ? true : false);
  // Member: warn_driver_only
  cdr << (ros_message.warn_driver_only ? true : false);
  // Member: chime_fcw_beeps
  cdr << (ros_message.chime_fcw_beeps ? true : false);
  // Member: last_active_fault_idx
  cdr << ros_message.last_active_fault_idx;
  // Member: estop_btn_pressed
  cdr << (ros_message.estop_btn_pressed ? true : false);
  // Member: remote_estop_btn_pressed
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.remote_estop_btn_pressed,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::FaultActionsReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: autonomous_disabled_no_brakes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.autonomous_disabled_no_brakes = tmp ? true : false;
  }

  // Member: autonomous_disabled_apply_brakes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.autonomous_disabled_apply_brakes = tmp ? true : false;
  }

  // Member: can_gateway_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_gateway_disabled = tmp ? true : false;
  }

  // Member: inverter_contactor_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.inverter_contactor_disabled = tmp ? true : false;
  }

  // Member: prevent_enter_autonomous_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.prevent_enter_autonomous_mode = tmp ? true : false;
  }

  // Member: warn_driver_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.warn_driver_only = tmp ? true : false;
  }

  // Member: chime_fcw_beeps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.chime_fcw_beeps = tmp ? true : false;
  }

  // Member: last_active_fault_idx
  cdr >> ros_message.last_active_fault_idx;

  // Member: estop_btn_pressed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop_btn_pressed = tmp ? true : false;
  }

  // Member: remote_estop_btn_pressed
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.remote_estop_btn_pressed);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::FaultActionsReport & ros_message,
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
  // Member: autonomous_disabled_no_brakes
  {
    size_t item_size = sizeof(ros_message.autonomous_disabled_no_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: autonomous_disabled_apply_brakes
  {
    size_t item_size = sizeof(ros_message.autonomous_disabled_apply_brakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_gateway_disabled
  {
    size_t item_size = sizeof(ros_message.can_gateway_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inverter_contactor_disabled
  {
    size_t item_size = sizeof(ros_message.inverter_contactor_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prevent_enter_autonomous_mode
  {
    size_t item_size = sizeof(ros_message.prevent_enter_autonomous_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: warn_driver_only
  {
    size_t item_size = sizeof(ros_message.warn_driver_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chime_fcw_beeps
  {
    size_t item_size = sizeof(ros_message.chime_fcw_beeps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_active_fault_idx
  {
    size_t item_size = sizeof(ros_message.last_active_fault_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_btn_pressed
  {
    size_t item_size = sizeof(ros_message.estop_btn_pressed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remote_estop_btn_pressed

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.remote_estop_btn_pressed, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_FaultActionsReport(
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

  // Member: autonomous_disabled_no_brakes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: autonomous_disabled_apply_brakes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_gateway_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: inverter_contactor_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prevent_enter_autonomous_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: warn_driver_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chime_fcw_beeps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_active_fault_idx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: estop_btn_pressed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remote_estop_btn_pressed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ButtonState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FaultActionsReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::FaultActionsReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FaultActionsReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::FaultActionsReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FaultActionsReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::FaultActionsReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FaultActionsReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FaultActionsReport(full_bounded, 0);
}

static message_type_support_callbacks_t _FaultActionsReport__callbacks = {
  "raptor_dbw_msgs::msg",
  "FaultActionsReport",
  _FaultActionsReport__cdr_serialize,
  _FaultActionsReport__cdr_deserialize,
  _FaultActionsReport__get_serialized_size,
  _FaultActionsReport__max_serialized_size
};

static rosidl_message_type_support_t _FaultActionsReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FaultActionsReport__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_FaultActionsReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, FaultActionsReport)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_FaultActionsReport__handle;
}

#ifdef __cplusplus
}
#endif
