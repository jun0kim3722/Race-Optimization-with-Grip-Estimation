// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/telemetry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_Telemetry_lateral_error
{
public:
  explicit Init_Telemetry_lateral_error(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::Telemetry lateral_error(::deep_orange_msgs::msg::Telemetry::_lateral_error_type arg)
  {
    msg_.lateral_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_look_ahead_error
{
public:
  explicit Init_Telemetry_look_ahead_error(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_lateral_error look_ahead_error(::deep_orange_msgs::msg::Telemetry::_look_ahead_error_type arg)
  {
    msg_.look_ahead_error = std::move(arg);
    return Init_Telemetry_lateral_error(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_vehicle_speed_kmph
{
public:
  explicit Init_Telemetry_vehicle_speed_kmph(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_look_ahead_error vehicle_speed_kmph(::deep_orange_msgs::msg::Telemetry::_vehicle_speed_kmph_type arg)
  {
    msg_.vehicle_speed_kmph = std::move(arg);
    return Init_Telemetry_look_ahead_error(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_transmission_oil_temperature
{
public:
  explicit Init_Telemetry_transmission_oil_temperature(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_vehicle_speed_kmph transmission_oil_temperature(::deep_orange_msgs::msg::Telemetry::_transmission_oil_temperature_type arg)
  {
    msg_.transmission_oil_temperature = std::move(arg);
    return Init_Telemetry_vehicle_speed_kmph(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_transmission_accumulator_pressure
{
public:
  explicit Init_Telemetry_transmission_accumulator_pressure(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_transmission_oil_temperature transmission_accumulator_pressure(::deep_orange_msgs::msg::Telemetry::_transmission_accumulator_pressure_type arg)
  {
    msg_.transmission_accumulator_pressure = std::move(arg);
    return Init_Telemetry_transmission_oil_temperature(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_transmission_oil_pressure
{
public:
  explicit Init_Telemetry_transmission_oil_pressure(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_transmission_accumulator_pressure transmission_oil_pressure(::deep_orange_msgs::msg::Telemetry::_transmission_oil_pressure_type arg)
  {
    msg_.transmission_oil_pressure = std::move(arg);
    return Init_Telemetry_transmission_accumulator_pressure(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_gear_shift_status
{
public:
  explicit Init_Telemetry_gear_shift_status(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_transmission_oil_pressure gear_shift_status(::deep_orange_msgs::msg::Telemetry::_gear_shift_status_type arg)
  {
    msg_.gear_shift_status = std::move(arg);
    return Init_Telemetry_transmission_oil_pressure(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_current_gear
{
public:
  explicit Init_Telemetry_current_gear(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_gear_shift_status current_gear(::deep_orange_msgs::msg::Telemetry::_current_gear_type arg)
  {
    msg_.current_gear = std::move(arg);
    return Init_Telemetry_gear_shift_status(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_throttle_position
{
public:
  explicit Init_Telemetry_throttle_position(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_current_gear throttle_position(::deep_orange_msgs::msg::Telemetry::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_Telemetry_current_gear(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_run_switch_status
{
public:
  explicit Init_Telemetry_engine_run_switch_status(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_throttle_position engine_run_switch_status(::deep_orange_msgs::msg::Telemetry::_engine_run_switch_status_type arg)
  {
    msg_.engine_run_switch_status = std::move(arg);
    return Init_Telemetry_throttle_position(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_on_status
{
public:
  explicit Init_Telemetry_engine_on_status(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_run_switch_status engine_on_status(::deep_orange_msgs::msg::Telemetry::_engine_on_status_type arg)
  {
    msg_.engine_on_status = std::move(arg);
    return Init_Telemetry_engine_run_switch_status(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_rpm
{
public:
  explicit Init_Telemetry_engine_rpm(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_on_status engine_rpm(::deep_orange_msgs::msg::Telemetry::_engine_rpm_type arg)
  {
    msg_.engine_rpm = std::move(arg);
    return Init_Telemetry_engine_on_status(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_coolant_pressure
{
public:
  explicit Init_Telemetry_engine_coolant_pressure(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_rpm engine_coolant_pressure(::deep_orange_msgs::msg::Telemetry::_engine_coolant_pressure_type arg)
  {
    msg_.engine_coolant_pressure = std::move(arg);
    return Init_Telemetry_engine_rpm(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_coolant_temperature
{
public:
  explicit Init_Telemetry_engine_coolant_temperature(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_coolant_pressure engine_coolant_temperature(::deep_orange_msgs::msg::Telemetry::_engine_coolant_temperature_type arg)
  {
    msg_.engine_coolant_temperature = std::move(arg);
    return Init_Telemetry_engine_coolant_pressure(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_oil_temperature
{
public:
  explicit Init_Telemetry_engine_oil_temperature(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_coolant_temperature engine_oil_temperature(::deep_orange_msgs::msg::Telemetry::_engine_oil_temperature_type arg)
  {
    msg_.engine_oil_temperature = std::move(arg);
    return Init_Telemetry_engine_coolant_temperature(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_engine_oil_pressure
{
public:
  explicit Init_Telemetry_engine_oil_pressure(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_oil_temperature engine_oil_pressure(::deep_orange_msgs::msg::Telemetry::_engine_oil_pressure_type arg)
  {
    msg_.engine_oil_pressure = std::move(arg);
    return Init_Telemetry_engine_oil_temperature(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_fuel_pressure
{
public:
  explicit Init_Telemetry_fuel_pressure(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_engine_oil_pressure fuel_pressure(::deep_orange_msgs::msg::Telemetry::_fuel_pressure_type arg)
  {
    msg_.fuel_pressure = std::move(arg);
    return Init_Telemetry_engine_oil_pressure(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_fuel_level
{
public:
  explicit Init_Telemetry_fuel_level(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_fuel_pressure fuel_level(::deep_orange_msgs::msg::Telemetry::_fuel_level_type arg)
  {
    msg_.fuel_level = std::move(arg);
    return Init_Telemetry_fuel_pressure(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_lambda_sensor
{
public:
  explicit Init_Telemetry_lambda_sensor(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_fuel_level lambda_sensor(::deep_orange_msgs::msg::Telemetry::_lambda_sensor_type arg)
  {
    msg_.lambda_sensor = std::move(arg);
    return Init_Telemetry_fuel_level(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_map_sensor
{
public:
  explicit Init_Telemetry_map_sensor(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_lambda_sensor map_sensor(::deep_orange_msgs::msg::Telemetry::_map_sensor_type arg)
  {
    msg_.map_sensor = std::move(arg);
    return Init_Telemetry_lambda_sensor(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_ct_state
{
public:
  explicit Init_Telemetry_ct_state(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_map_sensor ct_state(::deep_orange_msgs::msg::Telemetry::_ct_state_type arg)
  {
    msg_.ct_state = std::move(arg);
    return Init_Telemetry_map_sensor(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_veh_sig_ack
{
public:
  explicit Init_Telemetry_veh_sig_ack(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_ct_state veh_sig_ack(::deep_orange_msgs::msg::Telemetry::_veh_sig_ack_type arg)
  {
    msg_.veh_sig_ack = std::move(arg);
    return Init_Telemetry_ct_state(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_track_cond_ack
{
public:
  explicit Init_Telemetry_track_cond_ack(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_veh_sig_ack track_cond_ack(::deep_orange_msgs::msg::Telemetry::_track_cond_ack_type arg)
  {
    msg_.track_cond_ack = std::move(arg);
    return Init_Telemetry_veh_sig_ack(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_sys_state
{
public:
  explicit Init_Telemetry_sys_state(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_track_cond_ack sys_state(::deep_orange_msgs::msg::Telemetry::_sys_state_type arg)
  {
    msg_.sys_state = std::move(arg);
    return Init_Telemetry_track_cond_ack(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_mode_switch_state
{
public:
  explicit Init_Telemetry_mode_switch_state(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_sys_state mode_switch_state(::deep_orange_msgs::msg::Telemetry::_mode_switch_state_type arg)
  {
    msg_.mode_switch_state = std::move(arg);
    return Init_Telemetry_sys_state(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_safety_switch_state
{
public:
  explicit Init_Telemetry_safety_switch_state(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_mode_switch_state safety_switch_state(::deep_orange_msgs::msg::Telemetry::_safety_switch_state_type arg)
  {
    msg_.safety_switch_state = std::move(arg);
    return Init_Telemetry_mode_switch_state(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_off_grid_power_connection
{
public:
  explicit Init_Telemetry_off_grid_power_connection(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_safety_switch_state off_grid_power_connection(::deep_orange_msgs::msg::Telemetry::_off_grid_power_connection_type arg)
  {
    msg_.off_grid_power_connection = std::move(arg);
    return Init_Telemetry_safety_switch_state(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_battery_voltage
{
public:
  explicit Init_Telemetry_battery_voltage(::deep_orange_msgs::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_off_grid_power_connection battery_voltage(::deep_orange_msgs::msg::Telemetry::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_Telemetry_off_grid_power_connection(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

class Init_Telemetry_stamp
{
public:
  Init_Telemetry_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Telemetry_battery_voltage stamp(::deep_orange_msgs::msg::Telemetry::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Telemetry_battery_voltage(msg_);
  }

private:
  ::deep_orange_msgs::msg::Telemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::Telemetry>()
{
  return deep_orange_msgs::msg::builder::Init_Telemetry_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
