// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::AcceleratorPedalReport & msg,
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

  // member: pedal_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_input: ";
    value_to_yaml(msg.pedal_input, out);
    out << "\n";
  }

  // member: pedal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_output: ";
    value_to_yaml(msg.pedal_output, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: ignore_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_driver: ";
    value_to_yaml(msg.ignore_driver, out);
    out << "\n";
  }

  // member: driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_activity: ";
    value_to_yaml(msg.driver_activity, out);
    out << "\n";
  }

  // member: fault_accel_pedal_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_accel_pedal_system: ";
    value_to_yaml(msg.fault_accel_pedal_system, out);
    out << "\n";
  }

  // member: fault_ch1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch1: ";
    value_to_yaml(msg.fault_ch1, out);
    out << "\n";
  }

  // member: fault_ch2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_ch2: ";
    value_to_yaml(msg.fault_ch2, out);
    out << "\n";
  }

  // member: rolling_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_counter: ";
    value_to_yaml(msg.rolling_counter, out);
    out << "\n";
  }

  // member: torque_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_actual: ";
    value_to_yaml(msg.torque_actual, out);
    out << "\n";
  }

  // member: control_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_type:\n";
    to_yaml(msg.control_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::AcceleratorPedalReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::AcceleratorPedalReport>()
{
  return "raptor_dbw_msgs::msg::AcceleratorPedalReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::AcceleratorPedalReport>()
{
  return "raptor_dbw_msgs/msg/AcceleratorPedalReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::AcceleratorPedalReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__TRAITS_HPP_
