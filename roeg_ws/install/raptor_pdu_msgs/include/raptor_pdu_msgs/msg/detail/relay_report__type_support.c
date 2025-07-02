// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_pdu_msgs:msg/RelayReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_pdu_msgs/msg/detail/relay_report__rosidl_typesupport_introspection_c.h"
#include "raptor_pdu_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_pdu_msgs/msg/detail/relay_report__functions.h"
#include "raptor_pdu_msgs/msg/detail/relay_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `relay_1`
// Member `relay_2`
// Member `relay_3`
// Member `relay_4`
// Member `relay_5`
// Member `relay_6`
// Member `relay_7`
// Member `relay_8`
#include "raptor_pdu_msgs/msg/relay_status.h"
// Member `relay_1`
// Member `relay_2`
// Member `relay_3`
// Member `relay_4`
// Member `relay_5`
// Member `relay_6`
// Member `relay_7`
// Member `relay_8`
#include "raptor_pdu_msgs/msg/detail/relay_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RelayReport__rosidl_typesupport_introspection_c__RelayReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_pdu_msgs__msg__RelayReport__init(message_memory);
}

void RelayReport__rosidl_typesupport_introspection_c__RelayReport_fini_function(void * message_memory)
{
  raptor_pdu_msgs__msg__RelayReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, grid_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relay_8",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__RelayReport, relay_8),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_members = {
  "raptor_pdu_msgs__msg",  // message namespace
  "RelayReport",  // message name
  10,  // number of fields
  sizeof(raptor_pdu_msgs__msg__RelayReport),
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array,  // message members
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_init_function,  // function to initialize message memory (memory has to be allocated)
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_type_support_handle = {
  0,
  &RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_pdu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayReport)() {
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, RelayStatus)();
  if (!RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_type_support_handle.typesupport_identifier) {
    RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RelayReport__rosidl_typesupport_introspection_c__RelayReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
