// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_pdu_msgs:msg/FuseStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__BUILDER_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__BUILDER_HPP_

#include "raptor_pdu_msgs/msg/detail/fuse_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_pdu_msgs
{

namespace msg
{

namespace builder
{

class Init_FuseStatus_value
{
public:
  explicit Init_FuseStatus_value(::raptor_pdu_msgs::msg::FuseStatus & msg)
  : msg_(msg)
  {}
  ::raptor_pdu_msgs::msg::FuseStatus value(::raptor_pdu_msgs::msg::FuseStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::FuseStatus msg_;
};

class Init_FuseStatus_header
{
public:
  Init_FuseStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FuseStatus_value header(::raptor_pdu_msgs::msg::FuseStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FuseStatus_value(msg_);
  }

private:
  ::raptor_pdu_msgs::msg::FuseStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_pdu_msgs::msg::FuseStatus>()
{
  return raptor_pdu_msgs::msg::builder::Init_FuseStatus_header();
}

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_STATUS__BUILDER_HPP_
