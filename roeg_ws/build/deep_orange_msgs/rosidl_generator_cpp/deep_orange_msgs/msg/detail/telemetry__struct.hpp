// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deep_orange_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_

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
# define DEPRECATED__deep_orange_msgs__msg__Telemetry __attribute__((deprecated))
#else
# define DEPRECATED__deep_orange_msgs__msg__Telemetry __declspec(deprecated)
#endif

namespace deep_orange_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetry_
{
  using Type = Telemetry_<ContainerAllocator>;

  explicit Telemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->off_grid_power_connection = false;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
      this->track_cond_ack = 0;
      this->veh_sig_ack = 0;
      this->ct_state = 0;
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
      this->look_ahead_error = 0.0;
      this->lateral_error = 0.0;
    }
  }

  explicit Telemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->off_grid_power_connection = false;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
      this->track_cond_ack = 0;
      this->veh_sig_ack = 0;
      this->ct_state = 0;
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
      this->look_ahead_error = 0.0;
      this->lateral_error = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _off_grid_power_connection_type =
    bool;
  _off_grid_power_connection_type off_grid_power_connection;
  using _safety_switch_state_type =
    uint8_t;
  _safety_switch_state_type safety_switch_state;
  using _mode_switch_state_type =
    bool;
  _mode_switch_state_type mode_switch_state;
  using _sys_state_type =
    uint8_t;
  _sys_state_type sys_state;
  using _track_cond_ack_type =
    uint8_t;
  _track_cond_ack_type track_cond_ack;
  using _veh_sig_ack_type =
    uint8_t;
  _veh_sig_ack_type veh_sig_ack;
  using _ct_state_type =
    uint8_t;
  _ct_state_type ct_state;
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
  using _look_ahead_error_type =
    double;
  _look_ahead_error_type look_ahead_error;
  using _lateral_error_type =
    double;
  _lateral_error_type lateral_error;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__off_grid_power_connection(
    const bool & _arg)
  {
    this->off_grid_power_connection = _arg;
    return *this;
  }
  Type & set__safety_switch_state(
    const uint8_t & _arg)
  {
    this->safety_switch_state = _arg;
    return *this;
  }
  Type & set__mode_switch_state(
    const bool & _arg)
  {
    this->mode_switch_state = _arg;
    return *this;
  }
  Type & set__sys_state(
    const uint8_t & _arg)
  {
    this->sys_state = _arg;
    return *this;
  }
  Type & set__track_cond_ack(
    const uint8_t & _arg)
  {
    this->track_cond_ack = _arg;
    return *this;
  }
  Type & set__veh_sig_ack(
    const uint8_t & _arg)
  {
    this->veh_sig_ack = _arg;
    return *this;
  }
  Type & set__ct_state(
    const uint8_t & _arg)
  {
    this->ct_state = _arg;
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
  Type & set__look_ahead_error(
    const double & _arg)
  {
    this->look_ahead_error = _arg;
    return *this;
  }
  Type & set__lateral_error(
    const double & _arg)
  {
    this->lateral_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deep_orange_msgs::msg::Telemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const deep_orange_msgs::msg::Telemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::Telemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deep_orange_msgs::msg::Telemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deep_orange_msgs__msg__Telemetry
    std::shared_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deep_orange_msgs__msg__Telemetry
    std::shared_ptr<deep_orange_msgs::msg::Telemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetry_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->off_grid_power_connection != other.off_grid_power_connection) {
      return false;
    }
    if (this->safety_switch_state != other.safety_switch_state) {
      return false;
    }
    if (this->mode_switch_state != other.mode_switch_state) {
      return false;
    }
    if (this->sys_state != other.sys_state) {
      return false;
    }
    if (this->track_cond_ack != other.track_cond_ack) {
      return false;
    }
    if (this->veh_sig_ack != other.veh_sig_ack) {
      return false;
    }
    if (this->ct_state != other.ct_state) {
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
    if (this->look_ahead_error != other.look_ahead_error) {
      return false;
    }
    if (this->lateral_error != other.lateral_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetry_

// alias to use template instance with default allocator
using Telemetry =
  deep_orange_msgs::msg::Telemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
