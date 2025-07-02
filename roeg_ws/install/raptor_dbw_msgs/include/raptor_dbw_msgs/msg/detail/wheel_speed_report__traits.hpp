// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/WheelSpeedReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/wheel_speed_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::WheelSpeedReport & msg,
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

  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left: ";
    value_to_yaml(msg.front_left, out);
    out << "\n";
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right: ";
    value_to_yaml(msg.front_right, out);
    out << "\n";
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left: ";
    value_to_yaml(msg.rear_left, out);
    out << "\n";
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right: ";
    value_to_yaml(msg.rear_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::WheelSpeedReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::WheelSpeedReport>()
{
  return "raptor_dbw_msgs::msg::WheelSpeedReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::WheelSpeedReport>()
{
  return "raptor_dbw_msgs/msg/WheelSpeedReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::WheelSpeedReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::WheelSpeedReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::WheelSpeedReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_REPORT__TRAITS_HPP_
