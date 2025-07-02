// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/tire_report__struct.hpp"
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
  const deep_orange_msgs::msg::TireReport & msg,
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

  // member: fl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fl_tire_temperature.size() == 0) {
      out << "fl_tire_temperature: []\n";
    } else {
      out << "fl_tire_temperature:\n";
      for (auto item : msg.fl_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_damper_linear_potentiometer: ";
    value_to_yaml(msg.fl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure: ";
    value_to_yaml(msg.fl_tire_pressure, out);
    out << "\n";
  }

  // member: fl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure_gauge: ";
    value_to_yaml(msg.fl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_wheel_load: ";
    value_to_yaml(msg.fl_wheel_load, out);
    out << "\n";
  }

  // member: fr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fr_tire_temperature.size() == 0) {
      out << "fr_tire_temperature: []\n";
    } else {
      out << "fr_tire_temperature:\n";
      for (auto item : msg.fr_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_damper_linear_potentiometer: ";
    value_to_yaml(msg.fr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure: ";
    value_to_yaml(msg.fr_tire_pressure, out);
    out << "\n";
  }

  // member: fr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure_gauge: ";
    value_to_yaml(msg.fr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_wheel_load: ";
    value_to_yaml(msg.fr_wheel_load, out);
    out << "\n";
  }

  // member: rl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rl_tire_temperature.size() == 0) {
      out << "rl_tire_temperature: []\n";
    } else {
      out << "rl_tire_temperature:\n";
      for (auto item : msg.rl_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_damper_linear_potentiometer: ";
    value_to_yaml(msg.rl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure: ";
    value_to_yaml(msg.rl_tire_pressure, out);
    out << "\n";
  }

  // member: rl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure_gauge: ";
    value_to_yaml(msg.rl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_wheel_load: ";
    value_to_yaml(msg.rl_wheel_load, out);
    out << "\n";
  }

  // member: rr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rr_tire_temperature.size() == 0) {
      out << "rr_tire_temperature: []\n";
    } else {
      out << "rr_tire_temperature:\n";
      for (auto item : msg.rr_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_damper_linear_potentiometer: ";
    value_to_yaml(msg.rr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure: ";
    value_to_yaml(msg.rr_tire_pressure, out);
    out << "\n";
  }

  // member: rr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure_gauge: ";
    value_to_yaml(msg.rr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_wheel_load: ";
    value_to_yaml(msg.rr_wheel_load, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::TireReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::TireReport>()
{
  return "deep_orange_msgs::msg::TireReport";
}

template<>
inline const char * name<deep_orange_msgs::msg::TireReport>()
{
  return "deep_orange_msgs/msg/TireReport";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::TireReport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::TireReport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deep_orange_msgs::msg::TireReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_
