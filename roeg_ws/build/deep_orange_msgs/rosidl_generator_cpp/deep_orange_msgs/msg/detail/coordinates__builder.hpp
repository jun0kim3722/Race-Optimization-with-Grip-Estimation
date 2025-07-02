// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deep_orange_msgs:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__COORDINATES__BUILDER_HPP_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__COORDINATES__BUILDER_HPP_

#include "deep_orange_msgs/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deep_orange_msgs
{

namespace msg
{

namespace builder
{

class Init_Coordinates_heading_imag
{
public:
  explicit Init_Coordinates_heading_imag(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  ::deep_orange_msgs::msg::Coordinates heading_imag(::deep_orange_msgs::msg::Coordinates::_heading_imag_type arg)
  {
    msg_.heading_imag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_heading_real
{
public:
  explicit Init_Coordinates_heading_real(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_heading_imag heading_real(::deep_orange_msgs::msg::Coordinates::_heading_real_type arg)
  {
    msg_.heading_real = std::move(arg);
    return Init_Coordinates_heading_imag(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_heading
{
public:
  explicit Init_Coordinates_heading(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_heading_real heading(::deep_orange_msgs::msg::Coordinates::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Coordinates_heading_real(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_z
{
public:
  explicit Init_Coordinates_z(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_heading z(::deep_orange_msgs::msg::Coordinates::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Coordinates_heading(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_y
{
public:
  explicit Init_Coordinates_y(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_z y(::deep_orange_msgs::msg::Coordinates::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Coordinates_z(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_x
{
public:
  explicit Init_Coordinates_x(::deep_orange_msgs::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_y x(::deep_orange_msgs::msg::Coordinates::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinates_y(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

class Init_Coordinates_stamp
{
public:
  Init_Coordinates_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates_x stamp(::deep_orange_msgs::msg::Coordinates::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Coordinates_x(msg_);
  }

private:
  ::deep_orange_msgs::msg::Coordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deep_orange_msgs::msg::Coordinates>()
{
  return deep_orange_msgs::msg::builder::Init_Coordinates_stamp();
}

}  // namespace deep_orange_msgs

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__COORDINATES__BUILDER_HPP_
