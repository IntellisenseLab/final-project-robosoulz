// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/GetLastPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/get_last_positions.hpp"


#ifndef INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/get_last_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLastPositions_Request_num_positions
{
public:
  Init_GetLastPositions_Request_num_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::GetLastPositions_Request num_positions(::interfaces::srv::GetLastPositions_Request::_num_positions_type arg)
  {
    msg_.num_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetLastPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetLastPositions_Request>()
{
  return interfaces::srv::builder::Init_GetLastPositions_Request_num_positions();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLastPositions_Response_positions
{
public:
  Init_GetLastPositions_Response_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::GetLastPositions_Response positions(::interfaces::srv::GetLastPositions_Response::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetLastPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetLastPositions_Response>()
{
  return interfaces::srv::builder::Init_GetLastPositions_Response_positions();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLastPositions_Event_response
{
public:
  explicit Init_GetLastPositions_Event_response(::interfaces::srv::GetLastPositions_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::GetLastPositions_Event response(::interfaces::srv::GetLastPositions_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetLastPositions_Event msg_;
};

class Init_GetLastPositions_Event_request
{
public:
  explicit Init_GetLastPositions_Event_request(::interfaces::srv::GetLastPositions_Event & msg)
  : msg_(msg)
  {}
  Init_GetLastPositions_Event_response request(::interfaces::srv::GetLastPositions_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLastPositions_Event_response(msg_);
  }

private:
  ::interfaces::srv::GetLastPositions_Event msg_;
};

class Init_GetLastPositions_Event_info
{
public:
  Init_GetLastPositions_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLastPositions_Event_request info(::interfaces::srv::GetLastPositions_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLastPositions_Event_request(msg_);
  }

private:
  ::interfaces::srv::GetLastPositions_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetLastPositions_Event>()
{
  return interfaces::srv::builder::Init_GetLastPositions_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__BUILDER_HPP_
