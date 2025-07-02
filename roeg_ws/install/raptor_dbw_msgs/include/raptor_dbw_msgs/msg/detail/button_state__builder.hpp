// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/button_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_ButtonState_value
{
public:
  Init_ButtonState_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::ButtonState value(::raptor_dbw_msgs::msg::ButtonState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ButtonState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::ButtonState>()
{
  return raptor_dbw_msgs::msg::builder::Init_ButtonState_value();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_
