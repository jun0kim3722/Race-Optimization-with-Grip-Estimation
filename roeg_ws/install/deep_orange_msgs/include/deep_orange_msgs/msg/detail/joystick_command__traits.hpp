// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__TRAITS_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__TRAITS_HPP_

#include "deep_orange_msgs/msg/detail/joystick_command__struct.hpp"
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
  const deep_orange_msgs::msg::JoystickCommand & msg,
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

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: coordinated_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinated_stop: ";
    value_to_yaml(msg.coordinated_stop, out);
    out << "\n";
  }

  // member: joy_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joy_enable: ";
    value_to_yaml(msg.joy_enable, out);
    out << "\n";
  }

  // member: steering_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_cmd: ";
    value_to_yaml(msg.steering_cmd, out);
    out << "\n";
  }

  // member: brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd: ";
    value_to_yaml(msg.brake_cmd, out);
    out << "\n";
  }

  // member: accelerator_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerator_cmd: ";
    value_to_yaml(msg.accelerator_cmd, out);
    out << "\n";
  }

  // member: gear_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_cmd: ";
    value_to_yaml(msg.gear_cmd, out);
    out << "\n";
  }

  // member: joystick_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_healthy: ";
    value_to_yaml(msg.joystick_healthy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const deep_orange_msgs::msg::JoystickCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<deep_orange_msgs::msg::JoystickCommand>()
{
  return "deep_orange_msgs::msg::JoystickCommand";
}

template<>
inline const char * name<deep_orange_msgs::msg::JoystickCommand>()
{
  return "deep_orange_msgs/msg/JoystickCommand";
}

template<>
struct has_fixed_size<deep_orange_msgs::msg::JoystickCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<deep_orange_msgs::msg::JoystickCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<deep_orange_msgs::msg::JoystickCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__TRAITS_HPP_
