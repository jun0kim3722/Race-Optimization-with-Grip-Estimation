// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/rc_to_ct__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_RcToCt_lap_distance
{
public:
  explicit Init_RcToCt_lap_distance(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::RcToCt lap_distance(::deep_orange_msgs::msg::RcToCt::_lap_distance_type arg)
  {
    msg_.lap_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_lap_count
{
public:
  explicit Init_RcToCt_lap_count(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_lap_distance lap_count(::deep_orange_msgs::msg::RcToCt::_lap_count_type arg)
  {
    msg_.lap_count = std::move(arg);
    return Init_RcToCt_lap_distance(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_veh_rank
{
public:
  explicit Init_RcToCt_veh_rank(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_lap_count veh_rank(::deep_orange_msgs::msg::RcToCt::_veh_rank_type arg)
  {
    msg_.veh_rank = std::move(arg);
    return Init_RcToCt_lap_count(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_veh_flag
{
public:
  explicit Init_RcToCt_veh_flag(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_veh_rank veh_flag(::deep_orange_msgs::msg::RcToCt::_veh_flag_type arg)
  {
    msg_.veh_flag = std::move(arg);
    return Init_RcToCt_veh_rank(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_track_flag
{
public:
  explicit Init_RcToCt_track_flag(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_veh_flag track_flag(::deep_orange_msgs::msg::RcToCt::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_RcToCt_veh_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_rolling_counter
{
public:
  explicit Init_RcToCt_rolling_counter(::deep_orange_msgs::msg::RcToCt & msg)
  : msg_(msg)
  {}
  Init_RcToCt_track_flag rolling_counter(::deep_orange_msgs::msg::RcToCt::_rolling_counter_type arg)
  {
    msg_.rolling_counter = std::move(arg);
    return Init_RcToCt_track_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

class Init_RcToCt_stamp
{
public:
  Init_RcToCt_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcToCt_rolling_counter stamp(::deep_orange_msgs::msg::RcToCt::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RcToCt_rolling_counter(msg_);
  }

private:
  ::deep_orange_msgs::msg::RcToCt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::RcToCt>()
{
  return deep_orange_msgs::msg::builder::Init_RcToCt_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__RC_TO_CT__BUILDER_HPP_
