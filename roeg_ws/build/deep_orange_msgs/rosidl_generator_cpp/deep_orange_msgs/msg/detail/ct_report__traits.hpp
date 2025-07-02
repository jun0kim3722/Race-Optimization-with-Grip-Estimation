// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/ct_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const deep_orange_msgs::msg::CtReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: track_cond_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_cond_ack: ";
    value_to_yaml(msg.track_cond_ack, out);
    out << "\n";
  }

  // member: veh_sig_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_sig_ack: ";
    value_to_yaml(msg.veh_sig_ack, out);
    out << "\n";
  }

  // member: ct_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ct_state: ";
    value_to_yaml(msg.ct_state, out);
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

  // member: veh_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_num: ";
    value_to_yaml(msg.veh_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::CtReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::CtReport>()
{
  return "deep_orange_msgs::msg::CtReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::CtReport>()
{
  return "deep_orange_msgs/msg/CtReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::CtReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::CtReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::CtReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__TRAITS_HPP_
