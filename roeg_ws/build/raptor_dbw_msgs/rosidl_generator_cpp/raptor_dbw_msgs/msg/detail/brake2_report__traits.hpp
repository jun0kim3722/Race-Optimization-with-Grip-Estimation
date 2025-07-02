// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/Brake2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/brake2_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::Brake2Report & msg,
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

  // member: brake_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_pressure: ";
    value_to_yaml(msg.brake_pressure, out);
    out << "\n";
  }

  // member: estimated_road_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_road_slope: ";
    value_to_yaml(msg.estimated_road_slope, out);
    out << "\n";
  }

  // member: speed_set_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_set_point: ";
    value_to_yaml(msg.speed_set_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::Brake2Report & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::Brake2Report>()
{
  return "raptor_dbw_msgs::msg::Brake2Report";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::Brake2Report>()
{
  return "raptor_dbw_msgs/msg/Brake2Report";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::Brake2Report>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::Brake2Report>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::Brake2Report>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__TRAITS_HPP_
