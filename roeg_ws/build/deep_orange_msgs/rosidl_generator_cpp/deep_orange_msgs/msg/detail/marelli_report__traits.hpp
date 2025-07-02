// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/MarelliReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/marelli_report__struct.hpp"
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
  const deep_orange_msgs::msg::MarelliReport & msg,
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

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lte_modem_lte_rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lte_modem_lte_rssi: ";
    value_to_yaml(msg.lte_modem_lte_rssi, out);
    out << "\n";
  }

  // member: lte_sync_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lte_sync_ok: ";
    value_to_yaml(msg.lte_sync_ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::MarelliReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::MarelliReport>()
{
  return "deep_orange_msgs::msg::MarelliReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::MarelliReport>()
{
  return "deep_orange_msgs/msg/MarelliReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::MarelliReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::MarelliReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::MarelliReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__TRAITS_HPP_
