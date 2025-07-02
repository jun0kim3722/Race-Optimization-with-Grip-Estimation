// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/BrakeTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__BrakeTempReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__BrakeTempReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeTempReport_
{
  using Type = BrakeTempReport_<ContainerAllocator>;

  explicit BrakeTempReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_brake_temp = 0.0f;
      this->fr_brake_temp = 0.0f;
      this->rl_brake_temp = 0.0f;
      this->rr_brake_temp = 0.0f;
    }
  }

  explicit BrakeTempReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_brake_temp = 0.0f;
      this->fr_brake_temp = 0.0f;
      this->rl_brake_temp = 0.0f;
      this->rr_brake_temp = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _fl_brake_temp_type =
    float;
  _fl_brake_temp_type fl_brake_temp;
  using _fr_brake_temp_type =
    float;
  _fr_brake_temp_type fr_brake_temp;
  using _rl_brake_temp_type =
    float;
  _rl_brake_temp_type rl_brake_temp;
  using _rr_brake_temp_type =
    float;
  _rr_brake_temp_type rr_brake_temp;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__fl_brake_temp(
    const float & _arg)
  {
    this->fl_brake_temp = _arg;
    return *this;
  }
  Type & set__fr_brake_temp(
    const float & _arg)
  {
    this->fr_brake_temp = _arg;
    return *this;
  }
  Type & set__rl_brake_temp(
    const float & _arg)
  {
    this->rl_brake_temp = _arg;
    return *this;
  }
  Type & set__rr_brake_temp(
    const float & _arg)
  {
    this->rr_brake_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__BrakeTempReport
    std::shared_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__BrakeTempReport
    std::shared_ptr<deep_orange_msgs::msg::BrakeTempReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeTempReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->fl_brake_temp != other.fl_brake_temp) {
      return false;
    }
    if (this->fr_brake_temp != other.fr_brake_temp) {
      return false;
    }
    if (this->rl_brake_temp != other.rl_brake_temp) {
      return false;
    }
    if (this->rr_brake_temp != other.rr_brake_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeTempReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeTempReport_

// alias to use template instance with default allocator
using BrakeTempReport =
  deep_orange_msgs::msg::BrakeTempReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__BRAKE_TEMP_REPORT__STRUCT_HPP_
