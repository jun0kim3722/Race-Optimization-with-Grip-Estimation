// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/steering_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::SteeringCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_cmd: ";
    value_to_yaml(msg.angle_cmd, out);
    out << "\n";
  }

  // member: angle_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_velocity: ";
    value_to_yaml(msg.angle_velocity, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: ignore
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore: ";
    value_to_yaml(msg.ignore, out);
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

  // member: torque_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_cmd: ";
    value_to_yaml(msg.torque_cmd, out);
    out << "\n";
  }

  // member: vehicle_curvature_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_curvature_cmd: ";
    value_to_yaml(msg.vehicle_curvature_cmd, out);
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

inline std::string to_yaml(const raptor_dbw_msgs::msg::SteeringCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::SteeringCmd>()
{
  return "raptor_dbw_msgs::msg::SteeringCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::SteeringCmd>()
{
  return "raptor_dbw_msgs/msg/SteeringCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::SteeringCmd>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::SteeringCmd>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::SteeringCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__TRAITS_HPP_
