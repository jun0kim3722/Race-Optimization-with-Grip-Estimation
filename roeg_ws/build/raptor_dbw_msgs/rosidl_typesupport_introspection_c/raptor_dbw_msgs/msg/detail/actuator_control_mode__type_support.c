// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/ActuatorControlMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__ActuatorControlMode__init(message_memory);
}

void ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__ActuatorControlMode, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "ActuatorControlMode",  // message name
  1,  // number of fields
  sizeof(raptor_dbw_msgs__msg__ActuatorControlMode),
  ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_member_array,  // message members
  ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_type_support_handle = {
  0,
  &ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, ActuatorControlMode)() {
  if (!ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_type_support_handle.typesupport_identifier) {
    ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuatorControlMode__rosidl_typesupport_introspection_c__ActuatorControlMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
