// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/twist_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::TwistCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_yaml(msg.twist, out, indentation + 2);
  }

  // member: accel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit: ";
    value_to_yaml(msg.accel_limit, out);
    out << "\n";
  }

  // member: decel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decel_limit: ";
    value_to_yaml(msg.decel_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::TwistCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::TwistCmd>()
{
  return "raptor_dbw_msgs::msg::TwistCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::TwistCmd>()
{
  return "raptor_dbw_msgs/msg/TwistCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::TwistCmd>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::TwistCmd>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::TwistCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__TRAITS_HPP_
