// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/race_control_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deep_orange_msgs/msg/detail/race_control_report__struct.hpp"

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
  const deep_orange_msgs::msg::RaceControlReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: base_to_car_heartbeat
  cdr << ros_message.base_to_car_heartbeat;
  // Member: track_flag
  cdr << ros_message.track_flag;
  // Member: veh_flag
  cdr << ros_message.veh_flag;
  // Member: veh_rank
  cdr << ros_message.veh_rank;
  // Member: lap_count
  cdr << ros_message.lap_count;
  // Member: lap_distance
  cdr << ros_message.lap_distance;
  // Member: round_target_speed
  cdr << ros_message.round_target_speed;
  // Member: marelli_track_flag
  cdr << ros_message.marelli_track_flag;
  // Member: marelli_vehicle_flag
  cdr << ros_message.marelli_vehicle_flag;
  // Member: marelli_sector_flag
  cdr << ros_message.marelli_sector_flag;
  // Member: lte_modem_lte_rssi
  cdr << ros_message.lte_modem_lte_rssi;
  // Member: lte_sync_ok
  cdr << (ros_message.lte_sync_ok ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deep_orange_msgs::msg::RaceControlReport & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: base_to_car_heartbeat
  cdr >> ros_message.base_to_car_heartbeat;

  // Member: track_flag
  cdr >> ros_message.track_flag;

  // Member: veh_flag
  cdr >> ros_message.veh_flag;

  // Member: veh_rank
  cdr >> ros_message.veh_rank;

  // Member: lap_count
  cdr >> ros_message.lap_count;

  // Member: lap_distance
  cdr >> ros_message.lap_distance;

  // Member: round_target_speed
  cdr >> ros_message.round_target_speed;

  // Member: marelli_track_flag
  cdr >> ros_message.marelli_track_flag;

  // Member: marelli_vehicle_flag
  cdr >> ros_message.marelli_vehicle_flag;

  // Member: marelli_sector_flag
  cdr >> ros_message.marelli_sector_flag;

  // Member: lte_modem_lte_rssi
  cdr >> ros_message.lte_modem_lte_rssi;

  // Member: lte_sync_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lte_sync_ok = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
get_serialized_size(
  const deep_orange_msgs::msg::RaceControlReport & ros_message,
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
  // Member: base_to_car_heartbeat
  {
    size_t item_size = sizeof(ros_message.base_to_car_heartbeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_flag
  {
    size_t item_size = sizeof(ros_message.track_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_flag
  {
    size_t item_size = sizeof(ros_message.veh_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_rank
  {
    size_t item_size = sizeof(ros_message.veh_rank);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lap_count
  {
    size_t item_size = sizeof(ros_message.lap_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lap_distance
  {
    size_t item_size = sizeof(ros_message.lap_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: round_target_speed
  {
    size_t item_size = sizeof(ros_message.round_target_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marelli_track_flag
  {
    size_t item_size = sizeof(ros_message.marelli_track_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marelli_vehicle_flag
  {
    size_t item_size = sizeof(ros_message.marelli_vehicle_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marelli_sector_flag
  {
    size_t item_size = sizeof(ros_message.marelli_sector_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lte_modem_lte_rssi
  {
    size_t item_size = sizeof(ros_message.lte_modem_lte_rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lte_sync_ok
  {
    size_t item_size = sizeof(ros_message.lte_sync_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deep_orange_msgs
max_serialized_size_RaceControlReport(
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

  // Member: base_to_car_heartbeat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_rank
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lap_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lap_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: round_target_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: marelli_track_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: marelli_vehicle_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: marelli_sector_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lte_modem_lte_rssi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lte_sync_ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RaceControlReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::RaceControlReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RaceControlReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deep_orange_msgs::msg::RaceControlReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RaceControlReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deep_orange_msgs::msg::RaceControlReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RaceControlReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RaceControlReport(full_bounded, 0);
}

static message_type_support_callbacks_t _RaceControlReport__callbacks = {
  "deep_orange_msgs::msg",
  "RaceControlReport",
  _RaceControlReport__cdr_serialize,
  _RaceControlReport__cdr_deserialize,
  _RaceControlReport__get_serialized_size,
  _RaceControlReport__max_serialized_size
};

static rosidl_message_type_support_t _RaceControlReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RaceControlReport__callbacks,
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
get_message_type_support_handle<deep_orange_msgs::msg::RaceControlReport>()
{
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_RaceControlReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deep_orange_msgs, msg, RaceControlReport)() {
  return &deep_orange_msgs::msg::typesupport_fastrtps_cpp::_RaceControlReport__handle;
}

#ifdef __cplusplus
}
#endif
