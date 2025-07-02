// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__JoystickCommand __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__JoystickCommand __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoystickCommand_
{
  using Type = JoystickCommand_<ContainerAllocator>;

  explicit JoystickCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0;
      this->emergency_stop = 0;
      this->coordinated_stop = 0;
      this->joy_enable = 0;
      this->steering_cmd = 0.0f;
      this->brake_cmd = 0.0f;
      this->accelerator_cmd = 0.0f;
      this->gear_cmd = 0.0f;
      this->joystick_healthy = false;
    }
  }

  explicit JoystickCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0;
      this->emergency_stop = 0;
      this->coordinated_stop = 0;
      this->joy_enable = 0;
      this->steering_cmd = 0.0f;
      this->brake_cmd = 0.0f;
      this->accelerator_cmd = 0.0f;
      this->gear_cmd = 0.0f;
      this->joystick_healthy = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _counter_type =
    uint8_t;
  _counter_type counter;
  using _emergency_stop_type =
    uint8_t;
  _emergency_stop_type emergency_stop;
  using _coordinated_stop_type =
    uint8_t;
  _coordinated_stop_type coordinated_stop;
  using _joy_enable_type =
    uint8_t;
  _joy_enable_type joy_enable;
  using _steering_cmd_type =
    float;
  _steering_cmd_type steering_cmd;
  using _brake_cmd_type =
    float;
  _brake_cmd_type brake_cmd;
  using _accelerator_cmd_type =
    float;
  _accelerator_cmd_type accelerator_cmd;
  using _gear_cmd_type =
    float;
  _gear_cmd_type gear_cmd;
  using _joystick_healthy_type =
    bool;
  _joystick_healthy_type joystick_healthy;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__counter(
    const uint8_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const uint8_t & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__coordinated_stop(
    const uint8_t & _arg)
  {
    this->coordinated_stop = _arg;
    return *this;
  }
  Type & set__joy_enable(
    const uint8_t & _arg)
  {
    this->joy_enable = _arg;
    return *this;
  }
  Type & set__steering_cmd(
    const float & _arg)
  {
    this->steering_cmd = _arg;
    return *this;
  }
  Type & set__brake_cmd(
    const float & _arg)
  {
    this->brake_cmd = _arg;
    return *this;
  }
  Type & set__accelerator_cmd(
    const float & _arg)
  {
    this->accelerator_cmd = _arg;
    return *this;
  }
  Type & set__gear_cmd(
    const float & _arg)
  {
    this->gear_cmd = _arg;
    return *this;
  }
  Type & set__joystick_healthy(
    const bool & _arg)
  {
    this->joystick_healthy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__JoystickCommand
    std::shared_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__JoystickCommand
    std::shared_ptr<deep_orange_msgs::msg::JoystickCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoystickCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->coordinated_stop != other.coordinated_stop) {
      return false;
    }
    if (this->joy_enable != other.joy_enable) {
      return false;
    }
    if (this->steering_cmd != other.steering_cmd) {
      return false;
    }
    if (this->brake_cmd != other.brake_cmd) {
      return false;
    }
    if (this->accelerator_cmd != other.accelerator_cmd) {
      return false;
    }
    if (this->gear_cmd != other.gear_cmd) {
      return false;
    }
    if (this->joystick_healthy != other.joystick_healthy) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoystickCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoystickCommand_

// alias to use template instance with default allocator
using JoystickCommand =
  deep_orange_msgs::msg::JoystickCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__JOYSTICK_COMMAND__STRUCT_HPP_
