// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/door_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::DoorRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::DoorRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::DoorRequest>()
{
  return "raptor_dbw_msgs::msg::DoorRequest";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::DoorRequest>()
{
  return "raptor_dbw_msgs/msg/DoorRequest";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::DoorRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::DoorRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<raptor_dbw_msgs::msg::DoorRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__TRAITS_HPP_
