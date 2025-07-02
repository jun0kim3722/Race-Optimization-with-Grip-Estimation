// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__functions.h"
#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__GlobalEnableCmd__init(message_memory);
}

void GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__GlobalEnableCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_member_array[4] = {
  {
    "global_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__GlobalEnableCmd, global_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_joystick_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__GlobalEnableCmd, enable_joystick_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ecu_build_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__GlobalEnableCmd, ecu_build_number),  // bytes offset in struct
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
    offsetof(raptor_dbw_msgs__msg__GlobalEnableCmd, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "GlobalEnableCmd",  // message name
  4,  // number of fields
  sizeof(raptor_dbw_msgs__msg__GlobalEnableCmd),
  GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_member_array,  // message members
  GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_type_support_handle = {
  0,
  &GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, GlobalEnableCmd)() {
  if (!GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_type_support_handle.typesupport_identifier) {
    GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GlobalEnableCmd__rosidl_typesupport_introspection_c__GlobalEnableCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
