// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/joystick_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_JoystickCommand_joystick_healthy
{
public:
  explicit Init_JoystickCommand_joystick_healthy(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::JoystickCommand joystick_healthy(::deep_orange_msgs::msg::JoystickCommand::_joystick_healthy_type arg)
  {
    msg_.joystick_healthy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_gear_cmd
{
public:
  explicit Init_JoystickCommand_gear_cmd(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_joystick_healthy gear_cmd(::deep_orange_msgs::msg::JoystickCommand::_gear_cmd_type arg)
  {
    msg_.gear_cmd = std::move(arg);
    return Init_JoystickCommand_joystick_healthy(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_accelerator_cmd
{
public:
  explicit Init_JoystickCommand_accelerator_cmd(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_gear_cmd accelerator_cmd(::deep_orange_msgs::msg::JoystickCommand::_accelerator_cmd_type arg)
  {
    msg_.accelerator_cmd = std::move(arg);
    return Init_JoystickCommand_gear_cmd(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_brake_cmd
{
public:
  explicit Init_JoystickCommand_brake_cmd(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_accelerator_cmd brake_cmd(::deep_orange_msgs::msg::JoystickCommand::_brake_cmd_type arg)
  {
    msg_.brake_cmd = std::move(arg);
    return Init_JoystickCommand_accelerator_cmd(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_steering_cmd
{
public:
  explicit Init_JoystickCommand_steering_cmd(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_brake_cmd steering_cmd(::deep_orange_msgs::msg::JoystickCommand::_steering_cmd_type arg)
  {
    msg_.steering_cmd = std::move(arg);
    return Init_JoystickCommand_brake_cmd(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_joy_enable
{
public:
  explicit Init_JoystickCommand_joy_enable(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_steering_cmd joy_enable(::deep_orange_msgs::msg::JoystickCommand::_joy_enable_type arg)
  {
    msg_.joy_enable = std::move(arg);
    return Init_JoystickCommand_steering_cmd(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_coordinated_stop
{
public:
  explicit Init_JoystickCommand_coordinated_stop(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_joy_enable coordinated_stop(::deep_orange_msgs::msg::JoystickCommand::_coordinated_stop_type arg)
  {
    msg_.coordinated_stop = std::move(arg);
    return Init_JoystickCommand_joy_enable(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_emergency_stop
{
public:
  explicit Init_JoystickCommand_emergency_stop(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_coordinated_stop emergency_stop(::deep_orange_msgs::msg::JoystickCommand::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_JoystickCommand_coordinated_stop(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_counter
{
public:
  explicit Init_JoystickCommand_counter(::deep_orange_msgs::msg::JoystickCommand & msg)
  : msg_(msg)
  {}
  Init_JoystickCommand_emergency_stop counter(::deep_orange_msgs::msg::JoystickCommand::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_JoystickCommand_emergency_stop(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

class Init_JoystickCommand_stamp
{
public:
  Init_JoystickCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickCommand_counter stamp(::deep_orange_msgs::msg::JoystickCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_JoystickCommand_counter(msg_);
  }

private:
  ::deep_orange_msgs::msg::JoystickCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::JoystickCommand>()
{
  return deep_orange_msgs::msg::builder::Init_JoystickCommand_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__BUILDER_HPP_
