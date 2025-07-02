// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/MyLapsReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/my_laps_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_MyLapsReport_lon
{
public:
  explicit Init_MyLapsReport_lon(::deep_orange_msgs::msg::MyLapsReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::MyLapsReport lon(::deep_orange_msgs::msg::MyLapsReport::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::MyLapsReport msg_;
};

class Init_MyLapsReport_lat
{
public:
  explicit Init_MyLapsReport_lat(::deep_orange_msgs::msg::MyLapsReport & msg)
  : msg_(msg)
  {}
  Init_MyLapsReport_lon lat(::deep_orange_msgs::msg::MyLapsReport::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_MyLapsReport_lon(msg_);
  }

private:
  ::deep_orange_msgs::msg::MyLapsReport msg_;
};

class Init_MyLapsReport_heading
{
public:
  explicit Init_MyLapsReport_heading(::deep_orange_msgs::msg::MyLapsReport & msg)
  : msg_(msg)
  {}
  Init_MyLapsReport_lat heading(::deep_orange_msgs::msg::MyLapsReport::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MyLapsReport_lat(msg_);
  }

private:
  ::deep_orange_msgs::msg::MyLapsReport msg_;
};

class Init_MyLapsReport_speed
{
public:
  explicit Init_MyLapsReport_speed(::deep_orange_msgs::msg::MyLapsReport & msg)
  : msg_(msg)
  {}
  Init_MyLapsReport_heading speed(::deep_orange_msgs::msg::MyLapsReport::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MyLapsReport_heading(msg_);
  }

private:
  ::deep_orange_msgs::msg::MyLapsReport msg_;
};

class Init_MyLapsReport_stamp
{
public:
  Init_MyLapsReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyLapsReport_speed stamp(::deep_orange_msgs::msg::MyLapsReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MyLapsReport_speed(msg_);
  }

private:
  ::deep_orange_msgs::msg::MyLapsReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::MyLapsReport>()
{
  return deep_orange_msgs::msg::builder::Init_MyLapsReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MY_LAPS_REPORT__BUILDER_HPP_
