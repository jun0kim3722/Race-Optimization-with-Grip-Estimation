// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/exit_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::ExitReport & msg,
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

  // member: akit_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "akit_disable: ";
    value_to_yaml(msg.akit_disable, out);
    out << "\n";
  }

  // member: driver_in_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_in_control: ";
    value_to_yaml(msg.driver_in_control, out);
    out << "\n";
  }

  // member: idx_auton_disable_no_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_auton_disable_no_brakes: ";
    value_to_yaml(msg.idx_auton_disable_no_brakes, out);
    out << "\n";
  }

  // member: idx_auton_disable_apply_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx_auton_disable_apply_brakes: ";
    value_to_yaml(msg.idx_auton_disable_apply_brakes, out);
    out << "\n";
  }

  // member: auton_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auton_counter: ";
    value_to_yaml(msg.auton_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::ExitReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::ExitReport>()
{
  return "raptor_dbw_msgs::msg::ExitReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::ExitReport>()
{
  return "raptor_dbw_msgs/msg/ExitReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::ExitReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::ExitReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::ExitReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__TRAITS_HPP_
