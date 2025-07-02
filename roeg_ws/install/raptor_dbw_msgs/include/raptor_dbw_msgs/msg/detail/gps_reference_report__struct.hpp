// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/GpsReferenceReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__GpsReferenceReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__GpsReferenceReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsReferenceReport_
{
  using Type = GpsReferenceReport_<ContainerAllocator>;

  explicit GpsReferenceReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_latitude = 0.0f;
      this->ref_longitude = 0.0f;
      this->ref_heading = 0.0f;
    }
  }

  explicit GpsReferenceReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_latitude = 0.0f;
      this->ref_longitude = 0.0f;
      this->ref_heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_latitude_type =
    float;
  _ref_latitude_type ref_latitude;
  using _ref_longitude_type =
    float;
  _ref_longitude_type ref_longitude;
  using _ref_heading_type =
    float;
  _ref_heading_type ref_heading;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_latitude(
    const float & _arg)
  {
    this->ref_latitude = _arg;
    return *this;
  }
  Type & set__ref_longitude(
    const float & _arg)
  {
    this->ref_longitude = _arg;
    return *this;
  }
  Type & set__ref_heading(
    const float & _arg)
  {
    this->ref_heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__GpsReferenceReport
    std::shared_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__GpsReferenceReport
    std::shared_ptr<raptor_dbw_msgs::msg::GpsReferenceReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsReferenceReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_latitude != other.ref_latitude) {
      return false;
    }
    if (this->ref_longitude != other.ref_longitude) {
      return false;
    }
    if (this->ref_heading != other.ref_heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsReferenceReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsReferenceReport_

// alias to use template instance with default allocator
using GpsReferenceReport =
  raptor_dbw_msgs::msg::GpsReferenceReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GPS_REFERENCE_REPORT__STRUCT_HPP_
