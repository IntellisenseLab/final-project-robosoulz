// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/position.hpp"


#ifndef INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_y
{
public:
  explicit Init_Position_y(::interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Position y(::interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Position>()
{
  return interfaces::msg::builder::Init_Position_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
