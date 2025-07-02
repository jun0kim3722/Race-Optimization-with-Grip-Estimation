// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_pdu_msgs:msg/RelayCommand.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__STRUCT_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__STRUCT_HPP_

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
// Member 'relay_1'
// Member 'relay_2'
// Member 'relay_3'
// Member 'relay_4'
// Member 'relay_5'
// Member 'relay_6'
// Member 'relay_7'
// Member 'relay_8'
#include "raptor_pdu_msgs/msg/detail/relay_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_pdu_msgs__msg__RelayCommand __attribute__((deprecated))
#else
# define DEPRECATED__raptor_pdu_msgs__msg__RelayCommand __declspec(deprecated)
#endif

namespace raptor_pdu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelayCommand_
{
  using Type = RelayCommand_<ContainerAllocator>;

  explicit RelayCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    relay_1(_init),
    relay_2(_init),
    relay_3(_init),
    relay_4(_init),
    relay_5(_init),
    relay_6(_init),
    relay_7(_init),
    relay_8(_init)
  {
    (void)_init;
  }

  explicit RelayCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    relay_1(_alloc, _init),
    relay_2(_alloc, _init),
    relay_3(_alloc, _init),
    relay_4(_alloc, _init),
    relay_5(_alloc, _init),
    relay_6(_alloc, _init),
    relay_7(_alloc, _init),
    relay_8(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _relay_1_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_1_type relay_1;
  using _relay_2_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_2_type relay_2;
  using _relay_3_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_3_type relay_3;
  using _relay_4_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_4_type relay_4;
  using _relay_5_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_5_type relay_5;
  using _relay_6_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_6_type relay_6;
  using _relay_7_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_7_type relay_7;
  using _relay_8_type =
    raptor_pdu_msgs::msg::RelayState_<ContainerAllocator>;
  _relay_8_type relay_8;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__relay_1(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_1 = _arg;
    return *this;
  }
  Type & set__relay_2(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_2 = _arg;
    return *this;
  }
  Type & set__relay_3(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_3 = _arg;
    return *this;
  }
  Type & set__relay_4(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_4 = _arg;
    return *this;
  }
  Type & set__relay_5(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_5 = _arg;
    return *this;
  }
  Type & set__relay_6(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_6 = _arg;
    return *this;
  }
  Type & set__relay_7(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_7 = _arg;
    return *this;
  }
  Type & set__relay_8(
    const raptor_pdu_msgs::msg::RelayState_<ContainerAllocator> & _arg)
  {
    this->relay_8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayCommand
    std::shared_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_pdu_msgs__msg__RelayCommand
    std::shared_ptr<raptor_pdu_msgs::msg::RelayCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->relay_1 != other.relay_1) {
      return false;
    }
    if (this->relay_2 != other.relay_2) {
      return false;
    }
    if (this->relay_3 != other.relay_3) {
      return false;
    }
    if (this->relay_4 != other.relay_4) {
      return false;
    }
    if (this->relay_5 != other.relay_5) {
      return false;
    }
    if (this->relay_6 != other.relay_6) {
      return false;
    }
    if (this->relay_7 != other.relay_7) {
      return false;
    }
    if (this->relay_8 != other.relay_8) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayCommand_

// alias to use template instance with default allocator
using RelayCommand =
  raptor_pdu_msgs::msg::RelayCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__RELAY_COMMAND__STRUCT_HPP_
