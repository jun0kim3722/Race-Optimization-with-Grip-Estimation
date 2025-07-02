// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deep_orange_msgs__msg__DiagnosticReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__DiagnosticReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticReport_
{
  using Type = DiagnosticReport_<ContainerAllocator>;

  explicit DiagnosticReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sd_system_warning = false;
      this->sd_system_failure = false;
      this->motec_warning = 0l;
      this->sd_brake_warning1 = false;
      this->sd_brake_warning2 = false;
      this->sd_brake_warning3 = false;
      this->sd_steer_warning1 = false;
      this->sd_steer_warning2 = false;
      this->sd_steer_warning3 = false;
      this->est1_oos_front_brk = false;
      this->est2_oos_rear_brk = false;
      this->est3_low_eng_speed = false;
      this->est4_sd_comms_loss = false;
      this->est5_motec_comms_loss = false;
      this->est6_sd_ebrake = false;
      this->adlink_hb_lost = false;
      this->rc_lost = false;
    }
  }

  explicit DiagnosticReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sd_system_warning = false;
      this->sd_system_failure = false;
      this->motec_warning = 0l;
      this->sd_brake_warning1 = false;
      this->sd_brake_warning2 = false;
      this->sd_brake_warning3 = false;
      this->sd_steer_warning1 = false;
      this->sd_steer_warning2 = false;
      this->sd_steer_warning3 = false;
      this->est1_oos_front_brk = false;
      this->est2_oos_rear_brk = false;
      this->est3_low_eng_speed = false;
      this->est4_sd_comms_loss = false;
      this->est5_motec_comms_loss = false;
      this->est6_sd_ebrake = false;
      this->adlink_hb_lost = false;
      this->rc_lost = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _sd_system_warning_type =
    bool;
  _sd_system_warning_type sd_system_warning;
  using _sd_system_failure_type =
    bool;
  _sd_system_failure_type sd_system_failure;
  using _motec_warning_type =
    int32_t;
  _motec_warning_type motec_warning;
  using _sd_brake_warning1_type =
    bool;
  _sd_brake_warning1_type sd_brake_warning1;
  using _sd_brake_warning2_type =
    bool;
  _sd_brake_warning2_type sd_brake_warning2;
  using _sd_brake_warning3_type =
    bool;
  _sd_brake_warning3_type sd_brake_warning3;
  using _sd_steer_warning1_type =
    bool;
  _sd_steer_warning1_type sd_steer_warning1;
  using _sd_steer_warning2_type =
    bool;
  _sd_steer_warning2_type sd_steer_warning2;
  using _sd_steer_warning3_type =
    bool;
  _sd_steer_warning3_type sd_steer_warning3;
  using _est1_oos_front_brk_type =
    bool;
  _est1_oos_front_brk_type est1_oos_front_brk;
  using _est2_oos_rear_brk_type =
    bool;
  _est2_oos_rear_brk_type est2_oos_rear_brk;
  using _est3_low_eng_speed_type =
    bool;
  _est3_low_eng_speed_type est3_low_eng_speed;
  using _est4_sd_comms_loss_type =
    bool;
  _est4_sd_comms_loss_type est4_sd_comms_loss;
  using _est5_motec_comms_loss_type =
    bool;
  _est5_motec_comms_loss_type est5_motec_comms_loss;
  using _est6_sd_ebrake_type =
    bool;
  _est6_sd_ebrake_type est6_sd_ebrake;
  using _adlink_hb_lost_type =
    bool;
  _adlink_hb_lost_type adlink_hb_lost;
  using _rc_lost_type =
    bool;
  _rc_lost_type rc_lost;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__sd_system_warning(
    const bool & _arg)
  {
    this->sd_system_warning = _arg;
    return *this;
  }
  Type & set__sd_system_failure(
    const bool & _arg)
  {
    this->sd_system_failure = _arg;
    return *this;
  }
  Type & set__motec_warning(
    const int32_t & _arg)
  {
    this->motec_warning = _arg;
    return *this;
  }
  Type & set__sd_brake_warning1(
    const bool & _arg)
  {
    this->sd_brake_warning1 = _arg;
    return *this;
  }
  Type & set__sd_brake_warning2(
    const bool & _arg)
  {
    this->sd_brake_warning2 = _arg;
    return *this;
  }
  Type & set__sd_brake_warning3(
    const bool & _arg)
  {
    this->sd_brake_warning3 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning1(
    const bool & _arg)
  {
    this->sd_steer_warning1 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning2(
    const bool & _arg)
  {
    this->sd_steer_warning2 = _arg;
    return *this;
  }
  Type & set__sd_steer_warning3(
    const bool & _arg)
  {
    this->sd_steer_warning3 = _arg;
    return *this;
  }
  Type & set__est1_oos_front_brk(
    const bool & _arg)
  {
    this->est1_oos_front_brk = _arg;
    return *this;
  }
  Type & set__est2_oos_rear_brk(
    const bool & _arg)
  {
    this->est2_oos_rear_brk = _arg;
    return *this;
  }
  Type & set__est3_low_eng_speed(
    const bool & _arg)
  {
    this->est3_low_eng_speed = _arg;
    return *this;
  }
  Type & set__est4_sd_comms_loss(
    const bool & _arg)
  {
    this->est4_sd_comms_loss = _arg;
    return *this;
  }
  Type & set__est5_motec_comms_loss(
    const bool & _arg)
  {
    this->est5_motec_comms_loss = _arg;
    return *this;
  }
  Type & set__est6_sd_ebrake(
    const bool & _arg)
  {
    this->est6_sd_ebrake = _arg;
    return *this;
  }
  Type & set__adlink_hb_lost(
    const bool & _arg)
  {
    this->adlink_hb_lost = _arg;
    return *this;
  }
  Type & set__rc_lost(
    const bool & _arg)
  {
    this->rc_lost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__DiagnosticReport
    std::shared_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__DiagnosticReport
    std::shared_ptr<deep_orange_msgs::msg::DiagnosticReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->sd_system_warning != other.sd_system_warning) {
      return false;
    }
    if (this->sd_system_failure != other.sd_system_failure) {
      return false;
    }
    if (this->motec_warning != other.motec_warning) {
      return false;
    }
    if (this->sd_brake_warning1 != other.sd_brake_warning1) {
      return false;
    }
    if (this->sd_brake_warning2 != other.sd_brake_warning2) {
      return false;
    }
    if (this->sd_brake_warning3 != other.sd_brake_warning3) {
      return false;
    }
    if (this->sd_steer_warning1 != other.sd_steer_warning1) {
      return false;
    }
    if (this->sd_steer_warning2 != other.sd_steer_warning2) {
      return false;
    }
    if (this->sd_steer_warning3 != other.sd_steer_warning3) {
      return false;
    }
    if (this->est1_oos_front_brk != other.est1_oos_front_brk) {
      return false;
    }
    if (this->est2_oos_rear_brk != other.est2_oos_rear_brk) {
      return false;
    }
    if (this->est3_low_eng_speed != other.est3_low_eng_speed) {
      return false;
    }
    if (this->est4_sd_comms_loss != other.est4_sd_comms_loss) {
      return false;
    }
    if (this->est5_motec_comms_loss != other.est5_motec_comms_loss) {
      return false;
    }
    if (this->est6_sd_ebrake != other.est6_sd_ebrake) {
      return false;
    }
    if (this->adlink_hb_lost != other.adlink_hb_lost) {
      return false;
    }
    if (this->rc_lost != other.rc_lost) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticReport_

// alias to use template instance with default allocator
using DiagnosticReport =
  deep_orange_msgs::msg::DiagnosticReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_HPP_
