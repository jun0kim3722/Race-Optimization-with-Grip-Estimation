// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/tire_temp_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "deep_orange_msgs/msg/detail/tire_temp__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const deep_orange_msgs::msg::TireTempReport & msg,
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
    out << "front_left:\n";
    to_yaml(msg.front_left, out, indentation + 2);
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right:\n";
    to_yaml(msg.front_right, out, indentation + 2);
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left:\n";
    to_yaml(msg.rear_left, out, indentation + 2);
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right:\n";
    to_yaml(msg.rear_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::TireTempReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::TireTempReport>()
{
  return "deep_orange_msgs::msg::TireTempReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::TireTempReport>()
{
  return "deep_orange_msgs/msg/TireTempReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::TireTempReport>
  : std::integral_constant<bool, has_fixed_size<deep_orange_msgs::msg::TireTemp>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::TireTempReport>
  : std::integral_constant<bool, has_bounded_size<deep_orange_msgs::msg::TireTemp>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::TireTempReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__TRAITS_HPP_
