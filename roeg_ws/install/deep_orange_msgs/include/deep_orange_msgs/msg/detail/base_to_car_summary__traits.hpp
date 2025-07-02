// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/base_to_car_summary__struct.hpp"
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
  const deep_orange_msgs::msg::BaseToCarSummary & msg,
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

  // member: base_to_car_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_to_car_heartbeat: ";
    value_to_yaml(msg.base_to_car_heartbeat, out);
    out << "\n";
  }

  // member: track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_flag: ";
    value_to_yaml(msg.track_flag, out);
    out << "\n";
  }

  // member: veh_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_flag: ";
    value_to_yaml(msg.veh_flag, out);
    out << "\n";
  }

  // member: veh_rank
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_rank: ";
    value_to_yaml(msg.veh_rank, out);
    out << "\n";
  }

  // member: lap_status_whole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_status_whole: ";
    value_to_yaml(msg.lap_status_whole, out);
    out << "\n";
  }

  // member: lap_status_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_status_fraction: ";
    value_to_yaml(msg.lap_status_fraction, out);
    out << "\n";
  }

  // member: round_target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "round_target_speed: ";
    value_to_yaml(msg.round_target_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::BaseToCarSummary & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::BaseToCarSummary>()
{
  return "deep_orange_msgs::msg::BaseToCarSummary";
}

template<>
inline const char * name<deep_orange_msgs::msg::BaseToCarSummary>()
{
  return "deep_orange_msgs/msg/BaseToCarSummary";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::BaseToCarSummary>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::BaseToCarSummary>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::BaseToCarSummary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__TRAITS_HPP_
