// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/LapTimeReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/lap_time_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_LapTimeReport_time_stamp
{
public:
  explicit Init_LapTimeReport_time_stamp(::deep_orange_msgs::msg::LapTimeReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::LapTimeReport time_stamp(::deep_orange_msgs::msg::LapTimeReport::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::LapTimeReport msg_;
};

class Init_LapTimeReport_lap_time
{
public:
  explicit Init_LapTimeReport_lap_time(::deep_orange_msgs::msg::LapTimeReport & msg)
  : msg_(msg)
  {}
  Init_LapTimeReport_time_stamp lap_time(::deep_orange_msgs::msg::LapTimeReport::_lap_time_type arg)
  {
    msg_.lap_time = std::move(arg);
    return Init_LapTimeReport_time_stamp(msg_);
  }

private:
  ::deep_orange_msgs::msg::LapTimeReport msg_;
};

class Init_LapTimeReport_laps
{
public:
  explicit Init_LapTimeReport_laps(::deep_orange_msgs::msg::LapTimeReport & msg)
  : msg_(msg)
  {}
  Init_LapTimeReport_lap_time laps(::deep_orange_msgs::msg::LapTimeReport::_laps_type arg)
  {
    msg_.laps = std::move(arg);
    return Init_LapTimeReport_lap_time(msg_);
  }

private:
  ::deep_orange_msgs::msg::LapTimeReport msg_;
};

class Init_LapTimeReport_stamp
{
public:
  Init_LapTimeReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LapTimeReport_laps stamp(::deep_orange_msgs::msg::LapTimeReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LapTimeReport_laps(msg_);
  }

private:
  ::deep_orange_msgs::msg::LapTimeReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::LapTimeReport>()
{
  return deep_orange_msgs::msg::builder::Init_LapTimeReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__BUILDER_HPP_
