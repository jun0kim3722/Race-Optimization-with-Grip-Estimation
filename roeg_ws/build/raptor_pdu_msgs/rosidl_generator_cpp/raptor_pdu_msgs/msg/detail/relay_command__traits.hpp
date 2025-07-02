// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_pdu_msgs:msg/RelayCommand.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__TRAITS_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__TRAITS_HPP_

#include "raptor_pdu_msgs/msg/detail/relay_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'relay_1'
// Member 'relay_2'
// Member 'relay_3'
// Member 'relay_4'
// Member 'relay_5'
// Member 'relay_6'
// Member 'relay_7'
// Member 'relay_8'
#include "raptor_pdu_msgs/msg/detail/relay_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_pdu_msgs::msg::RelayCommand & msg,
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

  // member: relay_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_1:\n";
    to_yaml(msg.relay_1, out, indentation + 2);
  }

  // member: relay_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_2:\n";
    to_yaml(msg.relay_2, out, indentation + 2);
  }

  // member: relay_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_3:\n";
    to_yaml(msg.relay_3, out, indentation + 2);
  }

  // member: relay_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_4:\n";
    to_yaml(msg.relay_4, out, indentation + 2);
  }

  // member: relay_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_5:\n";
    to_yaml(msg.relay_5, out, indentation + 2);
  }

  // member: relay_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_6:\n";
    to_yaml(msg.relay_6, out, indentation + 2);
  }

  // member: relay_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_7:\n";
    to_yaml(msg.relay_7, out, indentation + 2);
  }

  // member: relay_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay_8:\n";
    to_yaml(msg.relay_8, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_pdu_msgs::msg::RelayCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_pdu_msgs::msg::RelayCommand>()
{
  return "raptor_pdu_msgs::msg::RelayCommand";
}

template<>
inline const char * name<raptor_pdu_msgs::msg::RelayCommand>()
{
  return "raptor_pdu_msgs/msg/RelayCommand";
}

template<>
struct has_fixed_size<raptor_pdu_msgs::msg::RelayCommand>
  : std::integral_constant<bool, has_fixed_size<raptor_pdu_msgs::msg::RelayState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_pdu_msgs::msg::RelayCommand>
  : std::integral_constant<bool, has_bounded_size<raptor_pdu_msgs::msg::RelayState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_pdu_msgs::msg::RelayCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__TRAITS_HPP_
