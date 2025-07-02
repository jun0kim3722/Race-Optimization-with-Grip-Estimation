// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/BrakeTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/brake_temp_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeTempReport_rr_brake_temp
{
public:
  explicit Init_BrakeTempReport_rr_brake_temp(::deep_orange_msgs::msg::BrakeTempReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::BrakeTempReport rr_brake_temp(::deep_orange_msgs::msg::BrakeTempReport::_rr_brake_temp_type arg)
  {
    msg_.rr_brake_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::BrakeTempReport msg_;
};

class Init_BrakeTempReport_rl_brake_temp
{
public:
  explicit Init_BrakeTempReport_rl_brake_temp(::deep_orange_msgs::msg::BrakeTempReport & msg)
  : msg_(msg)
  {}
  Init_BrakeTempReport_rr_brake_temp rl_brake_temp(::deep_orange_msgs::msg::BrakeTempReport::_rl_brake_temp_type arg)
  {
    msg_.rl_brake_temp = std::move(arg);
    return Init_BrakeTempReport_rr_brake_temp(msg_);
  }

private:
  ::deep_orange_msgs::msg::BrakeTempReport msg_;
};

class Init_BrakeTempReport_fr_brake_temp
{
public:
  explicit Init_BrakeTempReport_fr_brake_temp(::deep_orange_msgs::msg::BrakeTempReport & msg)
  : msg_(msg)
  {}
  Init_BrakeTempReport_rl_brake_temp fr_brake_temp(::deep_orange_msgs::msg::BrakeTempReport::_fr_brake_temp_type arg)
  {
    msg_.fr_brake_temp = std::move(arg);
    return Init_BrakeTempReport_rl_brake_temp(msg_);
  }

private:
  ::deep_orange_msgs::msg::BrakeTempReport msg_;
};

class Init_BrakeTempReport_fl_brake_temp
{
public:
  explicit Init_BrakeTempReport_fl_brake_temp(::deep_orange_msgs::msg::BrakeTempReport & msg)
  : msg_(msg)
  {}
  Init_BrakeTempReport_fr_brake_temp fl_brake_temp(::deep_orange_msgs::msg::BrakeTempReport::_fl_brake_temp_type arg)
  {
    msg_.fl_brake_temp = std::move(arg);
    return Init_BrakeTempReport_fr_brake_temp(msg_);
  }

private:
  ::deep_orange_msgs::msg::BrakeTempReport msg_;
};

class Init_BrakeTempReport_stamp
{
public:
  Init_BrakeTempReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeTempReport_fl_brake_temp stamp(::deep_orange_msgs::msg::BrakeTempReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BrakeTempReport_fl_brake_temp(msg_);
  }

private:
  ::deep_orange_msgs::msg::BrakeTempReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::BrakeTempReport>()
{
  return deep_orange_msgs::msg::builder::Init_BrakeTempReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__BUILDER_HPP_
