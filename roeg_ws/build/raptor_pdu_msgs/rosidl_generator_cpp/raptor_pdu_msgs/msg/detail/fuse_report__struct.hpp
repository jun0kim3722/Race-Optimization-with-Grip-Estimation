// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_pdu_msgs:msg/FuseReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_HPP_

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
// Member 'fuse_1'
// Member 'fuse_2'
// Member 'fuse_3'
// Member 'fuse_4'
// Member 'fuse_5'
// Member 'fuse_6'
// Member 'fuse_7'
// Member 'fuse_8'
// Member 'fuse_9'
// Member 'fuse_10'
// Member 'fuse_11'
// Member 'fuse_12'
// Member 'fuse_13'
// Member 'fuse_14'
// Member 'fuse_15'
// Member 'fuse_16'
#include "raptor_pdu_msgs/msg/detail/fuse_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_pdu_msgs__msg__FuseReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_pdu_msgs__msg__FuseReport __declspec(deprecated)
#endif

namespace raptor_pdu_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FuseReport_
{
  using Type = FuseReport_<ContainerAllocator>;

  explicit FuseReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fuse_1(_init),
    fuse_2(_init),
    fuse_3(_init),
    fuse_4(_init),
    fuse_5(_init),
    fuse_6(_init),
    fuse_7(_init),
    fuse_8(_init),
    fuse_9(_init),
    fuse_10(_init),
    fuse_11(_init),
    fuse_12(_init),
    fuse_13(_init),
    fuse_14(_init),
    fuse_15(_init),
    fuse_16(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grid_address = 0;
    }
  }

  explicit FuseReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fuse_1(_alloc, _init),
    fuse_2(_alloc, _init),
    fuse_3(_alloc, _init),
    fuse_4(_alloc, _init),
    fuse_5(_alloc, _init),
    fuse_6(_alloc, _init),
    fuse_7(_alloc, _init),
    fuse_8(_alloc, _init),
    fuse_9(_alloc, _init),
    fuse_10(_alloc, _init),
    fuse_11(_alloc, _init),
    fuse_12(_alloc, _init),
    fuse_13(_alloc, _init),
    fuse_14(_alloc, _init),
    fuse_15(_alloc, _init),
    fuse_16(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grid_address = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _grid_address_type =
    uint8_t;
  _grid_address_type grid_address;
  using _fuse_1_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_1_type fuse_1;
  using _fuse_2_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_2_type fuse_2;
  using _fuse_3_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_3_type fuse_3;
  using _fuse_4_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_4_type fuse_4;
  using _fuse_5_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_5_type fuse_5;
  using _fuse_6_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_6_type fuse_6;
  using _fuse_7_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_7_type fuse_7;
  using _fuse_8_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_8_type fuse_8;
  using _fuse_9_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_9_type fuse_9;
  using _fuse_10_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_10_type fuse_10;
  using _fuse_11_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_11_type fuse_11;
  using _fuse_12_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_12_type fuse_12;
  using _fuse_13_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_13_type fuse_13;
  using _fuse_14_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_14_type fuse_14;
  using _fuse_15_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_15_type fuse_15;
  using _fuse_16_type =
    raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator>;
  _fuse_16_type fuse_16;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__grid_address(
    const uint8_t & _arg)
  {
    this->grid_address = _arg;
    return *this;
  }
  Type & set__fuse_1(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_1 = _arg;
    return *this;
  }
  Type & set__fuse_2(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_2 = _arg;
    return *this;
  }
  Type & set__fuse_3(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_3 = _arg;
    return *this;
  }
  Type & set__fuse_4(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_4 = _arg;
    return *this;
  }
  Type & set__fuse_5(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_5 = _arg;
    return *this;
  }
  Type & set__fuse_6(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_6 = _arg;
    return *this;
  }
  Type & set__fuse_7(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_7 = _arg;
    return *this;
  }
  Type & set__fuse_8(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_8 = _arg;
    return *this;
  }
  Type & set__fuse_9(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_9 = _arg;
    return *this;
  }
  Type & set__fuse_10(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_10 = _arg;
    return *this;
  }
  Type & set__fuse_11(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_11 = _arg;
    return *this;
  }
  Type & set__fuse_12(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_12 = _arg;
    return *this;
  }
  Type & set__fuse_13(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_13 = _arg;
    return *this;
  }
  Type & set__fuse_14(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_14 = _arg;
    return *this;
  }
  Type & set__fuse_15(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_15 = _arg;
    return *this;
  }
  Type & set__fuse_16(
    const raptor_pdu_msgs::msg::FuseStatus_<ContainerAllocator> & _arg)
  {
    this->fuse_16 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_pdu_msgs__msg__FuseReport
    std::shared_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_pdu_msgs__msg__FuseReport
    std::shared_ptr<raptor_pdu_msgs::msg::FuseReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FuseReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->grid_address != other.grid_address) {
      return false;
    }
    if (this->fuse_1 != other.fuse_1) {
      return false;
    }
    if (this->fuse_2 != other.fuse_2) {
      return false;
    }
    if (this->fuse_3 != other.fuse_3) {
      return false;
    }
    if (this->fuse_4 != other.fuse_4) {
      return false;
    }
    if (this->fuse_5 != other.fuse_5) {
      return false;
    }
    if (this->fuse_6 != other.fuse_6) {
      return false;
    }
    if (this->fuse_7 != other.fuse_7) {
      return false;
    }
    if (this->fuse_8 != other.fuse_8) {
      return false;
    }
    if (this->fuse_9 != other.fuse_9) {
      return false;
    }
    if (this->fuse_10 != other.fuse_10) {
      return false;
    }
    if (this->fuse_11 != other.fuse_11) {
      return false;
    }
    if (this->fuse_12 != other.fuse_12) {
      return false;
    }
    if (this->fuse_13 != other.fuse_13) {
      return false;
    }
    if (this->fuse_14 != other.fuse_14) {
      return false;
    }
    if (this->fuse_15 != other.fuse_15) {
      return false;
    }
    if (this->fuse_16 != other.fuse_16) {
      return false;
    }
    return true;
  }
  bool operator!=(const FuseReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FuseReport_

// alias to use template instance with default allocator
using FuseReport =
  raptor_pdu_msgs::msg::FuseReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_pdu_msgs

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__STRUCT_HPP_
