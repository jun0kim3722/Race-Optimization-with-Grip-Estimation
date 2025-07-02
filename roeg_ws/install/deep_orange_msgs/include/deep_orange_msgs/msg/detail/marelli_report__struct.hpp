// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/MarelliReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__MarelliReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__MarelliReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarelliReport_
{
  using Type = MarelliReport_<ContainerAllocator>;

  explicit MarelliReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
      this->lte_modem_lte_rssi = 0;
      this->lte_sync_ok = false;
    }
  }

  explicit MarelliReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
      this->lte_modem_lte_rssi = 0;
      this->lte_sync_ok = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _lat_type =
    float;
  _lat_type lat;
  using _lon_type =
    float;
  _lon_type lon;
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
  Type & set__lat(
    const float & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const float & _arg)
  {
    this->lon = _arg;
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
    deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__MarelliReport
    std::shared_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__MarelliReport
    std::shared_ptr<deep_orange_msgs::msg::MarelliReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarelliReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
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
  bool operator!=(const MarelliReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarelliReport_

// alias to use template instance with default allocator
using MarelliReport =
  deep_orange_msgs::msg::MarelliReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__STRUCT_HPP_
