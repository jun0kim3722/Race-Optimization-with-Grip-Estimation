// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__PtReport __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__PtReport __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtReport_
{
  using Type = PtReport_<ContainerAllocator>;

  explicit PtReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_sensor = 0.0f;
      this->lambda_sensor = 0.0f;
      this->fuel_level = 0.0f;
      this->fuel_pressure = 0.0f;
      this->engine_oil_pressure = 0.0f;
      this->engine_oil_temperature = 0.0f;
      this->engine_coolant_temperature = 0.0f;
      this->engine_coolant_pressure = 0.0f;
      this->engine_rpm = 0.0f;
      this->engine_on_status = false;
      this->engine_run_switch_status = false;
      this->throttle_position = 0.0f;
      this->current_gear = 0;
      this->gear_shift_status = 0;
      this->transmission_oil_pressure = 0.0f;
      this->transmission_accumulator_pressure = 0.0f;
      this->transmission_oil_temperature = 0.0f;
      this->vehicle_speed_kmph = 0.0f;
      this->torque_wheels = 0.0f;
      this->driver_traction_aim_switch = 0;
      this->driver_traction_range_switch = 0;
    }
  }

  explicit PtReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_sensor = 0.0f;
      this->lambda_sensor = 0.0f;
      this->fuel_level = 0.0f;
      this->fuel_pressure = 0.0f;
      this->engine_oil_pressure = 0.0f;
      this->engine_oil_temperature = 0.0f;
      this->engine_coolant_temperature = 0.0f;
      this->engine_coolant_pressure = 0.0f;
      this->engine_rpm = 0.0f;
      this->engine_on_status = false;
      this->engine_run_switch_status = false;
      this->throttle_position = 0.0f;
      this->current_gear = 0;
      this->gear_shift_status = 0;
      this->transmission_oil_pressure = 0.0f;
      this->transmission_accumulator_pressure = 0.0f;
      this->transmission_oil_temperature = 0.0f;
      this->vehicle_speed_kmph = 0.0f;
      this->torque_wheels = 0.0f;
      this->driver_traction_aim_switch = 0;
      this->driver_traction_range_switch = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _map_sensor_type =
    float;
  _map_sensor_type map_sensor;
  using _lambda_sensor_type =
    float;
  _lambda_sensor_type lambda_sensor;
  using _fuel_level_type =
    float;
  _fuel_level_type fuel_level;
  using _fuel_pressure_type =
    float;
  _fuel_pressure_type fuel_pressure;
  using _engine_oil_pressure_type =
    float;
  _engine_oil_pressure_type engine_oil_pressure;
  using _engine_oil_temperature_type =
    float;
  _engine_oil_temperature_type engine_oil_temperature;
  using _engine_coolant_temperature_type =
    float;
  _engine_coolant_temperature_type engine_coolant_temperature;
  using _engine_coolant_pressure_type =
    float;
  _engine_coolant_pressure_type engine_coolant_pressure;
  using _engine_rpm_type =
    float;
  _engine_rpm_type engine_rpm;
  using _engine_on_status_type =
    bool;
  _engine_on_status_type engine_on_status;
  using _engine_run_switch_status_type =
    bool;
  _engine_run_switch_status_type engine_run_switch_status;
  using _throttle_position_type =
    float;
  _throttle_position_type throttle_position;
  using _current_gear_type =
    int8_t;
  _current_gear_type current_gear;
  using _gear_shift_status_type =
    int8_t;
  _gear_shift_status_type gear_shift_status;
  using _transmission_oil_pressure_type =
    float;
  _transmission_oil_pressure_type transmission_oil_pressure;
  using _transmission_accumulator_pressure_type =
    float;
  _transmission_accumulator_pressure_type transmission_accumulator_pressure;
  using _transmission_oil_temperature_type =
    float;
  _transmission_oil_temperature_type transmission_oil_temperature;
  using _vehicle_speed_kmph_type =
    float;
  _vehicle_speed_kmph_type vehicle_speed_kmph;
  using _torque_wheels_type =
    float;
  _torque_wheels_type torque_wheels;
  using _driver_traction_aim_switch_type =
    uint8_t;
  _driver_traction_aim_switch_type driver_traction_aim_switch;
  using _driver_traction_range_switch_type =
    uint8_t;
  _driver_traction_range_switch_type driver_traction_range_switch;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__map_sensor(
    const float & _arg)
  {
    this->map_sensor = _arg;
    return *this;
  }
  Type & set__lambda_sensor(
    const float & _arg)
  {
    this->lambda_sensor = _arg;
    return *this;
  }
  Type & set__fuel_level(
    const float & _arg)
  {
    this->fuel_level = _arg;
    return *this;
  }
  Type & set__fuel_pressure(
    const float & _arg)
  {
    this->fuel_pressure = _arg;
    return *this;
  }
  Type & set__engine_oil_pressure(
    const float & _arg)
  {
    this->engine_oil_pressure = _arg;
    return *this;
  }
  Type & set__engine_oil_temperature(
    const float & _arg)
  {
    this->engine_oil_temperature = _arg;
    return *this;
  }
  Type & set__engine_coolant_temperature(
    const float & _arg)
  {
    this->engine_coolant_temperature = _arg;
    return *this;
  }
  Type & set__engine_coolant_pressure(
    const float & _arg)
  {
    this->engine_coolant_pressure = _arg;
    return *this;
  }
  Type & set__engine_rpm(
    const float & _arg)
  {
    this->engine_rpm = _arg;
    return *this;
  }
  Type & set__engine_on_status(
    const bool & _arg)
  {
    this->engine_on_status = _arg;
    return *this;
  }
  Type & set__engine_run_switch_status(
    const bool & _arg)
  {
    this->engine_run_switch_status = _arg;
    return *this;
  }
  Type & set__throttle_position(
    const float & _arg)
  {
    this->throttle_position = _arg;
    return *this;
  }
  Type & set__current_gear(
    const int8_t & _arg)
  {
    this->current_gear = _arg;
    return *this;
  }
  Type & set__gear_shift_status(
    const int8_t & _arg)
  {
    this->gear_shift_status = _arg;
    return *this;
  }
  Type & set__transmission_oil_pressure(
    const float & _arg)
  {
    this->transmission_oil_pressure = _arg;
    return *this;
  }
  Type & set__transmission_accumulator_pressure(
    const float & _arg)
  {
    this->transmission_accumulator_pressure = _arg;
    return *this;
  }
  Type & set__transmission_oil_temperature(
    const float & _arg)
  {
    this->transmission_oil_temperature = _arg;
    return *this;
  }
  Type & set__vehicle_speed_kmph(
    const float & _arg)
  {
    this->vehicle_speed_kmph = _arg;
    return *this;
  }
  Type & set__torque_wheels(
    const float & _arg)
  {
    this->torque_wheels = _arg;
    return *this;
  }
  Type & set__driver_traction_aim_switch(
    const uint8_t & _arg)
  {
    this->driver_traction_aim_switch = _arg;
    return *this;
  }
  Type & set__driver_traction_range_switch(
    const uint8_t & _arg)
  {
    this->driver_traction_range_switch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::PtReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::PtReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::PtReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::PtReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__PtReport
    std::shared_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__PtReport
    std::shared_ptr<deep_orange_msgs::msg::PtReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->map_sensor != other.map_sensor) {
      return false;
    }
    if (this->lambda_sensor != other.lambda_sensor) {
      return false;
    }
    if (this->fuel_level != other.fuel_level) {
      return false;
    }
    if (this->fuel_pressure != other.fuel_pressure) {
      return false;
    }
    if (this->engine_oil_pressure != other.engine_oil_pressure) {
      return false;
    }
    if (this->engine_oil_temperature != other.engine_oil_temperature) {
      return false;
    }
    if (this->engine_coolant_temperature != other.engine_coolant_temperature) {
      return false;
    }
    if (this->engine_coolant_pressure != other.engine_coolant_pressure) {
      return false;
    }
    if (this->engine_rpm != other.engine_rpm) {
      return false;
    }
    if (this->engine_on_status != other.engine_on_status) {
      return false;
    }
    if (this->engine_run_switch_status != other.engine_run_switch_status) {
      return false;
    }
    if (this->throttle_position != other.throttle_position) {
      return false;
    }
    if (this->current_gear != other.current_gear) {
      return false;
    }
    if (this->gear_shift_status != other.gear_shift_status) {
      return false;
    }
    if (this->transmission_oil_pressure != other.transmission_oil_pressure) {
      return false;
    }
    if (this->transmission_accumulator_pressure != other.transmission_accumulator_pressure) {
      return false;
    }
    if (this->transmission_oil_temperature != other.transmission_oil_temperature) {
      return false;
    }
    if (this->vehicle_speed_kmph != other.vehicle_speed_kmph) {
      return false;
    }
    if (this->torque_wheels != other.torque_wheels) {
      return false;
    }
    if (this->driver_traction_aim_switch != other.driver_traction_aim_switch) {
      return false;
    }
    if (this->driver_traction_range_switch != other.driver_traction_range_switch) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtReport_

// alias to use template instance with default allocator
using PtReport =
  deep_orange_msgs::msg::PtReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_HPP_
