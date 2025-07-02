// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_pdu_msgs:msg/RelayStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__BUILDER_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__BUILDER_HPP_

#include "raptor_pdu_msgs/msg/detail/relay_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_pdu_msgs
{

namespace msg
{

namespace builder
{

class Init_RelayStatus_value
{
public:
  explicit Init_RelayStatus_value(::raptor_pdu_msgs::msg::RelayStatus & msg)
  : msg_(msg)
  {}
  ::raptor_pdu_msgs::msg::RelayStatus value(::raptor_pdu_msgs::msg::RelayStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayStatus msg_;
};

class Init_RelayStatus_header
{
public:
  Init_RelayStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayStatus_value header(::raptor_pdu_msgs::msg::RelayStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelayStatus_value(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::RelayStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_pdu_msgs::msg::RelayStatus>()
{
  return raptor_pdu_msgs::msg::builder::Init_RelayStatus_header();
}

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__BUILDER_HPP_
