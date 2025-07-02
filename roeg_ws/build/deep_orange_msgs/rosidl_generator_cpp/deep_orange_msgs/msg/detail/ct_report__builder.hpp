// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/ct_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_CtReport_veh_num
{
public:
  explicit Init_CtReport_veh_num(::deep_orange_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::CtReport veh_num(::deep_orange_msgs::msg::CtReport::_veh_num_type arg)
  {
    msg_.veh_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

class Init_CtReport_rolling_counter
{
public:
  explicit Init_CtReport_rolling_counter(::deep_orange_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_veh_num rolling_counter(::deep_orange_msgs::msg::CtReport::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_CtReport_veh_num(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

class Init_CtReport_ct_state
{
public:
  explicit Init_CtReport_ct_state(::deep_orange_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_rolling_counter ct_state(::deep_orange_msgs::msg::CtReport::_ct_state_type arg)
  {
    msg_.ct_state = std::move(arg);
    return Init_CtReport_rolling_counter(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

class Init_CtReport_veh_sig_ack
{
public:
  explicit Init_CtReport_veh_sig_ack(::deep_orange_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_ct_state veh_sig_ack(::deep_orange_msgs::msg::CtReport::_veh_sig_ack_type arg)
  {
    msg_.veh_sig_ack = std::move(arg);
    return Init_CtReport_ct_state(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

class Init_CtReport_track_cond_ack
{
public:
  explicit Init_CtReport_track_cond_ack(::deep_orange_msgs::msg::CtReport & msg)
  : msg_(msg)
  {}
  Init_CtReport_veh_sig_ack track_cond_ack(::deep_orange_msgs::msg::CtReport::_track_cond_ack_type arg)
  {
    msg_.track_cond_ack = std::move(arg);
    return Init_CtReport_veh_sig_ack(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

class Init_CtReport_stamp
{
public:
  Init_CtReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtReport_track_cond_ack stamp(::deep_orange_msgs::msg::CtReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CtReport_track_cond_ack(msg_);
  }

private:
  ::deep_orange_msgs::msg::CtReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::CtReport>()
{
  return deep_orange_msgs::msg::builder::Init_CtReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__CT_REPORT__BUILDER_HPP_
