// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/misc_report__struct.hpp"
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
  const deep_orange_msgs::msg::MiscReport & msg,
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

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: off_grid_power_connection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "off_grid_power_connection: ";
    value_to_yaml(msg.off_grid_power_connection, out);
    out << "\n";
  }

  // member: safety_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_state: ";
    value_to_yaml(msg.safety_switch_state, out);
    out << "\n";
  }

  // member: mode_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_switch_state: ";
    value_to_yaml(msg.mode_switch_state, out);
    out << "\n";
  }

  // member: sys_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_state: ";
    value_to_yaml(msg.sys_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::MiscReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::MiscReport>()
{
  return "deep_orange_msgs::msg::MiscReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::MiscReport>()
{
  return "deep_orange_msgs/msg/MiscReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::MiscReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::MiscReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MISC_REPORT__TRAITS_HPP_
