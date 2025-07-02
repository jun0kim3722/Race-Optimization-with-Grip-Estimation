// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deep_orange_msgs/msg/detail/tire_report__struct.hpp"

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
  const deep_orange_msgs::msg::TireReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: fl_tire_temperature
  {
    cdr << ros_message.fl_tire_temperature;
  }
  // Member: fl_damper_linear_potentiometer
  cdr << ros_message.fl_damper_linear_potentiometer;
  // Member: fl_tire_pressure
  cdr << ros_message.fl_tire_pressure;
  // Member: fl_tire_pressure_gauge
  cdr << ros_message.fl_tire_pressure_gauge;
  // Member: fl_wheel_load
  cdr << ros_message.fl_wheel_load;
  // Member: fr_tire_temperature
  {
    cdr << ros_message.fr_tire_temperature;
  }
  // Member: fr_damper_linear_potentiometer
  cdr << ros_message.fr_damper_linear_potentiometer;
  // Member: fr_tire_pressure
  cdr << ros_message.fr_tire_pressure;
  // Member: fr_tire_pressure_gauge
  cdr << ros_message.fr_tire_pressure_gauge;
  // Member: fr_wheel_load
  cdr << ros_message.fr_wheel_load;
  // Member: rl_tire_temperature
  {
    cdr << ros_message.rl_tire_temperature;
  }
  // Member: rl_damper_linear_potentiometer
  cdr << ros_message.rl_damper_linear_potentiometer;
  // Member: rl_tire_pressure
  cdr << ros_message.rl_tire_pressure;
  // Member: rl_tire_pressure_gauge
  cdr << ros_message.rl_tire_pressure_gauge;
  // Member: rl_wheel_load
  cdr << ros_message.rl_wheel_load;
  // Member: rr_tire_temperature
  {
    cdr << ros_message.rr_tire_temperature;
  }
  // Member: rr_damper_linear_potentiometer
  cdr << ros_message.rr_damper_linear_potentiometer;
  // Member: rr_tire_pressure
  cdr << ros_message.rr_tire_pressure;
  // Member: rr_tire_pressure_gauge
  cdr << ros_message.rr_tire_pressure_gauge;
  // Member: rr_wheel_load
  cdr << ros_message.rr_wheel_load;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deep_orange_msgs::msg::TireReport & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: fl_tire_temperature
  {
    cdr >> ros_message.fl_tire_temperature;
  }

  // Member: fl_damper_linear_potentiometer
  cdr >> ros_message.fl_damper_linear_potentiometer;

  // Member: fl_tire_pressure
  cdr >> ros_message.fl_tire_pressure;

  // Member: fl_tire_pressure_gauge
  cdr >> ros_message.fl_tire_pressure_gauge;

  // Member: fl_wheel_load
  cdr >> ros_message.fl_wheel_load;

  // Member: fr_tire_temperature
  {
    cdr >> ros_message.fr_tire_temperature;
  }

  // Member: fr_damper_linear_potentiometer
  cdr >> ros_message.fr_damper_linear_potentiometer;

  // Member: fr_tire_pressure
  cdr >> ros_message.fr_tire_pressure;

  // Member: fr_tire_pressure_gauge
  cdr >> ros_message.fr_tire_pressure_gauge;

  // Member: fr_wheel_load
  cdr >> ros_message.fr_wheel_load;

  // Member: rl_tire_temperature
  {
    cdr >> ros_message.rl_tire_temperature;
  }

  // Member: rl_damper_linear_potentiometer
  cdr >> ros_message.rl_damper_linear_potentiometer;

  // Member: rl_tire_pressure
  cdr >> ros_message.rl_tire_pressure;

  // Member: rl_tire_pressure_gauge
  cdr >> ros_message.rl_tire_pressure_gauge;

  // Member: rl_wheel_load
  cdr >> ros_message.rl_wheel_load;

  // Member: rr_tire_temperature
  {
    cdr >> ros_message.rr_tire_temperature;
  }

  // Member: rr_damper_linear_potentiometer
  cdr >> ros_message.rr_damper_linear_potentiometer;

  // Member: rr_tire_pressure
  cdr >> ros_message.rr_tire_pressure;

  // Member: rr_tire_pressure_gauge
  cdr >> ros_message.rr_tire_pressure_gauge;

  // Member: rr_wheel_load
  cdr >> ros_message.rr_wheel_load;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
get_serialized_size(
  const deep_orange_msgs::msg::TireReport & ros_message,
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
  // Member: fl_tire_temperature
  {
    size_t array_size = ros_message.fl_tire_temperature.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fl_tire_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.fl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_tire_pressure
  {
    size_t item_size = sizeof(ros_message.fl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.fl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_wheel_load
  {
    size_t item_size = sizeof(ros_message.fl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_temperature
  {
    size_t array_size = ros_message.fr_tire_temperature.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fr_tire_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.fr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_pressure
  {
    size_t item_size = sizeof(ros_message.fr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.fr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_wheel_load
  {
    size_t item_size = sizeof(ros_message.fr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_temperature
  {
    size_t array_size = ros_message.rl_tire_temperature.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rl_tire_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.rl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_pressure
  {
    size_t item_size = sizeof(ros_message.rl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.rl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_wheel_load
  {
    size_t item_size = sizeof(ros_message.rl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_temperature
  {
    size_t array_size = ros_message.rr_tire_temperature.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rr_tire_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message.rr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_pressure
  {
    size_t item_size = sizeof(ros_message.rr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message.rr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_wheel_load
  {
    size_t item_size = sizeof(ros_message.rr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
max_serialized_size_TireReport(
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

  // Member: fl_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_tire_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_tire_pressure_gauge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_wheel_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_tire_pressure_gauge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_wheel_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_tire_pressure_gauge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_wheel_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_tire_pressure_gauge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_wheel_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TireReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::TireReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TireReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deep_orange_msgs::msg::TireReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TireReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::TireReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TireReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TireReport(full_bounded, 0);
}

static message_type_support_callbacks_t _TireReport__callbacks = {
  "deep_orange_msgs::msg",
  "TireReport",
  _TireReport__cdr_serialize,
  _TireReport__cdr_deserialize,
  _TireReport__get_serialized_size,
  _TireReport__max_serialized_size
};

static rosidl_message_type_support_t _TireReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TireReport__callbacks,
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
get_message_type_support_handle<deep_orange_msgs::msg::TireReport>()
{
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_TireReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deep_orange_msgs, msg, TireReport)() {
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_TireReport__handle;
}

#ifdef __cplusplus
}
#endif
