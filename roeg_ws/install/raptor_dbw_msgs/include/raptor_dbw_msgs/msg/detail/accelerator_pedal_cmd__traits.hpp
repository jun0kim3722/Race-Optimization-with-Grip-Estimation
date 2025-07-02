// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__struct.hpp"
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
  const raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pedal_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_cmd: ";
    value_to_yaml(msg.pedal_cmd, out);
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

  // member: speed_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd: ";
    value_to_yaml(msg.speed_cmd, out);
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

  // member: road_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_slope: ";
    value_to_yaml(msg.road_slope, out);
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

  // member: accel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit: ";
    value_to_yaml(msg.accel_limit, out);
    out << "\n";
  }

  // member: accel_positive_jerk_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_positive_jerk_limit: ";
    value_to_yaml(msg.accel_positive_jerk_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::AcceleratorPedalCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::AcceleratorPedalCmd>()
{
  return "raptor_dbw_msgs::msg::AcceleratorPedalCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::AcceleratorPedalCmd>()
{
  return "raptor_dbw_msgs/msg/AcceleratorPedalCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::AcceleratorPedalCmd>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::AcceleratorPedalCmd>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::ActuatorControlMode>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::AcceleratorPedalCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__TRAITS_HPP_
