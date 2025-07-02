// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/race_control_report__struct.hpp"
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
  const deep_orange_msgs::msg::RaceControlReport & msg,
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

  // member: lap_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_count: ";
    value_to_yaml(msg.lap_count, out);
    out << "\n";
  }

  // member: lap_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_distance: ";
    value_to_yaml(msg.lap_distance, out);
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

  // member: marelli_track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marelli_track_flag: ";
    value_to_yaml(msg.marelli_track_flag, out);
    out << "\n";
  }

  // member: marelli_vehicle_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marelli_vehicle_flag: ";
    value_to_yaml(msg.marelli_vehicle_flag, out);
    out << "\n";
  }

  // member: marelli_sector_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marelli_sector_flag: ";
    value_to_yaml(msg.marelli_sector_flag, out);
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

inline std::string to_yaml(const deep_orange_msgs::msg::RaceControlReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::RaceControlReport>()
{
  return "deep_orange_msgs::msg::RaceControlReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::RaceControlReport>()
{
  return "deep_orange_msgs/msg/RaceControlReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::RaceControlReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::RaceControlReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::RaceControlReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__TRAITS_HPP_
