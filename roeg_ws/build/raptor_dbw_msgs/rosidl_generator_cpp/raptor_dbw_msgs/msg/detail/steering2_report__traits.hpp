// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/steering2_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::Steering2Report & msg,
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

  // member: vehicle_curvature_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_curvature_actual: ";
    value_to_yaml(msg.vehicle_curvature_actual, out);
    out << "\n";
  }

  // member: max_torque_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque_driver: ";
    value_to_yaml(msg.max_torque_driver, out);
    out << "\n";
  }

  // member: max_torque_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque_motor: ";
    value_to_yaml(msg.max_torque_motor, out);
    out << "\n";
  }

  // member: expect_torque_driver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expect_torque_driver: ";
    value_to_yaml(msg.expect_torque_driver, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::Steering2Report & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::Steering2Report>()
{
  return "raptor_dbw_msgs::msg::Steering2Report";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::Steering2Report>()
{
  return "raptor_dbw_msgs/msg/Steering2Report";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::Steering2Report>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::Steering2Report>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::Steering2Report>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__TRAITS_HPP_
