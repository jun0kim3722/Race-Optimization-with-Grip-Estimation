// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__TRAITS_HPP_

#include "raptor_dbw_msgs/msg/detail/other_actuators_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ignition_state'
#include "raptor_dbw_msgs/msg/detail/ignition__traits.hpp"
// Member 'horn_state'
#include "raptor_dbw_msgs/msg/detail/horn_state__traits.hpp"
// Member 'turn_signal_state'
#include "raptor_dbw_msgs/msg/detail/turn_signal__traits.hpp"
// Member 'high_beam_state'
#include "raptor_dbw_msgs/msg/detail/high_beam_state__traits.hpp"
// Member 'low_beam_state'
#include "raptor_dbw_msgs/msg/detail/low_beam_state__traits.hpp"
// Member 'front_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_front__traits.hpp"
// Member 'rear_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__traits.hpp"
// Member 'right_rear_door_state'
// Member 'left_rear_door_state'
// Member 'liftgate_door_state'
#include "raptor_dbw_msgs/msg/detail/door_state__traits.hpp"
// Member 'door_lock_state'
#include "raptor_dbw_msgs/msg/detail/door_lock__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_dbw_msgs::msg::OtherActuatorsReport & msg,
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

  // member: ignition_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition_state:\n";
    to_yaml(msg.ignition_state, out, indentation + 2);
  }

  // member: horn_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn_state:\n";
    to_yaml(msg.horn_state, out, indentation + 2);
  }

  // member: turn_signal_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal_state:\n";
    to_yaml(msg.turn_signal_state, out, indentation + 2);
  }

  // member: turn_signal_sync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal_sync: ";
    value_to_yaml(msg.turn_signal_sync, out);
    out << "\n";
  }

  // member: high_beam_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam_state:\n";
    to_yaml(msg.high_beam_state, out, indentation + 2);
  }

  // member: low_beam_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam_state:\n";
    to_yaml(msg.low_beam_state, out, indentation + 2);
  }

  // member: front_wiper_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wiper_state:\n";
    to_yaml(msg.front_wiper_state, out, indentation + 2);
  }

  // member: rear_wiper_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wiper_state:\n";
    to_yaml(msg.rear_wiper_state, out, indentation + 2);
  }

  // member: right_rear_door_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rear_door_state:\n";
    to_yaml(msg.right_rear_door_state, out, indentation + 2);
  }

  // member: left_rear_door_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rear_door_state:\n";
    to_yaml(msg.left_rear_door_state, out, indentation + 2);
  }

  // member: liftgate_door_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "liftgate_door_state:\n";
    to_yaml(msg.liftgate_door_state, out, indentation + 2);
  }

  // member: door_lock_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_lock_state:\n";
    to_yaml(msg.door_lock_state, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_dbw_msgs::msg::OtherActuatorsReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::OtherActuatorsReport>()
{
  return "raptor_dbw_msgs::msg::OtherActuatorsReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::OtherActuatorsReport>()
{
  return "raptor_dbw_msgs/msg/OtherActuatorsReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::OtherActuatorsReport>
  : std::integral_constant<bool, has_fixed_size<raptor_dbw_msgs::msg::DoorLock>::value && has_fixed_size<raptor_dbw_msgs::msg::DoorState>::value && has_fixed_size<raptor_dbw_msgs::msg::HighBeamState>::value && has_fixed_size<raptor_dbw_msgs::msg::HornState>::value && has_fixed_size<raptor_dbw_msgs::msg::Ignition>::value && has_fixed_size<raptor_dbw_msgs::msg::LowBeamState>::value && has_fixed_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_fixed_size<raptor_dbw_msgs::msg::WiperFront>::value && has_fixed_size<raptor_dbw_msgs::msg::WiperRear>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::OtherActuatorsReport>
  : std::integral_constant<bool, has_bounded_size<raptor_dbw_msgs::msg::DoorLock>::value && has_bounded_size<raptor_dbw_msgs::msg::DoorState>::value && has_bounded_size<raptor_dbw_msgs::msg::HighBeamState>::value && has_bounded_size<raptor_dbw_msgs::msg::HornState>::value && has_bounded_size<raptor_dbw_msgs::msg::Ignition>::value && has_bounded_size<raptor_dbw_msgs::msg::LowBeamState>::value && has_bounded_size<raptor_dbw_msgs::msg::TurnSignal>::value && has_bounded_size<raptor_dbw_msgs::msg::WiperFront>::value && has_bounded_size<raptor_dbw_msgs::msg::WiperRear>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::OtherActuatorsReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__TRAITS_HPP_
