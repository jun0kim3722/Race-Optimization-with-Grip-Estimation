// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/exit_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_ExitReport_auton_counter
{
public:
  explicit Init_ExitReport_auton_counter(::raptor_dbw_msgs::msg::ExitReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::ExitReport auton_counter(::raptor_dbw_msgs::msg::ExitReport::_auton_counter_type arg)
  {
    msg_.auton_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

class Init_ExitReport_idx_auton_disable_apply_brakes
{
public:
  explicit Init_ExitReport_idx_auton_disable_apply_brakes(::raptor_dbw_msgs::msg::ExitReport & msg)
  : msg_(msg)
  {}
  Init_ExitReport_auton_counter idx_auton_disable_apply_brakes(::raptor_dbw_msgs::msg::ExitReport::_idx_auton_disable_apply_brakes_type arg)
  {
    msg_.idx_auton_disable_apply_brakes = std::move(arg);
    return Init_ExitReport_auton_counter(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

class Init_ExitReport_idx_auton_disable_no_brakes
{
public:
  explicit Init_ExitReport_idx_auton_disable_no_brakes(::raptor_dbw_msgs::msg::ExitReport & msg)
  : msg_(msg)
  {}
  Init_ExitReport_idx_auton_disable_apply_brakes idx_auton_disable_no_brakes(::raptor_dbw_msgs::msg::ExitReport::_idx_auton_disable_no_brakes_type arg)
  {
    msg_.idx_auton_disable_no_brakes = std::move(arg);
    return Init_ExitReport_idx_auton_disable_apply_brakes(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

class Init_ExitReport_driver_in_control
{
public:
  explicit Init_ExitReport_driver_in_control(::raptor_dbw_msgs::msg::ExitReport & msg)
  : msg_(msg)
  {}
  Init_ExitReport_idx_auton_disable_no_brakes driver_in_control(::raptor_dbw_msgs::msg::ExitReport::_driver_in_control_type arg)
  {
    msg_.driver_in_control = std::move(arg);
    return Init_ExitReport_idx_auton_disable_no_brakes(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

class Init_ExitReport_akit_disable
{
public:
  explicit Init_ExitReport_akit_disable(::raptor_dbw_msgs::msg::ExitReport & msg)
  : msg_(msg)
  {}
  Init_ExitReport_driver_in_control akit_disable(::raptor_dbw_msgs::msg::ExitReport::_akit_disable_type arg)
  {
    msg_.akit_disable = std::move(arg);
    return Init_ExitReport_driver_in_control(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

class Init_ExitReport_header
{
public:
  Init_ExitReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExitReport_akit_disable header(::raptor_dbw_msgs::msg::ExitReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExitReport_akit_disable(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::ExitReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::ExitReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_ExitReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__BUILDER_HPP_
