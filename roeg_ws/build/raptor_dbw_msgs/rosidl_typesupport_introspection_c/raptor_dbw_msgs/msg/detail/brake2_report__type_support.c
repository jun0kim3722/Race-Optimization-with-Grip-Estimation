// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/Brake2Report.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/brake2_report__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/brake2_report__functions.h"
#include "raptor_dbw_msgs/msg/detail/brake2_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__Brake2Report__init(message_memory);
}

void Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__Brake2Report__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__Brake2Report, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__Brake2Report, brake_pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_road_slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__Brake2Report, estimated_road_slope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_set_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__Brake2Report, speed_set_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "Brake2Report",  // message name
  4,  // number of fields
  sizeof(raptor_dbw_msgs__msg__Brake2Report),
  Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_member_array,  // message members
  Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_init_function,  // function to initialize message memory (memory has to be allocated)
  Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_type_support_handle = {
  0,
  &Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, Brake2Report)() {
  Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_type_support_handle.typesupport_identifier) {
    Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Brake2Report__rosidl_typesupport_introspection_c__Brake2Report_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
