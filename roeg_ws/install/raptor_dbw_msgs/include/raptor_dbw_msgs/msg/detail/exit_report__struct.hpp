// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__ExitReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__ExitReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExitReport_
{
  using Type = ExitReport_<ContainerAllocator>;

  explicit ExitReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->akit_disable = false;
      this->driver_in_control = false;
      this->idx_auton_disable_no_brakes = 0;
      this->idx_auton_disable_apply_brakes = 0;
      this->auton_counter = 0;
    }
  }

  explicit ExitReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->akit_disable = false;
      this->driver_in_control = false;
      this->idx_auton_disable_no_brakes = 0;
      this->idx_auton_disable_apply_brakes = 0;
      this->auton_counter = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _akit_disable_type =
    bool;
  _akit_disable_type akit_disable;
  using _driver_in_control_type =
    bool;
  _driver_in_control_type driver_in_control;
  using _idx_auton_disable_no_brakes_type =
    uint16_t;
  _idx_auton_disable_no_brakes_type idx_auton_disable_no_brakes;
  using _idx_auton_disable_apply_brakes_type =
    uint16_t;
  _idx_auton_disable_apply_brakes_type idx_auton_disable_apply_brakes;
  using _auton_counter_type =
    uint8_t;
  _auton_counter_type auton_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__akit_disable(
    const bool & _arg)
  {
    this->akit_disable = _arg;
    return *this;
  }
  Type & set__driver_in_control(
    const bool & _arg)
  {
    this->driver_in_control = _arg;
    return *this;
  }
  Type & set__idx_auton_disable_no_brakes(
    const uint16_t & _arg)
  {
    this->idx_auton_disable_no_brakes = _arg;
    return *this;
  }
  Type & set__idx_auton_disable_apply_brakes(
    const uint16_t & _arg)
  {
    this->idx_auton_disable_apply_brakes = _arg;
    return *this;
  }
  Type & set__auton_counter(
    const uint8_t & _arg)
  {
    this->auton_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__ExitReport
    std::shared_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__ExitReport
    std::shared_ptr<raptor_dbw_msgs::msg::ExitReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExitReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->akit_disable != other.akit_disable) {
      return false;
    }
    if (this->driver_in_control != other.driver_in_control) {
      return false;
    }
    if (this->idx_auton_disable_no_brakes != other.idx_auton_disable_no_brakes) {
      return false;
    }
    if (this->idx_auton_disable_apply_brakes != other.idx_auton_disable_apply_brakes) {
      return false;
    }
    if (this->auton_counter != other.auton_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExitReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExitReport_

// alias to use template instance with default allocator
using ExitReport =
  raptor_dbw_msgs::msg::ExitReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__EXIT_REPORT__STRUCT_HPP_
