// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/race_control_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_RaceControlReport_lte_sync_ok
{
public:
  explicit Init_RaceControlReport_lte_sync_ok(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::RaceControlReport lte_sync_ok(::deep_orange_msgs::msg::RaceControlReport::_lte_sync_ok_type arg)
  {
    msg_.lte_sync_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_lte_modem_lte_rssi
{
public:
  explicit Init_RaceControlReport_lte_modem_lte_rssi(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_lte_sync_ok lte_modem_lte_rssi(::deep_orange_msgs::msg::RaceControlReport::_lte_modem_lte_rssi_type arg)
  {
    msg_.lte_modem_lte_rssi = std::move(arg);
    return Init_RaceControlReport_lte_sync_ok(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_marelli_sector_flag
{
public:
  explicit Init_RaceControlReport_marelli_sector_flag(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_lte_modem_lte_rssi marelli_sector_flag(::deep_orange_msgs::msg::RaceControlReport::_marelli_sector_flag_type arg)
  {
    msg_.marelli_sector_flag = std::move(arg);
    return Init_RaceControlReport_lte_modem_lte_rssi(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_marelli_vehicle_flag
{
public:
  explicit Init_RaceControlReport_marelli_vehicle_flag(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_marelli_sector_flag marelli_vehicle_flag(::deep_orange_msgs::msg::RaceControlReport::_marelli_vehicle_flag_type arg)
  {
    msg_.marelli_vehicle_flag = std::move(arg);
    return Init_RaceControlReport_marelli_sector_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_marelli_track_flag
{
public:
  explicit Init_RaceControlReport_marelli_track_flag(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_marelli_vehicle_flag marelli_track_flag(::deep_orange_msgs::msg::RaceControlReport::_marelli_track_flag_type arg)
  {
    msg_.marelli_track_flag = std::move(arg);
    return Init_RaceControlReport_marelli_vehicle_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_round_target_speed
{
public:
  explicit Init_RaceControlReport_round_target_speed(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_marelli_track_flag round_target_speed(::deep_orange_msgs::msg::RaceControlReport::_round_target_speed_type arg)
  {
    msg_.round_target_speed = std::move(arg);
    return Init_RaceControlReport_marelli_track_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_lap_distance
{
public:
  explicit Init_RaceControlReport_lap_distance(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_round_target_speed lap_distance(::deep_orange_msgs::msg::RaceControlReport::_lap_distance_type arg)
  {
    msg_.lap_distance = std::move(arg);
    return Init_RaceControlReport_round_target_speed(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_lap_count
{
public:
  explicit Init_RaceControlReport_lap_count(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_lap_distance lap_count(::deep_orange_msgs::msg::RaceControlReport::_lap_count_type arg)
  {
    msg_.lap_count = std::move(arg);
    return Init_RaceControlReport_lap_distance(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_veh_rank
{
public:
  explicit Init_RaceControlReport_veh_rank(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_lap_count veh_rank(::deep_orange_msgs::msg::RaceControlReport::_veh_rank_type arg)
  {
    msg_.veh_rank = std::move(arg);
    return Init_RaceControlReport_lap_count(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_veh_flag
{
public:
  explicit Init_RaceControlReport_veh_flag(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_veh_rank veh_flag(::deep_orange_msgs::msg::RaceControlReport::_veh_flag_type arg)
  {
    msg_.veh_flag = std::move(arg);
    return Init_RaceControlReport_veh_rank(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_track_flag
{
public:
  explicit Init_RaceControlReport_track_flag(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_veh_flag track_flag(::deep_orange_msgs::msg::RaceControlReport::_track_flag_type arg)
  {
    msg_.track_flag = std::move(arg);
    return Init_RaceControlReport_veh_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_base_to_car_heartbeat
{
public:
  explicit Init_RaceControlReport_base_to_car_heartbeat(::deep_orange_msgs::msg::RaceControlReport & msg)
  : msg_(msg)
  {}
  Init_RaceControlReport_track_flag base_to_car_heartbeat(::deep_orange_msgs::msg::RaceControlReport::_base_to_car_heartbeat_type arg)
  {
    msg_.base_to_car_heartbeat = std::move(arg);
    return Init_RaceControlReport_track_flag(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

class Init_RaceControlReport_stamp
{
public:
  Init_RaceControlReport_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaceControlReport_base_to_car_heartbeat stamp(::deep_orange_msgs::msg::RaceControlReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RaceControlReport_base_to_car_heartbeat(msg_);
  }

private:
  ::deep_orange_msgs::msg::RaceControlReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::RaceControlReport>()
{
  return deep_orange_msgs::msg::builder::Init_RaceControlReport_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__BUILDER_HPP_
