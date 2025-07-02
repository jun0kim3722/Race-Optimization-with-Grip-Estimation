// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/tire_temp__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const deep_orange_msgs::msg::TireTemp & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: median
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "median: ";
    value_to_yaml(msg.median, out);
    out << "\n";
  }

  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean: ";
    value_to_yaml(msg.mean, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    value_to_yaml(msg.max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::TireTemp & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::TireTemp>()
{
  return "deep_orange_msgs::msg::TireTemp";
}

template<>
inline const char * name<deep_orange_msgs::msg::TireTemp>()
{
  return "deep_orange_msgs/msg/TireTemp";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::TireTemp>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::TireTemp>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deep_orange_msgs::msg::TireTemp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__TRAITS_HPP_
