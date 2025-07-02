// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_pdu_msgs:msg/RelayStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_HPP_

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
# define DEPRECATED__raptor_pdu_msgs__msg__RelayStatus __attribute__((deprecated))
#else
# define DEPRECATED__raptor_pdu_msgs__msg__RelayStatus __declspec(deprecated)
#endif

namespace raptor_pdu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelayStatus_
{
  using Type = RelayStatus_<ContainerAllocator>;

  explicit RelayStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit RelayStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t OK =
    0u;
  static constexpr uint8_t RELAY_COIL_OPEN =
    1u;
  static constexpr uint8_t RELAY_COIL_SHORTED =
    2u;
  static constexpr uint8_t NORM_OPEN_RELAY_OPEN =
    3u;
  static constexpr uint8_t NORM_CLOSED_RELAY_OPEN =
    4u;
  static constexpr uint8_t COIL_NOT_POWERED =
    5u;
  static constexpr uint8_t NORM_OPEN_RELAY_SHORTED =
    6u;
  static constexpr uint8_t NORM_CLOSED_RELAY_SHORTED =
    7u;
  static constexpr uint8_t RESERVED_01 =
    8u;
  static constexpr uint8_t RESERVED_02 =
    9u;
  static constexpr uint8_t RESERVED_03 =
    10u;
  static constexpr uint8_t HIGH_SIDE_FAULT =
    11u;
  static constexpr uint8_t HIGH_SIDE_OPEN_LOAD =
    12u;
  static constexpr uint8_t HIGH_SIDE_OVER_VOLTAGE =
    13u;
  static constexpr uint8_t RESERVED_04 =
    14u;
  static constexpr uint8_t RELAY_LOCATION_NOT_USED =
    15u;

  // pointer types
  using RawPtr =
    raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayStatus
    std::shared_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayStatus
    std::shared_ptr<raptor_pdu_msgs::msg::RelayStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayStatus_

// alias to use template instance with default allocator
using RelayStatus =
  raptor_pdu_msgs::msg::RelayStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RELAY_COIL_OPEN;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RELAY_COIL_SHORTED;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::NORM_OPEN_RELAY_OPEN;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::NORM_CLOSED_RELAY_OPEN;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::COIL_NOT_POWERED;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::NORM_OPEN_RELAY_SHORTED;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::NORM_CLOSED_RELAY_SHORTED;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RESERVED_01;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RESERVED_02;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RESERVED_03;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::HIGH_SIDE_FAULT;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::HIGH_SIDE_OPEN_LOAD;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::HIGH_SIDE_OVER_VOLTAGE;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RESERVED_04;
template<typename ContainerAllocator>
constexpr uint8_t RelayStatus_<ContainerAllocator>::RELAY_LOCATION_NOT_USED;

}  // namespace msg

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_STATUS__STRUCT_HPP_
