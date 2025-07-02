// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/BrakeReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/brake_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'parking_brake'
#include "raptor_dbw_msgs/msg/detail/parking_brake__traits.hpp"
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::BrakeReport & msg,
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

  // member: pedal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_position: ";
    value_to_yaml(msg.pedal_position, out);
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

  // member: driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_activity: ";
    value_to_yaml(msg.driver_activity, out);
    out << "\n";
  }

  // member: fault_brake_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_brake_system: ";
    value_to_yaml(msg.fault_brake_system, out);
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

  // member: brake_torque_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_torque_actual: ";
    value_to_yaml(msg.brake_torque_actual, out);
    out << "\n";
  }

  // member: intervention_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intervention_active: ";
    value_to_yaml(msg.intervention_active, out);
    out << "\n";
  }

  // member: intervention_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intervention_ready: ";
    value_to_yaml(msg.intervention_ready, out);
    out << "\n";
  }

  // member: parking_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_brake:\n";
    to_yaml(msg.parking_brake, out, indentation + 2);
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

inline std::string to_yaml(const raptor_dbw_msgs::msg::BrakeReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::BrakeReport>()
{
  return "raptor_dbw_msgs::msg::BrakeReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::BrakeReport>()
{
  return "raptor_dbw_msgs/msg/BrakeReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::BrakeReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_fixed_size<raptor_dbw_msgs::msg::ParkingBrake>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::BrakeReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value && has_bounded_size<raptor_dbw_msgs::msg::ParkingBrake>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::BrakeReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_REPORT__TRAITS_HPP_
