// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/diagnostic_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deep_orange_msgs/msg/detail/diagnostic_report__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace deep_orange_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_serialize(
  const deep_orange_msgs::msg::DiagnosticReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: sd_system_warning
  cdr << (ros_message.sd_system_warning ? true : false);
  // Member: sd_system_failure
  cdr << (ros_message.sd_system_failure ? true : false);
  // Member: motec_warning
  cdr << ros_message.motec_warning;
  // Member: sd_brake_warning1
  cdr << (ros_message.sd_brake_warning1 ? true : false);
  // Member: sd_brake_warning2
  cdr << (ros_message.sd_brake_warning2 ? true : false);
  // Member: sd_brake_warning3
  cdr << (ros_message.sd_brake_warning3 ? true : false);
  // Member: sd_steer_warning1
  cdr << (ros_message.sd_steer_warning1 ? true : false);
  // Member: sd_steer_warning2
  cdr << (ros_message.sd_steer_warning2 ? true : false);
  // Member: sd_steer_warning3
  cdr << (ros_message.sd_steer_warning3 ? true : false);
  // Member: est1_oos_front_brk
  cdr << (ros_message.est1_oos_front_brk ? true : false);
  // Member: est2_oos_rear_brk
  cdr << (ros_message.est2_oos_rear_brk ? true : false);
  // Member: est3_low_eng_speed
  cdr << (ros_message.est3_low_eng_speed ? true : false);
  // Member: est4_sd_comms_loss
  cdr << (ros_message.est4_sd_comms_loss ? true : false);
  // Member: est5_motec_comms_loss
  cdr << (ros_message.est5_motec_comms_loss ? true : false);
  // Member: est6_sd_ebrake
  cdr << (ros_message.est6_sd_ebrake ? true : false);
  // Member: adlink_hb_lost
  cdr << (ros_message.adlink_hb_lost ? true : false);
  // Member: rc_lost
  cdr << (ros_message.rc_lost ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deep_orange_msgs::msg::DiagnosticReport & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: sd_system_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_system_warning = tmp ? true : false;
  }

  // Member: sd_system_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_system_failure = tmp ? true : false;
  }

  // Member: motec_warning
  cdr >> ros_message.motec_warning;

  // Member: sd_brake_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning1 = tmp ? true : false;
  }

  // Member: sd_brake_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning2 = tmp ? true : false;
  }

  // Member: sd_brake_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning3 = tmp ? true : false;
  }

  // Member: sd_steer_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning1 = tmp ? true : false;
  }

  // Member: sd_steer_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning2 = tmp ? true : false;
  }

  // Member: sd_steer_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning3 = tmp ? true : false;
  }

  // Member: est1_oos_front_brk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est1_oos_front_brk = tmp ? true : false;
  }

  // Member: est2_oos_rear_brk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est2_oos_rear_brk = tmp ? true : false;
  }

  // Member: est3_low_eng_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est3_low_eng_speed = tmp ? true : false;
  }

  // Member: est4_sd_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est4_sd_comms_loss = tmp ? true : false;
  }

  // Member: est5_motec_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est5_motec_comms_loss = tmp ? true : false;
  }

  // Member: est6_sd_ebrake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.est6_sd_ebrake = tmp ? true : false;
  }

  // Member: adlink_hb_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adlink_hb_lost = tmp ? true : false;
  }

  // Member: rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_lost = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
get_serialized_size(
  const deep_orange_msgs::msg::DiagnosticReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: sd_system_warning
  {
    size_t item_size = sizeof(ros_message.sd_system_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_system_failure
  {
    size_t item_size = sizeof(ros_message.sd_system_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motec_warning
  {
    size_t item_size = sizeof(ros_message.motec_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning1
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning2
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning3
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning1
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning2
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning3
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est1_oos_front_brk
  {
    size_t item_size = sizeof(ros_message.est1_oos_front_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est2_oos_rear_brk
  {
    size_t item_size = sizeof(ros_message.est2_oos_rear_brk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est3_low_eng_speed
  {
    size_t item_size = sizeof(ros_message.est3_low_eng_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est4_sd_comms_loss
  {
    size_t item_size = sizeof(ros_message.est4_sd_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est5_motec_comms_loss
  {
    size_t item_size = sizeof(ros_message.est5_motec_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est6_sd_ebrake
  {
    size_t item_size = sizeof(ros_message.est6_sd_ebrake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adlink_hb_lost
  {
    size_t item_size = sizeof(ros_message.adlink_hb_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_lost
  {
    size_t item_size = sizeof(ros_message.rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
max_serialized_size_DiagnosticReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: sd_system_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_system_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motec_warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sd_brake_warning1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_brake_warning2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_brake_warning3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est1_oos_front_brk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est2_oos_rear_brk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est3_low_eng_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est4_sd_comms_loss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est5_motec_comms_loss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: est6_sd_ebrake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adlink_hb_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DiagnosticReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deep_orange_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DiagnosticReport(full_bounded, 0);
}

static message_type_support_callbacks_t _DiagnosticReport__callbacks = {
  "deep_orange_msgs::msg",
  "DiagnosticReport",
  _DiagnosticReport__cdr_serialize,
  _DiagnosticReport__cdr_deserialize,
  _DiagnosticReport__get_serialized_size,
  _DiagnosticReport__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DiagnosticReport__callbacks,
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
get_message_type_support_handle<deep_orange_msgs::msg::DiagnosticReport>()
{
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deep_orange_msgs, msg, DiagnosticReport)() {
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticReport__handle;
}

#ifdef __cplusplus
}
#endif
