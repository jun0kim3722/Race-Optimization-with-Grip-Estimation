// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/twist_cmd__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/twist_cmd__functions.h"
#include "raptor_dbw_msgs/msg/detail/twist_cmd__struct.h"


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__TwistCmd__init(message_memory);
}

void TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__TwistCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_member_array[3] = {
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__TwistCmd, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__TwistCmd, accel_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "decel_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__TwistCmd, decel_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "TwistCmd",  // message name
  3,  // number of fields
  sizeof(raptor_dbw_msgs__msg__TwistCmd),
  TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_member_array,  // message members
  TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_type_support_handle = {
  0,
  &TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, TwistCmd)() {
  TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_type_support_handle.typesupport_identifier) {
    TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TwistCmd__rosidl_typesupport_introspection_c__TwistCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
