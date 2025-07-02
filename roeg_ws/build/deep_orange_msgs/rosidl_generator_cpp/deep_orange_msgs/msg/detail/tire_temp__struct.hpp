// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__deep_orange_msgs__msg__TireTemp __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__TireTemp __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireTemp_
{
  using Type = TireTemp_<ContainerAllocator>;

  explicit TireTemp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->median = 0.0f;
      this->mean = 0.0f;
      this->min = 0.0f;
      this->max = 0.0f;
    }
  }

  explicit TireTemp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->median = 0.0f;
      this->mean = 0.0f;
      this->min = 0.0f;
      this->max = 0.0f;
    }
  }

  // field types and members
  using _median_type =
    float;
  _median_type median;
  using _mean_type =
    float;
  _mean_type mean;
  using _min_type =
    float;
  _min_type min;
  using _max_type =
    float;
  _max_type max;

  // setters for named parameter idiom
  Type & set__median(
    const float & _arg)
  {
    this->median = _arg;
    return *this;
  }
  Type & set__mean(
    const float & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__min(
    const float & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const float & _arg)
  {
    this->max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::TireTemp_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::TireTemp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::TireTemp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::TireTemp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__TireTemp
    std::shared_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__TireTemp
    std::shared_ptr<deep_orange_msgs::msg::TireTemp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireTemp_ & other) const
  {
    if (this->median != other.median) {
      return false;
    }
    if (this->mean != other.mean) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireTemp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireTemp_

// alias to use template instance with default allocator
using TireTemp =
  deep_orange_msgs::msg::TireTemp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TIRE_TEMP__STRUCT_HPP_
