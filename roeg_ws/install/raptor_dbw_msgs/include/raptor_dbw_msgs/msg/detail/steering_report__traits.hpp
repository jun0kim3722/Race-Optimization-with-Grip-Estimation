// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/steering_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::SteeringReport & msg,
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

  // member: steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle: ";
    value_to_yaml(msg.steering_wheel_angle, out);
    out << "\n";
  }

  // member: steering_wheel_angle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle_cmd: ";
    value_to_yaml(msg.steering_wheel_angle_cmd, out);
    out << "\n";
  }

  // member: steering_wheel_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_torque: ";
    value_to_yaml(msg.steering_wheel_torque, out);
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

  // member: driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_activity: ";
    value_to_yaml(msg.driver_activity, out);
    out << "\n";
  }

  // member: fault_steering_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_steering_system: ";
    value_to_yaml(msg.fault_steering_system, out);
    out << "\n";
  }

  // member: overheat_prevention_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overheat_prevention_mode: ";
    value_to_yaml(msg.overheat_prevention_mode, out);
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

  // member: control_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_type:\n";
    to_yaml(msg.control_type, out, indentation + 2);
  }

  // member: steering_overheat_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_overheat_warning: ";
    value_to_yaml(msg.steering_overheat_warning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::SteeringReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::SteeringReport>()
{
  return "raptor_dbw_msgs::msg::SteeringReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::SteeringReport>()
{
  return "raptor_dbw_msgs/msg/SteeringReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::SteeringReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::SteeringReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::SteeringReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__TRAITS_HPP_
