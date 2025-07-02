// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/LowBeamState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__LowBeamState __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__LowBeamState __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowBeamState_
{
  using Type = LowBeamState_<ContainerAllocator>;

  explicit LowBeamState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LowBeamState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t RESERVED =
    1u;
  static constexpr uint8_t ON =
    2u;
  static constexpr uint8_t SNA =
    3u;

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__LowBeamState
    std::shared_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__LowBeamState
    std::shared_ptr<raptor_dbw_msgs::msg::LowBeamState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowBeamState_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowBeamState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowBeamState_

// alias to use template instance with default allocator
using LowBeamState =
  raptor_dbw_msgs::msg::LowBeamState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LowBeamState_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t LowBeamState_<ContainerAllocator>::RESERVED;
template<typename ContainerAllocator>
constexpr uint8_t LowBeamState_<ContainerAllocator>::ON;
template<typename ContainerAllocator>
constexpr uint8_t LowBeamState_<ContainerAllocator>::SNA;

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM_STATE__STRUCT_HPP_
