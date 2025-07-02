// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/telemetry__struct.hpp"
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
  const deep_orange_msgs::msg::Telemetry & msg,
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

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: off_grid_power_connection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "off_grid_power_connection: ";
    value_to_yaml(msg.off_grid_power_connection, out);
    out << "\n";
  }

  // member: safety_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_switch_state: ";
    value_to_yaml(msg.safety_switch_state, out);
    out << "\n";
  }

  // member: mode_switch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_switch_state: ";
    value_to_yaml(msg.mode_switch_state, out);
    out << "\n";
  }

  // member: sys_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_state: ";
    value_to_yaml(msg.sys_state, out);
    out << "\n";
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

  // member: map_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_sensor: ";
    value_to_yaml(msg.map_sensor, out);
    out << "\n";
  }

  // member: lambda_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lambda_sensor: ";
    value_to_yaml(msg.lambda_sensor, out);
    out << "\n";
  }

  // member: fuel_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_level: ";
    value_to_yaml(msg.fuel_level, out);
    out << "\n";
  }

  // member: fuel_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure: ";
    value_to_yaml(msg.fuel_pressure, out);
    out << "\n";
  }

  // member: engine_oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_pressure: ";
    value_to_yaml(msg.engine_oil_pressure, out);
    out << "\n";
  }

  // member: engine_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_temperature: ";
    value_to_yaml(msg.engine_oil_temperature, out);
    out << "\n";
  }

  // member: engine_coolant_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_coolant_temperature: ";
    value_to_yaml(msg.engine_coolant_temperature, out);
    out << "\n";
  }

  // member: engine_coolant_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_coolant_pressure: ";
    value_to_yaml(msg.engine_coolant_pressure, out);
    out << "\n";
  }

  // member: engine_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_rpm: ";
    value_to_yaml(msg.engine_rpm, out);
    out << "\n";
  }

  // member: engine_on_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_on_status: ";
    value_to_yaml(msg.engine_on_status, out);
    out << "\n";
  }

  // member: engine_run_switch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_run_switch_status: ";
    value_to_yaml(msg.engine_run_switch_status, out);
    out << "\n";
  }

  // member: throttle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position: ";
    value_to_yaml(msg.throttle_position, out);
    out << "\n";
  }

  // member: current_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_gear: ";
    value_to_yaml(msg.current_gear, out);
    out << "\n";
  }

  // member: gear_shift_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_shift_status: ";
    value_to_yaml(msg.gear_shift_status, out);
    out << "\n";
  }

  // member: transmission_oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_oil_pressure: ";
    value_to_yaml(msg.transmission_oil_pressure, out);
    out << "\n";
  }

  // member: transmission_accumulator_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_accumulator_pressure: ";
    value_to_yaml(msg.transmission_accumulator_pressure, out);
    out << "\n";
  }

  // member: transmission_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission_oil_temperature: ";
    value_to_yaml(msg.transmission_oil_temperature, out);
    out << "\n";
  }

  // member: vehicle_speed_kmph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_kmph: ";
    value_to_yaml(msg.vehicle_speed_kmph, out);
    out << "\n";
  }

  // member: look_ahead_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "look_ahead_error: ";
    value_to_yaml(msg.look_ahead_error, out);
    out << "\n";
  }

  // member: lateral_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error: ";
    value_to_yaml(msg.lateral_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::Telemetry & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::Telemetry>()
{
  return "deep_orange_msgs::msg::Telemetry";
}

template<>
inline const char * name<deep_orange_msgs::msg::Telemetry>()
{
  return "deep_orange_msgs/msg/Telemetry";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::Telemetry>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::Telemetry>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::Telemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
