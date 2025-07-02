// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/LowBeamState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/low_beam_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_LowBeamState_status
{
public:
  Init_LowBeamState_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::LowBeamState status(::raptor_dbw_msgs::msg::LowBeamState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::LowBeamState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::LowBeamState>()
{
  return raptor_dbw_msgs::msg::builder::Init_LowBeamState_status();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__BUILDER_HPP_
