// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deep_orange_msgs:msg/TireTempReport.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deep_orange_msgs/msg/detail/tire_temp_report__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deep_orange_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TireTempReport_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deep_orange_msgs::msg::TireTempReport(_init);
}

void TireTempReport_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deep_orange_msgs::msg::TireTempReport *>(message_memory);
  typed_message->~TireTempReport();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TireTempReport_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs::msg::TireTempReport, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deep_orange_msgs::msg::TireTemp>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs::msg::TireTempReport, front_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deep_orange_msgs::msg::TireTemp>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs::msg::TireTempReport, front_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rear_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deep_orange_msgs::msg::TireTemp>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs::msg::TireTempReport, rear_left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rear_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deep_orange_msgs::msg::TireTemp>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deep_orange_msgs::msg::TireTempReport, rear_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TireTempReport_message_members = {
  "deep_orange_msgs::msg",  // message namespace
  "TireTempReport",  // message name
  5,  // number of fields
  sizeof(deep_orange_msgs::msg::TireTempReport),
  TireTempReport_message_member_array,  // message members
  TireTempReport_init_function,  // function to initialize message memory (memory has to be allocated)
  TireTempReport_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TireTempReport_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TireTempReport_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deep_orange_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deep_orange_msgs::msg::TireTempReport>()
{
  return &::deep_orange_msgs::msg::rosidl_typesupport_introspection_cpp::TireTempReport_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deep_orange_msgs, msg, TireTempReport)() {
  return &::deep_orange_msgs::msg::rosidl_typesupport_introspection_cpp::TireTempReport_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
