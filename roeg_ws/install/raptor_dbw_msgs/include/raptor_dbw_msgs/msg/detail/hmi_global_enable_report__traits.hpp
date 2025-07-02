// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg,
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

  // member: enable_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_request: ";
    value_to_yaml(msg.enable_request, out);
    out << "\n";
  }

  // member: disable_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_request: ";
    value_to_yaml(msg.disable_request, out);
    out << "\n";
  }

  // member: checksum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checksum: ";
    value_to_yaml(msg.checksum, out);
    out << "\n";
  }

  // member: ecu_build_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_build_number: ";
    value_to_yaml(msg.ecu_build_number, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::HmiGlobalEnableReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::HmiGlobalEnableReport>()
{
  return "raptor_dbw_msgs::msg::HmiGlobalEnableReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::HmiGlobalEnableReport>()
{
  return "raptor_dbw_msgs/msg/HmiGlobalEnableReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::HmiGlobalEnableReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::HmiGlobalEnableReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::HmiGlobalEnableReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__TRAITS_HPP_
