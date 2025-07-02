// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/GpsReferenceReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/gps_reference_report__struct.hpp"
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
  const raptor_dbw_msgs::msg::GpsReferenceReport & msg,
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

  // member: ref_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_latitude: ";
    value_to_yaml(msg.ref_latitude, out);
    out << "\n";
  }

  // member: ref_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_longitude: ";
    value_to_yaml(msg.ref_longitude, out);
    out << "\n";
  }

  // member: ref_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_heading: ";
    value_to_yaml(msg.ref_heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::GpsReferenceReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::GpsReferenceReport>()
{
  return "raptor_dbw_msgs::msg::GpsReferenceReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::GpsReferenceReport>()
{
  return "raptor_dbw_msgs/msg/GpsReferenceReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::GpsReferenceReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::GpsReferenceReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::GpsReferenceReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__TRAITS_HPP_
