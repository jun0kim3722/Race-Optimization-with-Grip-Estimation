// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/pt_report__struct.hpp"
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
  const deep_orange_msgs::msg::PtReport & msg,
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

  // member: torque_wheels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_wheels: ";
    value_to_yaml(msg.torque_wheels, out);
    out << "\n";
  }

  // member: driver_traction_aim_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_traction_aim_switch: ";
    value_to_yaml(msg.driver_traction_aim_switch, out);
    out << "\n";
  }

  // member: driver_traction_range_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_traction_range_switch: ";
    value_to_yaml(msg.driver_traction_range_switch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::PtReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::PtReport>()
{
  return "deep_orange_msgs::msg::PtReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::PtReport>()
{
  return "deep_orange_msgs/msg/PtReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::PtReport>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::PtReport>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::PtReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__TRAITS_HPP_
