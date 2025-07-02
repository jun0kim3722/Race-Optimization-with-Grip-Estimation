// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__BaseToCarSummary __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__BaseToCarSummary __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseToCarSummary_
{
  using Type = BaseToCarSummary_<ContainerAllocator>;

  explicit BaseToCarSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_status_whole = 0.0f;
      this->lap_status_fraction = 0.0f;
      this->round_target_speed = 0.0f;
    }
  }

  explicit BaseToCarSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_to_car_heartbeat = 0;
      this->track_flag = 0;
      this->veh_flag = 0;
      this->veh_rank = 0;
      this->lap_status_whole = 0.0f;
      this->lap_status_fraction = 0.0f;
      this->round_target_speed = 0.0f;
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
  using _lap_status_whole_type =
    float;
  _lap_status_whole_type lap_status_whole;
  using _lap_status_fraction_type =
    float;
  _lap_status_fraction_type lap_status_fraction;
  using _round_target_speed_type =
    float;
  _round_target_speed_type round_target_speed;

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
  Type & set__lap_status_whole(
    const float & _arg)
  {
    this->lap_status_whole = _arg;
    return *this;
  }
  Type & set__lap_status_fraction(
    const float & _arg)
  {
    this->lap_status_fraction = _arg;
    return *this;
  }
  Type & set__round_target_speed(
    const float & _arg)
  {
    this->round_target_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__BaseToCarSummary
    std::shared_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__BaseToCarSummary
    std::shared_ptr<deep_orange_msgs::msg::BaseToCarSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseToCarSummary_ & other) const
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
    if (this->lap_status_whole != other.lap_status_whole) {
      return false;
    }
    if (this->lap_status_fraction != other.lap_status_fraction) {
      return false;
    }
    if (this->round_target_speed != other.round_target_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseToCarSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseToCarSummary_

// alias to use template instance with default allocator
using BaseToCarSummary =
  deep_orange_msgs::msg::BaseToCarSummary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BASE_TO_CAR_SUMMARY__STRUCT_HPP_
