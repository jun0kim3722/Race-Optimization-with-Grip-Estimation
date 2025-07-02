// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/LowBeam.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/low_beam__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::LowBeam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::LowBeam & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::LowBeam>()
{
  return "raptor_dbw_msgs::msg::LowBeam";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::LowBeam>()
{
  return "raptor_dbw_msgs/msg/LowBeam";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::LowBeam>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::LowBeam>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raptor_dbw_msgs::msg::LowBeam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__TRAITS_HPP_
