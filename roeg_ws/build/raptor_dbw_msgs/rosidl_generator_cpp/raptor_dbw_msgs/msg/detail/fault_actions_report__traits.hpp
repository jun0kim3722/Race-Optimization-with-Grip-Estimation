// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/fault_actions_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'remote_estop_btn_pressed'
#include "raptor_dbw_msgs/msg/detail/button_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::FaultActionsReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: autonomous_disabled_no_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_disabled_no_brakes: ";
    value_to_yaml(msg.autonomous_disabled_no_brakes, out);
    out << "\n";
  }

  // member: autonomous_disabled_apply_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_disabled_apply_brakes: ";
    value_to_yaml(msg.autonomous_disabled_apply_brakes, out);
    out << "\n";
  }

  // member: can_gateway_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_gateway_disabled: ";
    value_to_yaml(msg.can_gateway_disabled, out);
    out << "\n";
  }

  // member: inverter_contactor_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inverter_contactor_disabled: ";
    value_to_yaml(msg.inverter_contactor_disabled, out);
    out << "\n";
  }

  // member: prevent_enter_autonomous_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prevent_enter_autonomous_mode: ";
    value_to_yaml(msg.prevent_enter_autonomous_mode, out);
    out << "\n";
  }

  // member: warn_driver_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warn_driver_only: ";
    value_to_yaml(msg.warn_driver_only, out);
    out << "\n";
  }

  // member: chime_fcw_beeps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chime_fcw_beeps: ";
    value_to_yaml(msg.chime_fcw_beeps, out);
    out << "\n";
  }

  // member: last_active_fault_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_active_fault_idx: ";
    value_to_yaml(msg.last_active_fault_idx, out);
    out << "\n";
  }

  // member: estop_btn_pressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_btn_pressed: ";
    value_to_yaml(msg.estop_btn_pressed, out);
    out << "\n";
  }

  // member: remote_estop_btn_pressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_estop_btn_pressed:\n";
    to_yaml(msg.remote_estop_btn_pressed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::FaultActionsReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return "raptor_dbw_msgs::msg::FaultActionsReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::FaultActionsReport>()
{
  return "raptor_dbw_msgs/msg/FaultActionsReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ButtonState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ButtonState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::FaultActionsReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__TRAITS_HPP_
