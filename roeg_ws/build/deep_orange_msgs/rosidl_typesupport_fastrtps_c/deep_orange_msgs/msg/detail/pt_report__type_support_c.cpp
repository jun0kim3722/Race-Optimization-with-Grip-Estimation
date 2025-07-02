// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deep_orange_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/pt_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deep_orange_msgs/msg/detail/pt_report__struct.h"
#include "deep_orange_msgs/msg/detail/pt_report__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deep_orange_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _PtReport__ros_msg_type = deep_orange_msgs__msg__PtReport;

static bool _PtReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PtReport__ros_msg_type * ros_message = static_cast<const _PtReport__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: map_sensor
  {
    cdr << ros_message->map_sensor;
  }

  // Field name: lambda_sensor
  {
    cdr << ros_message->lambda_sensor;
  }

  // Field name: fuel_level
  {
    cdr << ros_message->fuel_level;
  }

  // Field name: fuel_pressure
  {
    cdr << ros_message->fuel_pressure;
  }

  // Field name: engine_oil_pressure
  {
    cdr << ros_message->engine_oil_pressure;
  }

  // Field name: engine_oil_temperature
  {
    cdr << ros_message->engine_oil_temperature;
  }

  // Field name: engine_coolant_temperature
  {
    cdr << ros_message->engine_coolant_temperature;
  }

  // Field name: engine_coolant_pressure
  {
    cdr << ros_message->engine_coolant_pressure;
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: engine_on_status
  {
    cdr << (ros_message->engine_on_status ? true : false);
  }

  // Field name: engine_run_switch_status
  {
    cdr << (ros_message->engine_run_switch_status ? true : false);
  }

  // Field name: throttle_position
  {
    cdr << ros_message->throttle_position;
  }

  // Field name: current_gear
  {
    cdr << ros_message->current_gear;
  }

  // Field name: gear_shift_status
  {
    cdr << ros_message->gear_shift_status;
  }

  // Field name: transmission_oil_pressure
  {
    cdr << ros_message->transmission_oil_pressure;
  }

  // Field name: transmission_accumulator_pressure
  {
    cdr << ros_message->transmission_accumulator_pressure;
  }

  // Field name: transmission_oil_temperature
  {
    cdr << ros_message->transmission_oil_temperature;
  }

  // Field name: vehicle_speed_kmph
  {
    cdr << ros_message->vehicle_speed_kmph;
  }

  // Field name: torque_wheels
  {
    cdr << ros_message->torque_wheels;
  }

  // Field name: driver_traction_aim_switch
  {
    cdr << ros_message->driver_traction_aim_switch;
  }

  // Field name: driver_traction_range_switch
  {
    cdr << ros_message->driver_traction_range_switch;
  }

  return true;
}

static bool _PtReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PtReport__ros_msg_type * ros_message = static_cast<_PtReport__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: map_sensor
  {
    cdr >> ros_message->map_sensor;
  }

  // Field name: lambda_sensor
  {
    cdr >> ros_message->lambda_sensor;
  }

  // Field name: fuel_level
  {
    cdr >> ros_message->fuel_level;
  }

  // Field name: fuel_pressure
  {
    cdr >> ros_message->fuel_pressure;
  }

  // Field name: engine_oil_pressure
  {
    cdr >> ros_message->engine_oil_pressure;
  }

  // Field name: engine_oil_temperature
  {
    cdr >> ros_message->engine_oil_temperature;
  }

  // Field name: engine_coolant_temperature
  {
    cdr >> ros_message->engine_coolant_temperature;
  }

  // Field name: engine_coolant_pressure
  {
    cdr >> ros_message->engine_coolant_pressure;
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: engine_on_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_on_status = tmp ? true : false;
  }

  // Field name: engine_run_switch_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_run_switch_status = tmp ? true : false;
  }

  // Field name: throttle_position
  {
    cdr >> ros_message->throttle_position;
  }

  // Field name: current_gear
  {
    cdr >> ros_message->current_gear;
  }

  // Field name: gear_shift_status
  {
    cdr >> ros_message->gear_shift_status;
  }

  // Field name: transmission_oil_pressure
  {
    cdr >> ros_message->transmission_oil_pressure;
  }

  // Field name: transmission_accumulator_pressure
  {
    cdr >> ros_message->transmission_accumulator_pressure;
  }

  // Field name: transmission_oil_temperature
  {
    cdr >> ros_message->transmission_oil_temperature;
  }

  // Field name: vehicle_speed_kmph
  {
    cdr >> ros_message->vehicle_speed_kmph;
  }

  // Field name: torque_wheels
  {
    cdr >> ros_message->torque_wheels;
  }

  // Field name: driver_traction_aim_switch
  {
    cdr >> ros_message->driver_traction_aim_switch;
  }

  // Field name: driver_traction_range_switch
  {
    cdr >> ros_message->driver_traction_range_switch;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t get_serialized_size_deep_orange_msgs__msg__PtReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PtReport__ros_msg_type * ros_message = static_cast<const _PtReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name map_sensor
  {
    size_t item_size = sizeof(ros_message->map_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_sensor
  {
    size_t item_size = sizeof(ros_message->lambda_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_level
  {
    size_t item_size = sizeof(ros_message->fuel_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure
  {
    size_t item_size = sizeof(ros_message->fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message->engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message->engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_coolant_temperature
  {
    size_t item_size = sizeof(ros_message->engine_coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_coolant_pressure
  {
    size_t item_size = sizeof(ros_message->engine_coolant_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_on_status
  {
    size_t item_size = sizeof(ros_message->engine_on_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_run_switch_status
  {
    size_t item_size = sizeof(ros_message->engine_run_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_position
  {
    size_t item_size = sizeof(ros_message->throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_gear
  {
    size_t item_size = sizeof(ros_message->current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_shift_status
  {
    size_t item_size = sizeof(ros_message->gear_shift_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_oil_pressure
  {
    size_t item_size = sizeof(ros_message->transmission_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_accumulator_pressure
  {
    size_t item_size = sizeof(ros_message->transmission_accumulator_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_oil_temperature
  {
    size_t item_size = sizeof(ros_message->transmission_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_kmph
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_kmph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_wheels
  {
    size_t item_size = sizeof(ros_message->torque_wheels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_traction_aim_switch
  {
    size_t item_size = sizeof(ros_message->driver_traction_aim_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_traction_range_switch
  {
    size_t item_size = sizeof(ros_message->driver_traction_range_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PtReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deep_orange_msgs__msg__PtReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deep_orange_msgs
size_t max_serialized_size_deep_orange_msgs__msg__PtReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: map_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lambda_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_oil_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_oil_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_coolant_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_coolant_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_on_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_run_switch_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_shift_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmission_oil_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transmission_accumulator_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transmission_oil_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed_kmph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_wheels
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_traction_aim_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driver_traction_range_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PtReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_deep_orange_msgs__msg__PtReport(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PtReport = {
  "deep_orange_msgs::msg",
  "PtReport",
  _PtReport__cdr_serialize,
  _PtReport__cdr_deserialize,
  _PtReport__get_serialized_size,
  _PtReport__max_serialized_size
};

static rosidl_message_type_support_t _PtReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PtReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deep_orange_msgs, msg, PtReport)() {
  return &_PtReport__type_support;
}

#if defined(__cplusplus)
}
#endif
