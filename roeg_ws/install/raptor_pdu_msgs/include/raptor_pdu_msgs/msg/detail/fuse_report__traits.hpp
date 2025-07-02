// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_pdu_msgs:msg/FuseReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__TRAITS_HPP_
#define RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__TRAITS_HPP_

#include "raptor_pdu_msgs/msg/detail/fuse_report__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'fuse_1'
// Member 'fuse_2'
// Member 'fuse_3'
// Member 'fuse_4'
// Member 'fuse_5'
// Member 'fuse_6'
// Member 'fuse_7'
// Member 'fuse_8'
// Member 'fuse_9'
// Member 'fuse_10'
// Member 'fuse_11'
// Member 'fuse_12'
// Member 'fuse_13'
// Member 'fuse_14'
// Member 'fuse_15'
// Member 'fuse_16'
#include "raptor_pdu_msgs/msg/detail/fuse_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const raptor_pdu_msgs::msg::FuseReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: grid_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_address: ";
    value_to_yaml(msg.grid_address, out);
    out << "\n";
  }

  // member: fuse_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_1:\n";
    to_yaml(msg.fuse_1, out, indentation + 2);
  }

  // member: fuse_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_2:\n";
    to_yaml(msg.fuse_2, out, indentation + 2);
  }

  // member: fuse_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_3:\n";
    to_yaml(msg.fuse_3, out, indentation + 2);
  }

  // member: fuse_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_4:\n";
    to_yaml(msg.fuse_4, out, indentation + 2);
  }

  // member: fuse_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_5:\n";
    to_yaml(msg.fuse_5, out, indentation + 2);
  }

  // member: fuse_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_6:\n";
    to_yaml(msg.fuse_6, out, indentation + 2);
  }

  // member: fuse_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_7:\n";
    to_yaml(msg.fuse_7, out, indentation + 2);
  }

  // member: fuse_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_8:\n";
    to_yaml(msg.fuse_8, out, indentation + 2);
  }

  // member: fuse_9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_9:\n";
    to_yaml(msg.fuse_9, out, indentation + 2);
  }

  // member: fuse_10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_10:\n";
    to_yaml(msg.fuse_10, out, indentation + 2);
  }

  // member: fuse_11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_11:\n";
    to_yaml(msg.fuse_11, out, indentation + 2);
  }

  // member: fuse_12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_12:\n";
    to_yaml(msg.fuse_12, out, indentation + 2);
  }

  // member: fuse_13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_13:\n";
    to_yaml(msg.fuse_13, out, indentation + 2);
  }

  // member: fuse_14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_14:\n";
    to_yaml(msg.fuse_14, out, indentation + 2);
  }

  // member: fuse_15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_15:\n";
    to_yaml(msg.fuse_15, out, indentation + 2);
  }

  // member: fuse_16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuse_16:\n";
    to_yaml(msg.fuse_16, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const raptor_pdu_msgs::msg::FuseReport & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<raptor_pdu_msgs::msg::FuseReport>()
{
  return "raptor_pdu_msgs::msg::FuseReport";
}

template<>
inline const char * name<raptor_pdu_msgs::msg::FuseReport>()
{
  return "raptor_pdu_msgs/msg/FuseReport";
}

template<>
struct has_fixed_size<raptor_pdu_msgs::msg::FuseReport>
  : std::integral_constant<bool, has_fixed_size<raptor_pdu_msgs::msg::FuseStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_pdu_msgs::msg::FuseReport>
  : std::integral_constant<bool, has_bounded_size<raptor_pdu_msgs::msg::FuseStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_pdu_msgs::msg::FuseReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_PDU_MSGS__MSG__DETAIL__FUSE_REPORT__TRAITS_HPP_
