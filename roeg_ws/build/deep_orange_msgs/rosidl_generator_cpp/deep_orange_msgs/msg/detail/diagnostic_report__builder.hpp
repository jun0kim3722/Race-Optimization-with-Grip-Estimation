// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/diagnostic_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticReport_rc_lost
{
public:
  explicit Init_DiagnosticReport_rc_lost(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::DiagnosticReport rc_lost(::deep_orange_msgs::msg::DiagnosticReport::_rc_lost_type arg)
  {
    msg_.rc_lost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_adlink_hb_lost
{
public:
  explicit Init_DiagnosticReport_adlink_hb_lost(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_rc_lost adlink_hb_lost(::deep_orange_msgs::msg::DiagnosticReport::_adlink_hb_lost_type arg)
  {
    msg_.adlink_hb_lost = std::move(arg);
    return Init_DiagnosticReport_rc_lost(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est6_sd_ebrake
{
public:
  explicit Init_DiagnosticReport_est6_sd_ebrake(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_adlink_hb_lost est6_sd_ebrake(::deep_orange_msgs::msg::DiagnosticReport::_est6_sd_ebrake_type arg)
  {
    msg_.est6_sd_ebrake = std::move(arg);
    return Init_DiagnosticReport_adlink_hb_lost(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est5_motec_comms_loss
{
public:
  explicit Init_DiagnosticReport_est5_motec_comms_loss(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est6_sd_ebrake est5_motec_comms_loss(::deep_orange_msgs::msg::DiagnosticReport::_est5_motec_comms_loss_type arg)
  {
    msg_.est5_motec_comms_loss = std::move(arg);
    return Init_DiagnosticReport_est6_sd_ebrake(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est4_sd_comms_loss
{
public:
  explicit Init_DiagnosticReport_est4_sd_comms_loss(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est5_motec_comms_loss est4_sd_comms_loss(::deep_orange_msgs::msg::DiagnosticReport::_est4_sd_comms_loss_type arg)
  {
    msg_.est4_sd_comms_loss = std::move(arg);
    return Init_DiagnosticReport_est5_motec_comms_loss(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est3_low_eng_speed
{
public:
  explicit Init_DiagnosticReport_est3_low_eng_speed(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est4_sd_comms_loss est3_low_eng_speed(::deep_orange_msgs::msg::DiagnosticReport::_est3_low_eng_speed_type arg)
  {
    msg_.est3_low_eng_speed = std::move(arg);
    return Init_DiagnosticReport_est4_sd_comms_loss(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est2_oos_rear_brk
{
public:
  explicit Init_DiagnosticReport_est2_oos_rear_brk(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est3_low_eng_speed est2_oos_rear_brk(::deep_orange_msgs::msg::DiagnosticReport::_est2_oos_rear_brk_type arg)
  {
    msg_.est2_oos_rear_brk = std::move(arg);
    return Init_DiagnosticReport_est3_low_eng_speed(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_est1_oos_front_brk
{
public:
  explicit Init_DiagnosticReport_est1_oos_front_brk(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est2_oos_rear_brk est1_oos_front_brk(::deep_orange_msgs::msg::DiagnosticReport::_est1_oos_front_brk_type arg)
  {
    msg_.est1_oos_front_brk = std::move(arg);
    return Init_DiagnosticReport_est2_oos_rear_brk(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning3
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning3(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_est1_oos_front_brk sd_steer_warning3(::deep_orange_msgs::msg::DiagnosticReport::_sd_steer_warning3_type arg)
  {
    msg_.sd_steer_warning3 = std::move(arg);
    return Init_DiagnosticReport_est1_oos_front_brk(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning2
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning2(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning3 sd_steer_warning2(::deep_orange_msgs::msg::DiagnosticReport::_sd_steer_warning2_type arg)
  {
    msg_.sd_steer_warning2 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning3(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_steer_warning1
{
public:
  explicit Init_DiagnosticReport_sd_steer_warning1(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning2 sd_steer_warning1(::deep_orange_msgs::msg::DiagnosticReport::_sd_steer_warning1_type arg)
  {
    msg_.sd_steer_warning1 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning2(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning3
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning3(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_steer_warning1 sd_brake_warning3(::deep_orange_msgs::msg::DiagnosticReport::_sd_brake_warning3_type arg)
  {
    msg_.sd_brake_warning3 = std::move(arg);
    return Init_DiagnosticReport_sd_steer_warning1(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning2
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning2(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning3 sd_brake_warning2(::deep_orange_msgs::msg::DiagnosticReport::_sd_brake_warning2_type arg)
  {
    msg_.sd_brake_warning2 = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning3(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_brake_warning1
{
public:
  explicit Init_DiagnosticReport_sd_brake_warning1(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning2 sd_brake_warning1(::deep_orange_msgs::msg::DiagnosticReport::_sd_brake_warning1_type arg)
  {
    msg_.sd_brake_warning1 = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning2(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_motec_warning
{
public:
  explicit Init_DiagnosticReport_motec_warning(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_brake_warning1 motec_warning(::deep_orange_msgs::msg::DiagnosticReport::_motec_warning_type arg)
  {
    msg_.motec_warning = std::move(arg);
    return Init_DiagnosticReport_sd_brake_warning1(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_system_failure
{
public:
  explicit Init_DiagnosticReport_sd_system_failure(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_motec_warning sd_system_failure(::deep_orange_msgs::msg::DiagnosticReport::_sd_system_failure_type arg)
  {
    msg_.sd_system_failure = std::move(arg);
    return Init_DiagnosticReport_motec_warning(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_sd_system_warning
{
public:
  explicit Init_DiagnosticReport_sd_system_warning(::deep_orange_msgs::msg::DiagnosticReport & msg)
  : msg_(msg)
  {}
  Init_DiagnosticReport_sd_system_failure sd_system_warning(::deep_orange_msgs::msg::DiagnosticReport::_sd_system_warning_type arg)
  {
    msg_.sd_system_warning = std::move(arg);
    return Init_DiagnosticReport_sd_system_failure(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

class Init_DiagnosticReport_stamp
{
public:
  Init_DiagnosticReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticReport_sd_system_warning stamp(::deep_orange_msgs::msg::DiagnosticReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DiagnosticReport_sd_system_warning(msg_);
  }

private:
  ::deep_orange_msgs::msg::DiagnosticReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::DiagnosticReport>()
{
  return deep_orange_msgs::msg::builder::Init_DiagnosticReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__BUILDER_HPP_
