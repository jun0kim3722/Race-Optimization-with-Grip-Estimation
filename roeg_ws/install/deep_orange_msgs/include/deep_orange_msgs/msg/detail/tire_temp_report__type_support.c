// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deep_orange_msgs/msg/detail/tire_temp_report__rosidl_typesupport_introspection_c.h"
#include "deep_orange_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deep_orange_msgs/msg/detail/tire_temp_report__functions.h"
#include "deep_orange_msgs/msg/detail/tire_temp_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `front_left`
// Member `front_right`
// Member `rear_left`
// Member `rear_right`
#include "deep_orange_msgs/msg/tire_temp.h"
// Member `front_left`
// Member `front_right`
// Member `rear_left`
// Member `rear_right`
#include "deep_orange_msgs/msg/detail/tire_temp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deep_orange_msgs__msg__TireTempReport__init(message_memory);
}

void TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_fini_function(void * message_memory)
{
  deep_orange_msgs__msg__TireTempReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__TireTempReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__TireTempReport, front_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__TireTempReport, front_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__TireTempReport, rear_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs__msg__TireTempReport, rear_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_members = {
  "deep_orange_msgs__msg",  // message namespace
  "TireTempReport",  // message name
  5,  // number of fields
  sizeof(deep_orange_msgs__msg__TireTempReport),
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array,  // message members
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_init_function,  // function to initialize message memory (memory has to be allocated)
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_type_support_handle = {
  0,
  &TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deep_orange_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, TireTempReport)() {
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, TireTemp)();
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, TireTemp)();
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, TireTemp)();
  TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deep_orange_msgs, msg, TireTemp)();
  if (!TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_type_support_handle.typesupport_identifier) {
    TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TireTempReport__rosidl_typesupport_introspection_c__TireTempReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
