// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/MarelliReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/marelli_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_MarelliReport_lte_sync_ok
{
public:
  explicit Init_MarelliReport_lte_sync_ok(::deep_orange_msgs::msg::MarelliReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::MarelliReport lte_sync_ok(::deep_orange_msgs::msg::MarelliReport::_lte_sync_ok_type arg)
  {
    msg_.lte_sync_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::MarelliReport msg_;
};

class Init_MarelliReport_lte_modem_lte_rssi
{
public:
  explicit Init_MarelliReport_lte_modem_lte_rssi(::deep_orange_msgs::msg::MarelliReport & msg)
  : msg_(msg)
  {}
  Init_MarelliReport_lte_sync_ok lte_modem_lte_rssi(::deep_orange_msgs::msg::MarelliReport::_lte_modem_lte_rssi_type arg)
  {
    msg_.lte_modem_lte_rssi = std::move(arg);
    return Init_MarelliReport_lte_sync_ok(msg_);
  }

private:
  ::deep_orange_msgs::msg::MarelliReport msg_;
};

class Init_MarelliReport_lon
{
public:
  explicit Init_MarelliReport_lon(::deep_orange_msgs::msg::MarelliReport & msg)
  : msg_(msg)
  {}
  Init_MarelliReport_lte_modem_lte_rssi lon(::deep_orange_msgs::msg::MarelliReport::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_MarelliReport_lte_modem_lte_rssi(msg_);
  }

private:
  ::deep_orange_msgs::msg::MarelliReport msg_;
};

class Init_MarelliReport_lat
{
public:
  explicit Init_MarelliReport_lat(::deep_orange_msgs::msg::MarelliReport & msg)
  : msg_(msg)
  {}
  Init_MarelliReport_lon lat(::deep_orange_msgs::msg::MarelliReport::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_MarelliReport_lon(msg_);
  }

private:
  ::deep_orange_msgs::msg::MarelliReport msg_;
};

class Init_MarelliReport_stamp
{
public:
  Init_MarelliReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarelliReport_lat stamp(::deep_orange_msgs::msg::MarelliReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MarelliReport_lat(msg_);
  }

private:
  ::deep_orange_msgs::msg::MarelliReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::MarelliReport>()
{
  return deep_orange_msgs::msg::builder::Init_MarelliReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__BUILDER_HPP_
