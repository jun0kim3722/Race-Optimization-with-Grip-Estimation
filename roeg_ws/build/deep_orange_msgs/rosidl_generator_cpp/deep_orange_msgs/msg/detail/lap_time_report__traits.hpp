// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/LapTimeReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/lap_time_report__struct.hpp"
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
  const deep_orange_msgs::msg::LapTimeReport & msg,
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

  // member: laps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laps: ";
    value_to_yaml(msg.laps, out);
    out << "\n";
  }

  // member: lap_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_time: ";
    value_to_yaml(msg.lap_time, out);
    out << "\n";
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::LapTimeReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::LapTimeReport>()
{
  return "deep_orange_msgs::msg::LapTimeReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::LapTimeReport>()
{
  return "deep_orange_msgs/msg/LapTimeReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::LapTimeReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::LapTimeReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::LapTimeReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__TRAITS_HPP_
