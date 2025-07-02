// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_pdu_msgs:msg/FuseStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_pdu_msgs/msg/detail/fuse_status__rosidl_typesupport_introspection_c.h"
#include "raptor_pdu_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_pdu_msgs/msg/detail/fuse_status__functions.h"
#include "raptor_pdu_msgs/msg/detail/fuse_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_pdu_msgs__msg__FuseStatus__init(message_memory);
}

void FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_fini_function(void * message_memory)
{
  raptor_pdu_msgs__msg__FuseStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__FuseStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_pdu_msgs__msg__FuseStatus, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_members = {
  "raptor_pdu_msgs__msg",  // message namespace
  "FuseStatus",  // message name
  2,  // number of fields
  sizeof(raptor_pdu_msgs__msg__FuseStatus),
  FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_member_array,  // message members
  FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_type_support_handle = {
  0,
  &FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_pdu_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_pdu_msgs, msg, FuseStatus)() {
  FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_type_support_handle.typesupport_identifier) {
    FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FuseStatus__rosidl_typesupport_introspection_c__FuseStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
