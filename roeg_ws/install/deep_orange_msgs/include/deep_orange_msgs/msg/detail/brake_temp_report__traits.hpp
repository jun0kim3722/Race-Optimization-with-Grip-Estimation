// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/BrakeTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/brake_temp_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const deep_orange_msgs::msg::BrakeTempReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: fl_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_brake_temp: ";
    value_to_yaml(msg.fl_brake_temp, out);
    out << "\n";
  }

  // member: fr_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_brake_temp: ";
    value_to_yaml(msg.fr_brake_temp, out);
    out << "\n";
  }

  // member: rl_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_brake_temp: ";
    value_to_yaml(msg.rl_brake_temp, out);
    out << "\n";
  }

  // member: rr_brake_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_brake_temp: ";
    value_to_yaml(msg.rr_brake_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::BrakeTempReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::BrakeTempReport>()
{
  return "deep_orange_msgs::msg::BrakeTempReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::BrakeTempReport>()
{
  return "deep_orange_msgs/msg/BrakeTempReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::BrakeTempReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::BrakeTempReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::BrakeTempReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__TRAITS_HPP_
