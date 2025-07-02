// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raptor_dbw_msgs:msg/GpsReferenceReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__BUILDER_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__BUILDER_HPP_

#include "raptor_dbw_msgs/msg/detail/gps_reference_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace raptor_dbw_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsReferenceReport_ref_heading
{
public:
  explicit Init_GpsReferenceReport_ref_heading(::raptor_dbw_msgs::msg::GpsReferenceReport & msg)
  : msg_(msg)
  {}
  ::raptor_dbw_msgs::msg::GpsReferenceReport ref_heading(::raptor_dbw_msgs::msg::GpsReferenceReport::_ref_heading_type arg)
  {
    msg_.ref_heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsReferenceReport msg_;
};

class Init_GpsReferenceReport_ref_longitude
{
public:
  explicit Init_GpsReferenceReport_ref_longitude(::raptor_dbw_msgs::msg::GpsReferenceReport & msg)
  : msg_(msg)
  {}
  Init_GpsReferenceReport_ref_heading ref_longitude(::raptor_dbw_msgs::msg::GpsReferenceReport::_ref_longitude_type arg)
  {
    msg_.ref_longitude = std::move(arg);
    return Init_GpsReferenceReport_ref_heading(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsReferenceReport msg_;
};

class Init_GpsReferenceReport_ref_latitude
{
public:
  explicit Init_GpsReferenceReport_ref_latitude(::raptor_dbw_msgs::msg::GpsReferenceReport & msg)
  : msg_(msg)
  {}
  Init_GpsReferenceReport_ref_longitude ref_latitude(::raptor_dbw_msgs::msg::GpsReferenceReport::_ref_latitude_type arg)
  {
    msg_.ref_latitude = std::move(arg);
    return Init_GpsReferenceReport_ref_longitude(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsReferenceReport msg_;
};

class Init_GpsReferenceReport_header
{
public:
  Init_GpsReferenceReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsReferenceReport_ref_latitude header(::raptor_dbw_msgs::msg::GpsReferenceReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GpsReferenceReport_ref_latitude(msg_);
  }

private:
  ::raptor_dbw_msgs::msg::GpsReferenceReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raptor_dbw_msgs::msg::GpsReferenceReport>()
{
  return raptor_dbw_msgs::msg::builder::Init_GpsReferenceReport_header();
}

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__BUILDER_HPP_
