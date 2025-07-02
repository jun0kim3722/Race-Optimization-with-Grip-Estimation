// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_pdu_msgs:msg/FuseStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__TRAITS_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__TRAITS_HPP_

#include "raptor_pdu_msgs/msg/detail/fuse_status__struct.hpp"
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
  const raptor_pdu_msgs::msg::FuseStatus & msg,
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

inline std::string to_yaml(const raptor_pdu_msgs::msg::FuseStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_pdu_msgs::msg::FuseStatus>()
{
  return "raptor_pdu_msgs::msg::FuseStatus";
}

template<>
inline const char * name<raptor_pdu_msgs::msg::FuseStatus>()
{
  return "raptor_pdu_msgs/msg/FuseStatus";
}

template<>
struct has_fixed_size<raptor_pdu_msgs::msg::FuseStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_pdu_msgs::msg::FuseStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_pdu_msgs::msg::FuseStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__TRAITS_HPP_
