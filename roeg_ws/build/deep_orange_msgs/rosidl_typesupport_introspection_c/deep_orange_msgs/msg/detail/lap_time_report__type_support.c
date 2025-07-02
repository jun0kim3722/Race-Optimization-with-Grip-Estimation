// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deep_orange_msgs:msg/LapTimeReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deep_orange_msgs/msg/detail/lap_time_report__rosidl_typesupport_introspection_c.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deep_orange_msgs/msg/detail/lap_time_report__functions.h"
#include "deep_orange_msgs/msg/detail/lap_time_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deep_orange_msgs__msg__LapTimeReport__init(message_memory);
}

void LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_fini_function(void * message_memory)
{
  deep_orange_msgs__msg__LapTimeReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__LapTimeReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__LapTimeReport, laps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lap_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__LapTimeReport, lap_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__LapTimeReport, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_members = {
  "deep_orange_msgs__msg",  // message namespace
  "LapTimeReport",  // message name
  4,  // number of fields
  sizeof(deep_orange_msgs__msg__LapTimeReport),
  LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_member_array,  // message members
  LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_init_function,  // function to initialize message memory (memory has to be allocated)
  LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_type_support_handle = {
  0,
  &LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, LapTimeReport)() {
  LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_type_support_handle.typesupport_identifier) {
    LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LapTimeReport__rosidl_typesupport_introspection_c__LapTimeReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
