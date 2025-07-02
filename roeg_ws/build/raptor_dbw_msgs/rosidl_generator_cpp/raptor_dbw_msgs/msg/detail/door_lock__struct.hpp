// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/DoorLock.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__DoorLock __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__DoorLock __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoorLock_
{
  using Type = DoorLock_<ContainerAllocator>;

  explicit DoorLock_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit DoorLock_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_REQUEST =
    0u;
  static constexpr uint8_t UNLOCK =
    1u;
  static constexpr uint8_t LOCK =
    2u;
  static constexpr uint8_t FAULT =
    3u;

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__DoorLock
    std::shared_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__DoorLock
    std::shared_ptr<raptor_dbw_msgs::msg::DoorLock_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoorLock_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoorLock_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoorLock_

// alias to use template instance with default allocator
using DoorLock =
  raptor_dbw_msgs::msg::DoorLock_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DoorLock_<ContainerAllocator>::NO_REQUEST;
template<typename ContainerAllocator>
constexpr uint8_t DoorLock_<ContainerAllocator>::UNLOCK;
template<typename ContainerAllocator>
constexpr uint8_t DoorLock_<ContainerAllocator>::LOCK;
template<typename ContainerAllocator>
constexpr uint8_t DoorLock_<ContainerAllocator>::FAULT;

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_LOCK__STRUCT_HPP_
