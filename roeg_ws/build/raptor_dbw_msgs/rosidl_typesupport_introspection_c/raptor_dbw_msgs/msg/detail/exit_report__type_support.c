// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/exit_report__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/exit_report__functions.h"
#include "raptor_dbw_msgs/msg/detail/exit_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExitReport__rosidl_typesupport_introspection_c__ExitReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__ExitReport__init(message_memory);
}

void ExitReport__rosidl_typesupport_introspection_c__ExitReport_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__ExitReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "akit_disable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, akit_disable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driver_in_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, driver_in_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx_auton_disable_no_brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, idx_auton_disable_no_brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx_auton_disable_apply_brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, idx_auton_disable_apply_brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auton_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ExitReport, auton_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "ExitReport",  // message name
  6,  // number of fields
  sizeof(raptor_dbw_msgs__msg__ExitReport),
  ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_member_array,  // message members
  ExitReport__rosidl_typesupport_introspection_c__ExitReport_init_function,  // function to initialize message memory (memory has to be allocated)
  ExitReport__rosidl_typesupport_introspection_c__ExitReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_type_support_handle = {
  0,
  &ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, ExitReport)() {
  ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_type_support_handle.typesupport_identifier) {
    ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExitReport__rosidl_typesupport_introspection_c__ExitReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
