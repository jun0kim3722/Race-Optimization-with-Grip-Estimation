// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/gear_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/gear__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::GearCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd:\n";
    to_yaml(msg.cmd, out, indentation + 2);
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    value_to_yaml(msg.enable, out);
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

inline std::string to_yaml(const raptor_dbw_msgs::msg::GearCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::GearCmd>()
{
  return "raptor_dbw_msgs::msg::GearCmd";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::GearCmd>()
{
  return "raptor_dbw_msgs/msg/GearCmd";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::GearCmd>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::Gear>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::GearCmd>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::Gear>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::GearCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__TRAITS_HPP_
