// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/pt_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deep_orange_msgs/msg/detail/pt_report__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace deep_orange_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_serialize(
  const deep_orange_msgs::msg::PtReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: map_sensor
  cdr << ros_message.map_sensor;
  // Member: lambda_sensor
  cdr << ros_message.lambda_sensor;
  // Member: fuel_level
  cdr << ros_message.fuel_level;
  // Member: fuel_pressure
  cdr << ros_message.fuel_pressure;
  // Member: engine_oil_pressure
  cdr << ros_message.engine_oil_pressure;
  // Member: engine_oil_temperature
  cdr << ros_message.engine_oil_temperature;
  // Member: engine_coolant_temperature
  cdr << ros_message.engine_coolant_temperature;
  // Member: engine_coolant_pressure
  cdr << ros_message.engine_coolant_pressure;
  // Member: engine_rpm
  cdr << ros_message.engine_rpm;
  // Member: engine_on_status
  cdr << (ros_message.engine_on_status ? true : false);
  // Member: engine_run_switch_status
  cdr << (ros_message.engine_run_switch_status ? true : false);
  // Member: throttle_position
  cdr << ros_message.throttle_position;
  // Member: current_gear
  cdr << ros_message.current_gear;
  // Member: gear_shift_status
  cdr << ros_message.gear_shift_status;
  // Member: transmission_oil_pressure
  cdr << ros_message.transmission_oil_pressure;
  // Member: transmission_accumulator_pressure
  cdr << ros_message.transmission_accumulator_pressure;
  // Member: transmission_oil_temperature
  cdr << ros_message.transmission_oil_temperature;
  // Member: vehicle_speed_kmph
  cdr << ros_message.vehicle_speed_kmph;
  // Member: torque_wheels
  cdr << ros_message.torque_wheels;
  // Member: driver_traction_aim_switch
  cdr << ros_message.driver_traction_aim_switch;
  // Member: driver_traction_range_switch
  cdr << ros_message.driver_traction_range_switch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deep_orange_msgs::msg::PtReport & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: map_sensor
  cdr >> ros_message.map_sensor;

  // Member: lambda_sensor
  cdr >> ros_message.lambda_sensor;

  // Member: fuel_level
  cdr >> ros_message.fuel_level;

  // Member: fuel_pressure
  cdr >> ros_message.fuel_pressure;

  // Member: engine_oil_pressure
  cdr >> ros_message.engine_oil_pressure;

  // Member: engine_oil_temperature
  cdr >> ros_message.engine_oil_temperature;

  // Member: engine_coolant_temperature
  cdr >> ros_message.engine_coolant_temperature;

  // Member: engine_coolant_pressure
  cdr >> ros_message.engine_coolant_pressure;

  // Member: engine_rpm
  cdr >> ros_message.engine_rpm;

  // Member: engine_on_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_on_status = tmp ? true : false;
  }

  // Member: engine_run_switch_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_run_switch_status = tmp ? true : false;
  }

  // Member: throttle_position
  cdr >> ros_message.throttle_position;

  // Member: current_gear
  cdr >> ros_message.current_gear;

  // Member: gear_shift_status
  cdr >> ros_message.gear_shift_status;

  // Member: transmission_oil_pressure
  cdr >> ros_message.transmission_oil_pressure;

  // Member: transmission_accumulator_pressure
  cdr >> ros_message.transmission_accumulator_pressure;

  // Member: transmission_oil_temperature
  cdr >> ros_message.transmission_oil_temperature;

  // Member: vehicle_speed_kmph
  cdr >> ros_message.vehicle_speed_kmph;

  // Member: torque_wheels
  cdr >> ros_message.torque_wheels;

  // Member: driver_traction_aim_switch
  cdr >> ros_message.driver_traction_aim_switch;

  // Member: driver_traction_range_switch
  cdr >> ros_message.driver_traction_range_switch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
get_serialized_size(
  const deep_orange_msgs::msg::PtReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: map_sensor
  {
    size_t item_size = sizeof(ros_message.map_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_sensor
  {
    size_t item_size = sizeof(ros_message.lambda_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_level
  {
    size_t item_size = sizeof(ros_message.fuel_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure
  {
    size_t item_size = sizeof(ros_message.fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message.engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message.engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_coolant_temperature
  {
    size_t item_size = sizeof(ros_message.engine_coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_coolant_pressure
  {
    size_t item_size = sizeof(ros_message.engine_coolant_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_rpm
  {
    size_t item_size = sizeof(ros_message.engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_on_status
  {
    size_t item_size = sizeof(ros_message.engine_on_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_run_switch_status
  {
    size_t item_size = sizeof(ros_message.engine_run_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_position
  {
    size_t item_size = sizeof(ros_message.throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_gear
  {
    size_t item_size = sizeof(ros_message.current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_shift_status
  {
    size_t item_size = sizeof(ros_message.gear_shift_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_oil_pressure
  {
    size_t item_size = sizeof(ros_message.transmission_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_accumulator_pressure
  {
    size_t item_size = sizeof(ros_message.transmission_accumulator_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmission_oil_temperature
  {
    size_t item_size = sizeof(ros_message.transmission_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed_kmph
  {
    size_t item_size = sizeof(ros_message.vehicle_speed_kmph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_wheels
  {
    size_t item_size = sizeof(ros_message.torque_wheels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_traction_aim_switch
  {
    size_t item_size = sizeof(ros_message.driver_traction_aim_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_traction_range_switch
  {
    size_t item_size = sizeof(ros_message.driver_traction_range_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
max_serialized_size_PtReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: map_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lambda_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_oil_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_oil_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_coolant_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_coolant_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_on_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_run_switch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_shift_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmission_oil_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transmission_accumulator_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: transmission_oil_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed_kmph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque_wheels
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_traction_aim_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driver_traction_range_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PtReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::PtReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PtReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deep_orange_msgs::msg::PtReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PtReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::PtReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PtReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PtReport(full_bounded, 0);
}

static message_type_support_callbacks_t _PtReport__callbacks = {
  "deep_orange_msgs::msg",
  "PtReport",
  _PtReport__cdr_serialize,
  _PtReport__cdr_deserialize,
  _PtReport__get_serialized_size,
  _PtReport__max_serialized_size
};

static rosidl_message_type_support_t _PtReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PtReport__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deep_orange_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deep_orange_msgs::msg::PtReport>()
{
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_PtReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deep_orange_msgs, msg, PtReport)() {
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_PtReport__handle;
}

#ifdef __cplusplus
}
#endif
