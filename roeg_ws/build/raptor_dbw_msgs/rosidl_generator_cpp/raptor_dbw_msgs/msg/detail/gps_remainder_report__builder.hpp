// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/GpsRemainderReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REMAINDER_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REMAINDER_REPORT__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/gps_remainder_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsRemainderReport_rem_longitude
{
public:
  explicit Init_GpsRemainderReport_rem_longitude(::raptor_dbw_msgs::msg::GpsRemainderReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::GpsRemainderReport rem_longitude(::raptor_dbw_msgs::msg::GpsRemainderReport::_rem_longitude_type arg)
  {
    msg_.rem_longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsRemainderReport msg_;
};

class Init_GpsRemainderReport_rem_latitude
{
public:
  explicit Init_GpsRemainderReport_rem_latitude(::raptor_dbw_msgs::msg::GpsRemainderReport & msg)
  : msg_(msg)
  {}
  Init_GpsRemainderReport_rem_longitude rem_latitude(::raptor_dbw_msgs::msg::GpsRemainderReport::_rem_latitude_type arg)
  {
    msg_.rem_latitude = std::move(arg);
    return Init_GpsRemainderReport_rem_longitude(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsRemainderReport msg_;
};

class Init_GpsRemainderReport_header
{
public:
  Init_GpsRemainderReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsRemainderReport_rem_latitude header(::raptor_dbw_msgs::msg::GpsRemainderReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GpsRemainderReport_rem_latitude(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsRemainderReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::GpsRemainderReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_GpsRemainderReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REMAINDER_REPORT__BUILDER_HPP_
