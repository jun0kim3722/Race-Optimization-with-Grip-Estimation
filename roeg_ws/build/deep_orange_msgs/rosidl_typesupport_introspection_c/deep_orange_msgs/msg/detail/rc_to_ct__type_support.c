// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deep_orange_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deep_orange_msgs/msg/detail/rc_to_ct__rosidl_typesupport_introspection_c.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deep_orange_msgs/msg/detail/rc_to_ct__functions.h"
#include "deep_orange_msgs/msg/detail/rc_to_ct__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RcToCt__rosidl_typesupport_introspection_c__RcToCt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deep_orange_msgs__msg__RcToCt__init(message_memory);
}

void RcToCt__rosidl_typesupport_introspection_c__RcToCt_fini_function(void * message_memory)
{
  deep_orange_msgs__msg__RcToCt__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolling_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, track_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, veh_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_rank",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, veh_rank),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lap_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, lap_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lap_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__RcToCt, lap_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_members = {
  "deep_orange_msgs__msg",  // message namespace
  "RcToCt",  // message name
  7,  // number of fields
  sizeof(deep_orange_msgs__msg__RcToCt),
  RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_member_array,  // message members
  RcToCt__rosidl_typesupport_introspection_c__RcToCt_init_function,  // function to initialize message memory (memory has to be allocated)
  RcToCt__rosidl_typesupport_introspection_c__RcToCt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_type_support_handle = {
  0,
  &RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, RcToCt)() {
  RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_type_support_handle.typesupport_identifier) {
    RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RcToCt__rosidl_typesupport_introspection_c__RcToCt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
