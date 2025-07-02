// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/LapTimeReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__LapTimeReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__LapTimeReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LapTimeReport_
{
  using Type = LapTimeReport_<ContainerAllocator>;

  explicit LapTimeReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laps = 0l;
      this->lap_time = 0.0f;
      this->time_stamp = 0.0f;
    }
  }

  explicit LapTimeReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laps = 0l;
      this->lap_time = 0.0f;
      this->time_stamp = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _laps_type =
    int32_t;
  _laps_type laps;
  using _lap_time_type =
    float;
  _lap_time_type lap_time;
  using _time_stamp_type =
    float;
  _time_stamp_type time_stamp;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__laps(
    const int32_t & _arg)
  {
    this->laps = _arg;
    return *this;
  }
  Type & set__lap_time(
    const float & _arg)
  {
    this->lap_time = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const float & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__LapTimeReport
    std::shared_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__LapTimeReport
    std::shared_ptr<deep_orange_msgs::msg::LapTimeReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LapTimeReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->laps != other.laps) {
      return false;
    }
    if (this->lap_time != other.lap_time) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LapTimeReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LapTimeReport_

// alias to use template instance with default allocator
using LapTimeReport =
  deep_orange_msgs::msg::LapTimeReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__LAP_TIME_REPORT__STRUCT_HPP_
