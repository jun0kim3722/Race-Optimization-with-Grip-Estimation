// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_pdu_msgs:msg/RelayState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__BUILDER_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__BUILDER_HPP_

#include "raptor_pdu_msgs/msg/detail/relay_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_pdu_msgs
{

namespace msg
{

namespace builder
{

class Init_RelayState_value
{
public:
  explicit Init_RelayState_value(::raptor_pdu_msgs::msg::RelayState & msg)
  : msg_(msg)
  {}
  ::raptor_pdu_msgs::msg::RelayState value(::raptor_pdu_msgs::msg::RelayState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayState msg_;
};

class Init_RelayState_header
{
public:
  Init_RelayState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayState_value header(::raptor_pdu_msgs::msg::RelayState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelayState_value(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_pdu_msgs::msg::RelayState>()
{
  return raptor_pdu_msgs::msg::builder::Init_RelayState_header();
}

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__BUILDER_HPP_
