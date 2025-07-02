// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/gear_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "raptor_dbw_msgs/msg/detail/gear__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::GearReport & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_yaml(msg.state, out, indentation + 2);
  }

  // member: reject
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject: ";
    value_to_yaml(msg.reject, out);
    out << "\n";
  }

  // member: driver_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_activity: ";
    value_to_yaml(msg.driver_activity, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: trans_curr_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trans_curr_gear: ";
    value_to_yaml(msg.trans_curr_gear, out);
    out << "\n";
  }

  // member: gear_select_system_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_select_system_fault: ";
    value_to_yaml(msg.gear_select_system_fault, out);
    out << "\n";
  }

  // member: gear_mismatch_flash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_mismatch_flash: ";
    value_to_yaml(msg.gear_mismatch_flash, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::GearReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::GearReport>()
{
  return "raptor_dbw_msgs::msg::GearReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::GearReport>()
{
  return "raptor_dbw_msgs/msg/GearReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::GearReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::Gear>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::GearReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::Gear>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::GearReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__TRAITS_HPP_
