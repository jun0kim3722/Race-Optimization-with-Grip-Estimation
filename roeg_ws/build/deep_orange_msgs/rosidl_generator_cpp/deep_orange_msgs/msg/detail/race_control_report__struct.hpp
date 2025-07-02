// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deep_orange_msgs__msg__RaceControlReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__RaceControlReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RaceControlReport_
{
  using Type = RaceControlReport_<ContainerAllocator>;

  explicit RaceControlReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_count = 0;
      this->lap_distance = 0.0f;
      this->round_target_speed = 0.0f;
      this->marelli_track_flag = 0;
      this->marelli_vehicle_flag = 0;
      this->marelli_sector_flag = 0;
      this->lte_modem_lte_rssi = 0;
      this->lte_sync_ok = false;
    }
  }

  explicit RaceControlReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_count = 0;
      this->lap_distance = 0.0f;
      this->round_target_speed = 0.0f;
      this->marelli_track_flag = 0;
      this->marelli_vehicle_flag = 0;
      this->marelli_sector_flag = 0;
      this->lte_modem_lte_rssi = 0;
      this->lte_sync_ok = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _base_to_car_heartbeat_type =
    uint8_t;
  _base_to_car_heartbeat_type base_to_car_heartbeat;
  using _track_flag_type =
    uint8_t;
  _track_flag_type track_flag;
  using _veh_flag_type =
    uint8_t;
  _veh_flag_type veh_flag;
  using _veh_rank_type =
    uint8_t;
  _veh_rank_type veh_rank;
  using _lap_count_type =
    uint8_t;
  _lap_count_type lap_count;
  using _lap_distance_type =
    float;
  _lap_distance_type lap_distance;
  using _round_target_speed_type =
    float;
  _round_target_speed_type round_target_speed;
  using _marelli_track_flag_type =
    uint8_t;
  _marelli_track_flag_type marelli_track_flag;
  using _marelli_vehicle_flag_type =
    uint8_t;
  _marelli_vehicle_flag_type marelli_vehicle_flag;
  using _marelli_sector_flag_type =
    uint8_t;
  _marelli_sector_flag_type marelli_sector_flag;
  using _lte_modem_lte_rssi_type =
    int8_t;
  _lte_modem_lte_rssi_type lte_modem_lte_rssi;
  using _lte_sync_ok_type =
    bool;
  _lte_sync_ok_type lte_sync_ok;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__base_to_car_heartbeat(
    const uint8_t & _arg)
  {
    this->base_to_car_heartbeat = _arg;
    return *this;
  }
  Type & set__track_flag(
    const uint8_t & _arg)
  {
    this->track_flag = _arg;
    return *this;
  }
  Type & set__veh_flag(
    const uint8_t & _arg)
  {
    this->veh_flag = _arg;
    return *this;
  }
  Type & set__veh_rank(
    const uint8_t & _arg)
  {
    this->veh_rank = _arg;
    return *this;
  }
  Type & set__lap_count(
    const uint8_t & _arg)
  {
    this->lap_count = _arg;
    return *this;
  }
  Type & set__lap_distance(
    const float & _arg)
  {
    this->lap_distance = _arg;
    return *this;
  }
  Type & set__round_target_speed(
    const float & _arg)
  {
    this->round_target_speed = _arg;
    return *this;
  }
  Type & set__marelli_track_flag(
    const uint8_t & _arg)
  {
    this->marelli_track_flag = _arg;
    return *this;
  }
  Type & set__marelli_vehicle_flag(
    const uint8_t & _arg)
  {
    this->marelli_vehicle_flag = _arg;
    return *this;
  }
  Type & set__marelli_sector_flag(
    const uint8_t & _arg)
  {
    this->marelli_sector_flag = _arg;
    return *this;
  }
  Type & set__lte_modem_lte_rssi(
    const int8_t & _arg)
  {
    this->lte_modem_lte_rssi = _arg;
    return *this;
  }
  Type & set__lte_sync_ok(
    const bool & _arg)
  {
    this->lte_sync_ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__RaceControlReport
    std::shared_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__RaceControlReport
    std::shared_ptr<deep_orange_msgs::msg::RaceControlReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaceControlReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->base_to_car_heartbeat != other.base_to_car_heartbeat) {
      return false;
    }
    if (this->track_flag != other.track_flag) {
      return false;
    }
    if (this->veh_flag != other.veh_flag) {
      return false;
    }
    if (this->veh_rank != other.veh_rank) {
      return false;
    }
    if (this->lap_count != other.lap_count) {
      return false;
    }
    if (this->lap_distance != other.lap_distance) {
      return false;
    }
    if (this->round_target_speed != other.round_target_speed) {
      return false;
    }
    if (this->marelli_track_flag != other.marelli_track_flag) {
      return false;
    }
    if (this->marelli_vehicle_flag != other.marelli_vehicle_flag) {
      return false;
    }
    if (this->marelli_sector_flag != other.marelli_sector_flag) {
      return false;
    }
    if (this->lte_modem_lte_rssi != other.lte_modem_lte_rssi) {
      return false;
    }
    if (this->lte_sync_ok != other.lte_sync_ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaceControlReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaceControlReport_

// alias to use template instance with default allocator
using RaceControlReport =
  deep_orange_msgs::msg::RaceControlReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__RACE_CONTROL_REPORT__STRUCT_HPP_
