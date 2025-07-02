// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "deep_orange_msgs/msg/detail/tire_temp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deep_orange_msgs__msg__TireTempReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__TireTempReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireTempReport_
{
  using Type = TireTempReport_<ContainerAllocator>;

  explicit TireTempReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    front_left(_init),
    front_right(_init),
    rear_left(_init),
    rear_right(_init)
  {
    (void)_init;
  }

  explicit TireTempReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    front_left(_alloc, _init),
    front_right(_alloc, _init),
    rear_left(_alloc, _init),
    rear_right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_left_type =
    deep_orange_msgs::msg::TireTemp_<ContainerAllocator>;
  _front_left_type front_left;
  using _front_right_type =
    deep_orange_msgs::msg::TireTemp_<ContainerAllocator>;
  _front_right_type front_right;
  using _rear_left_type =
    deep_orange_msgs::msg::TireTemp_<ContainerAllocator>;
  _rear_left_type rear_left;
  using _rear_right_type =
    deep_orange_msgs::msg::TireTemp_<ContainerAllocator>;
  _rear_right_type rear_right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__front_left(
    const deep_orange_msgs::msg::TireTemp_<ContainerAllocator> & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const deep_orange_msgs::msg::TireTemp_<ContainerAllocator> & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const deep_orange_msgs::msg::TireTemp_<ContainerAllocator> & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const deep_orange_msgs::msg::TireTemp_<ContainerAllocator> & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__TireTempReport
    std::shared_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__TireTempReport
    std::shared_ptr<deep_orange_msgs::msg::TireTempReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireTempReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireTempReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireTempReport_

// alias to use template instance with default allocator
using TireTempReport =
  deep_orange_msgs::msg::TireTempReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP_REPORT__STRUCT_HPP_
