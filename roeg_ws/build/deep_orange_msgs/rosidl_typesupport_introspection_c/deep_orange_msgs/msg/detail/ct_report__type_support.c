// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deep_orange_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deep_orange_msgs/msg/detail/ct_report__rosidl_typesupport_introspection_c.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deep_orange_msgs/msg/detail/ct_report__functions.h"
#include "deep_orange_msgs/msg/detail/ct_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CtReport__rosidl_typesupport_introspection_c__CtReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deep_orange_msgs__msg__CtReport__init(message_memory);
}

void CtReport__rosidl_typesupport_introspection_c__CtReport_fini_function(void * message_memory)
{
  deep_orange_msgs__msg__CtReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CtReport__rosidl_typesupport_introspection_c__CtReport_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__CtReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_cond_ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__CtReport, track_cond_ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_sig_ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__CtReport, veh_sig_ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ct_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__CtReport, ct_state),  // bytes offset in struct
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
    offsetof(deep_orange_msgs__msg__CtReport, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__CtReport, veh_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CtReport__rosidl_typesupport_introspection_c__CtReport_message_members = {
  "deep_orange_msgs__msg",  // message namespace
  "CtReport",  // message name
  6,  // number of fields
  sizeof(deep_orange_msgs__msg__CtReport),
  CtReport__rosidl_typesupport_introspection_c__CtReport_message_member_array,  // message members
  CtReport__rosidl_typesupport_introspection_c__CtReport_init_function,  // function to initialize message memory (memory has to be allocated)
  CtReport__rosidl_typesupport_introspection_c__CtReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CtReport__rosidl_typesupport_introspection_c__CtReport_message_type_support_handle = {
  0,
  &CtReport__rosidl_typesupport_introspection_c__CtReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, CtReport)() {
  CtReport__rosidl_typesupport_introspection_c__CtReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!CtReport__rosidl_typesupport_introspection_c__CtReport_message_type_support_handle.typesupport_identifier) {
    CtReport__rosidl_typesupport_introspection_c__CtReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CtReport__rosidl_typesupport_introspection_c__CtReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
