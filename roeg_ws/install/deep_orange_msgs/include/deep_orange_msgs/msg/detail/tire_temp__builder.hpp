// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/tire_temp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_TireTemp_max
{
public:
  explicit Init_TireTemp_max(::deep_orange_msgs::msg::TireTemp & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::TireTemp max(::deep_orange_msgs::msg::TireTemp::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTemp msg_;
};

class Init_TireTemp_min
{
public:
  explicit Init_TireTemp_min(::deep_orange_msgs::msg::TireTemp & msg)
  : msg_(msg)
  {}
  Init_TireTemp_max min(::deep_orange_msgs::msg::TireTemp::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_TireTemp_max(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTemp msg_;
};

class Init_TireTemp_mean
{
public:
  explicit Init_TireTemp_mean(::deep_orange_msgs::msg::TireTemp & msg)
  : msg_(msg)
  {}
  Init_TireTemp_min mean(::deep_orange_msgs::msg::TireTemp::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_TireTemp_min(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTemp msg_;
};

class Init_TireTemp_median
{
public:
  Init_TireTemp_median()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireTemp_mean median(::deep_orange_msgs::msg::TireTemp::_median_type arg)
  {
    msg_.median = std::move(arg);
    return Init_TireTemp_mean(msg_);
  }

private:
  ::deep_orange_msgs::msg::TireTemp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::TireTemp>()
{
  return deep_orange_msgs::msg::builder::Init_TireTemp_median();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__BUILDER_HPP_
