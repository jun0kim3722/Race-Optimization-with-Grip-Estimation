// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__functions.h"
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__HmiGlobalEnableReport__init(message_memory);
}

void HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, enable_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, disable_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "checksum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, checksum),  // bytes offset in struct
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
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, ecu_build_number),  // bytes offset in struct
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
    offsetof(raptor_dbw_msgs__msg__HmiGlobalEnableReport, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "HmiGlobalEnableReport",  // message name
  6,  // number of fields
  sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport),
  HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_member_array,  // message members
  HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_init_function,  // function to initialize message memory (memory has to be allocated)
  HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_type_support_handle = {
  0,
  &HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, HmiGlobalEnableReport)() {
  HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_type_support_handle.typesupport_identifier) {
    HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HmiGlobalEnableReport__rosidl_typesupport_introspection_c__HmiGlobalEnableReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
