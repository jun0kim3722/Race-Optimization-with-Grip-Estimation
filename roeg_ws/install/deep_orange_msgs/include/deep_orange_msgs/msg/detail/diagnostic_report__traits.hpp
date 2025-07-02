// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/diagnostic_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const deep_orange_msgs::msg::DiagnosticReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: sd_system_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_system_warning: ";
    value_to_yaml(msg.sd_system_warning, out);
    out << "\n";
  }

  // member: sd_system_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_system_failure: ";
    value_to_yaml(msg.sd_system_failure, out);
    out << "\n";
  }

  // member: motec_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motec_warning: ";
    value_to_yaml(msg.motec_warning, out);
    out << "\n";
  }

  // member: sd_brake_warning1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning1: ";
    value_to_yaml(msg.sd_brake_warning1, out);
    out << "\n";
  }

  // member: sd_brake_warning2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning2: ";
    value_to_yaml(msg.sd_brake_warning2, out);
    out << "\n";
  }

  // member: sd_brake_warning3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_brake_warning3: ";
    value_to_yaml(msg.sd_brake_warning3, out);
    out << "\n";
  }

  // member: sd_steer_warning1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning1: ";
    value_to_yaml(msg.sd_steer_warning1, out);
    out << "\n";
  }

  // member: sd_steer_warning2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning2: ";
    value_to_yaml(msg.sd_steer_warning2, out);
    out << "\n";
  }

  // member: sd_steer_warning3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_steer_warning3: ";
    value_to_yaml(msg.sd_steer_warning3, out);
    out << "\n";
  }

  // member: est1_oos_front_brk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est1_oos_front_brk: ";
    value_to_yaml(msg.est1_oos_front_brk, out);
    out << "\n";
  }

  // member: est2_oos_rear_brk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est2_oos_rear_brk: ";
    value_to_yaml(msg.est2_oos_rear_brk, out);
    out << "\n";
  }

  // member: est3_low_eng_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est3_low_eng_speed: ";
    value_to_yaml(msg.est3_low_eng_speed, out);
    out << "\n";
  }

  // member: est4_sd_comms_loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est4_sd_comms_loss: ";
    value_to_yaml(msg.est4_sd_comms_loss, out);
    out << "\n";
  }

  // member: est5_motec_comms_loss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est5_motec_comms_loss: ";
    value_to_yaml(msg.est5_motec_comms_loss, out);
    out << "\n";
  }

  // member: est6_sd_ebrake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est6_sd_ebrake: ";
    value_to_yaml(msg.est6_sd_ebrake, out);
    out << "\n";
  }

  // member: adlink_hb_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adlink_hb_lost: ";
    value_to_yaml(msg.adlink_hb_lost, out);
    out << "\n";
  }

  // member: rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost: ";
    value_to_yaml(msg.rc_lost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::DiagnosticReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::DiagnosticReport>()
{
  return "deep_orange_msgs::msg::DiagnosticReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::DiagnosticReport>()
{
  return "deep_orange_msgs/msg/DiagnosticReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::DiagnosticReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::DiagnosticReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::DiagnosticReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__TRAITS_HPP_
