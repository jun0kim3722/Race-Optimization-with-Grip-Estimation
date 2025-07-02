// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/gear_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_GearReport_gear_mismatch_flash
{
public:
  explicit Init_GearReport_gear_mismatch_flash(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::GearReport gear_mismatch_flash(::raptor_dbw_msgs::msg::GearReport::_gear_mismatch_flash_type arg)
  {
    msg_.gear_mismatch_flash = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_gear_select_system_fault
{
public:
  explicit Init_GearReport_gear_select_system_fault(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_gear_mismatch_flash gear_select_system_fault(::raptor_dbw_msgs::msg::GearReport::_gear_select_system_fault_type arg)
  {
    msg_.gear_select_system_fault = std::move(arg);
    return Init_GearReport_gear_mismatch_flash(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_trans_curr_gear
{
public:
  explicit Init_GearReport_trans_curr_gear(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_gear_select_system_fault trans_curr_gear(::raptor_dbw_msgs::msg::GearReport::_trans_curr_gear_type arg)
  {
    msg_.trans_curr_gear = std::move(arg);
    return Init_GearReport_gear_select_system_fault(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_enabled
{
public:
  explicit Init_GearReport_enabled(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_trans_curr_gear enabled(::raptor_dbw_msgs::msg::GearReport::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_GearReport_trans_curr_gear(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_driver_activity
{
public:
  explicit Init_GearReport_driver_activity(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_enabled driver_activity(::raptor_dbw_msgs::msg::GearReport::_driver_activity_type arg)
  {
    msg_.driver_activity = std::move(arg);
    return Init_GearReport_enabled(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_reject
{
public:
  explicit Init_GearReport_reject(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_driver_activity reject(::raptor_dbw_msgs::msg::GearReport::_reject_type arg)
  {
    msg_.reject = std::move(arg);
    return Init_GearReport_driver_activity(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_state
{
public:
  explicit Init_GearReport_state(::raptor_dbw_msgs::msg::GearReport & msg)
  : msg_(msg)
  {}
  Init_GearReport_reject state(::raptor_dbw_msgs::msg::GearReport::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GearReport_reject(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

class Init_GearReport_header
{
public:
  Init_GearReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearReport_state header(::raptor_dbw_msgs::msg::GearReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GearReport_state(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GearReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::GearReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_GearReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__BUILDER_HPP_
