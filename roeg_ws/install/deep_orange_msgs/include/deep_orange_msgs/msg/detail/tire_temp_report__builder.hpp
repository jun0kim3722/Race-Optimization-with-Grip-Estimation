// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/tire_temp_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_TireTempReport_rear_right
{
public:
  explicit Init_TireTempReport_rear_right(::deep_orange_msgs::msg::TireTempReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::TireTempReport rear_right(::deep_orange_msgs::msg::TireTempReport::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTempReport msg_;
};

class Init_TireTempReport_rear_left
{
public:
  explicit Init_TireTempReport_rear_left(::deep_orange_msgs::msg::TireTempReport & msg)
  : msg_(msg)
  {}
  Init_TireTempReport_rear_right rear_left(::deep_orange_msgs::msg::TireTempReport::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_TireTempReport_rear_right(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTempReport msg_;
};

class Init_TireTempReport_front_right
{
public:
  explicit Init_TireTempReport_front_right(::deep_orange_msgs::msg::TireTempReport & msg)
  : msg_(msg)
  {}
  Init_TireTempReport_rear_left front_right(::deep_orange_msgs::msg::TireTempReport::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_TireTempReport_rear_left(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTempReport msg_;
};

class Init_TireTempReport_front_left
{
public:
  explicit Init_TireTempReport_front_left(::deep_orange_msgs::msg::TireTempReport & msg)
  : msg_(msg)
  {}
  Init_TireTempReport_front_right front_left(::deep_orange_msgs::msg::TireTempReport::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_TireTempReport_front_right(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTempReport msg_;
};

class Init_TireTempReport_header
{
public:
  Init_TireTempReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireTempReport_front_left header(::deep_orange_msgs::msg::TireTempReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TireTempReport_front_left(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTempReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::TireTempReport>()
{
  return deep_orange_msgs::msg::builder::Init_TireTempReport_header();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__BUILDER_HPP_
