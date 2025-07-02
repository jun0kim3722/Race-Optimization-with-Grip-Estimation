// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/DoorLock.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/door_lock__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorLock_value
{
public:
  Init_DoorLock_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raptor_dbw_msgs::msg::DoorLock value(::raptor_dbw_msgs::msg::DoorLock::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::DoorLock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::DoorLock>()
{
  return raptor_dbw_msgs::msg::builder::Init_DoorLock_value();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__BUILDER_HPP_
