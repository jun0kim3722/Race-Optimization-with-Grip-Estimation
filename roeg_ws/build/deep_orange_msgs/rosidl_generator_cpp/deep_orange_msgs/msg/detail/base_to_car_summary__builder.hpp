// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/base_to_car_summary__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_BaseToCarSummary_round_target_speed
{
public:
  explicit Init_BaseToCarSummary_round_target_speed(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::BaseToCarSummary round_target_speed(::deep_orange_msgs::msg::BaseToCarSummary::_round_target_speed_type arg)
  {
    msg_.round_target_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_lap_status_fraction
{
public:
  explicit Init_BaseToCarSummary_lap_status_fraction(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_round_target_speed lap_status_fraction(::deep_orange_msgs::msg::BaseToCarSummary::_lap_status_fraction_type arg)
  {
    msg_.lap_status_fraction = std::move(arg);
    return Init_BaseToCarSummary_round_target_speed(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_lap_status_whole
{
public:
  explicit Init_BaseToCarSummary_lap_status_whole(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_lap_status_fraction lap_status_whole(::deep_orange_msgs::msg::BaseToCarSummary::_lap_status_whole_type arg)
  {
    msg_.lap_status_whole = std::move(arg);
    return Init_BaseToCarSummary_lap_status_fraction(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_veh_rank
{
public:
  explicit Init_BaseToCarSummary_veh_rank(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_lap_status_whole veh_rank(::deep_orange_msgs::msg::BaseToCarSummary::_veh_rank_type arg)
  {
    msg_.veh_rank = std::move(arg);
    return Init_BaseToCarSummary_lap_status_whole(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_veh_flag
{
public:
  explicit Init_BaseToCarSummary_veh_flag(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_veh_rank veh_flag(::deep_orange_msgs::msg::BaseToCarSummary::_veh_flag_type arg)
  {
    msg_.veh_flag = std::move(arg);
    return Init_BaseToCarSummary_veh_rank(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_track_flag
{
public:
  explicit Init_BaseToCarSummary_track_flag(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_veh_flag track_flag(::deep_orange_msgs::msg::BaseToCarSummary::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_BaseToCarSummary_veh_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_base_to_car_heartbeat
{
public:
  explicit Init_BaseToCarSummary_base_to_car_heartbeat(::deep_orange_msgs::msg::BaseToCarSummary & msg)
  : msg_(msg)
  {}
  Init_BaseToCarSummary_track_flag base_to_car_heartbeat(::deep_orange_msgs::msg::BaseToCarSummary::_base_to_car_heartbeat_type arg)
  {
    msg_.base_to_car_heartbeat = std::move(arg);
    return Init_BaseToCarSummary_track_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

class Init_BaseToCarSummary_stamp
{
public:
  Init_BaseToCarSummary_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseToCarSummary_base_to_car_heartbeat stamp(::deep_orange_msgs::msg::BaseToCarSummary::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BaseToCarSummary_base_to_car_heartbeat(msg_);
  }

private:
  ::deep_orange_msgs::msg::BaseToCarSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::BaseToCarSummary>()
{
  return deep_orange_msgs::msg::builder::Init_BaseToCarSummary_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__BUILDER_HPP_
