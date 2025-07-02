// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_pdu_msgs:msg/RelayCommand.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__BUILDER_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__BUILDER_HPP_

#include "raptor_pdu_msgs/msg/detail/relay_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_pdu_msgs
{

namespace msg
{

namespace builder
{

class Init_RelayCommand_relay_8
{
public:
  explicit Init_RelayCommand_relay_8(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  ::raptor_pdu_msgs::msg::RelayCommand relay_8(::raptor_pdu_msgs::msg::RelayCommand::_relay_8_type arg)
  {
    msg_.relay_8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_7
{
public:
  explicit Init_RelayCommand_relay_7(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_8 relay_7(::raptor_pdu_msgs::msg::RelayCommand::_relay_7_type arg)
  {
    msg_.relay_7 = std::move(arg);
    return Init_RelayCommand_relay_8(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_6
{
public:
  explicit Init_RelayCommand_relay_6(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_7 relay_6(::raptor_pdu_msgs::msg::RelayCommand::_relay_6_type arg)
  {
    msg_.relay_6 = std::move(arg);
    return Init_RelayCommand_relay_7(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_5
{
public:
  explicit Init_RelayCommand_relay_5(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_6 relay_5(::raptor_pdu_msgs::msg::RelayCommand::_relay_5_type arg)
  {
    msg_.relay_5 = std::move(arg);
    return Init_RelayCommand_relay_6(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_4
{
public:
  explicit Init_RelayCommand_relay_4(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_5 relay_4(::raptor_pdu_msgs::msg::RelayCommand::_relay_4_type arg)
  {
    msg_.relay_4 = std::move(arg);
    return Init_RelayCommand_relay_5(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_3
{
public:
  explicit Init_RelayCommand_relay_3(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_4 relay_3(::raptor_pdu_msgs::msg::RelayCommand::_relay_3_type arg)
  {
    msg_.relay_3 = std::move(arg);
    return Init_RelayCommand_relay_4(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_2
{
public:
  explicit Init_RelayCommand_relay_2(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_3 relay_2(::raptor_pdu_msgs::msg::RelayCommand::_relay_2_type arg)
  {
    msg_.relay_2 = std::move(arg);
    return Init_RelayCommand_relay_3(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_relay_1
{
public:
  explicit Init_RelayCommand_relay_1(::raptor_pdu_msgs::msg::RelayCommand & msg)
  : msg_(msg)
  {}
  Init_RelayCommand_relay_2 relay_1(::raptor_pdu_msgs::msg::RelayCommand::_relay_1_type arg)
  {
    msg_.relay_1 = std::move(arg);
    return Init_RelayCommand_relay_2(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

class Init_RelayCommand_header
{
public:
  Init_RelayCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayCommand_relay_1 header(::raptor_pdu_msgs::msg::RelayCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelayCommand_relay_1(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_pdu_msgs::msg::RelayCommand>()
{
  return raptor_pdu_msgs::msg::builder::Init_RelayCommand_header();
}

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__BUILDER_HPP_
