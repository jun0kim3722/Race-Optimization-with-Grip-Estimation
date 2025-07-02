// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_pdu_msgs:msg/RelayState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__raptor_pdu_msgs__msg__RelayState __attribute__((deprecated))
#else
# define DEPRECATED__raptor_pdu_msgs__msg__RelayState __declspec(deprecated)
#endif

namespace raptor_pdu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelayState_
{
  using Type = RelayState_<ContainerAllocator>;

  explicit RelayState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit RelayState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RELAY_OFF =
    0u;
  static constexpr uint8_t RELAY_ON =
    1u;
  static constexpr uint8_t MAINTAIN_STATE =
    2u;

  // pointer types
  using RawPtr =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayState
    std::shared_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayState
    std::shared_ptr<raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayState_

// alias to use template instance with default allocator
using RelayState =
  raptor_pdu_msgs::msg::RelayState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RelayState_<ContainerAllocator>::RELAY_OFF;
template<typename ContainerAllocator>
constexpr uint8_t RelayState_<ContainerAllocator>::RELAY_ON;
template<typename ContainerAllocator>
constexpr uint8_t RelayState_<ContainerAllocator>::MAINTAIN_STATE;

}  // namespace msg

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATE__STRUCT_HPP_
