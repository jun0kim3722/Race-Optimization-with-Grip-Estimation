// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/surround_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rear_right'
// Member 'rear_left'
// Member 'rear_center'
// Member 'front_right'
// Member 'front_left'
// Member 'front_center'
#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::SurroundReport & msg,
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

  // member: front_radar_object_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_radar_object_distance: ";
    value_to_yaml(msg.front_radar_object_distance, out);
    out << "\n";
  }

  // member: rear_radar_object_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_radar_object_distance: ";
    value_to_yaml(msg.rear_radar_object_distance, out);
    out << "\n";
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right:\n";
    to_yaml(msg.rear_right, out, indentation + 2);
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left:\n";
    to_yaml(msg.rear_left, out, indentation + 2);
  }

  // member: rear_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_center:\n";
    to_yaml(msg.rear_center, out, indentation + 2);
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right:\n";
    to_yaml(msg.front_right, out, indentation + 2);
  }

  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left:\n";
    to_yaml(msg.front_left, out, indentation + 2);
  }

  // member: front_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_center:\n";
    to_yaml(msg.front_center, out, indentation + 2);
  }

  // member: front_radar_distance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_radar_distance_valid: ";
    value_to_yaml(msg.front_radar_distance_valid, out);
    out << "\n";
  }

  // member: parking_sonar_data_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_sonar_data_valid: ";
    value_to_yaml(msg.parking_sonar_data_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::SurroundReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::SurroundReport>()
{
  return "raptor_dbw_msgs::msg::SurroundReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::SurroundReport>()
{
  return "raptor_dbw_msgs/msg/SurroundReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::SonarArcNum>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::SurroundReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::SonarArcNum>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::SurroundReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__TRAITS_HPP_
