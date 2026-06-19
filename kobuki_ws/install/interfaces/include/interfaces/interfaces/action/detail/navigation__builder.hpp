// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/Navigation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/navigation.hpp"


#ifndef INTERFACES__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_Goal_end_position
{
public:
  Init_Navigation_Goal_end_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Navigation_Goal end_position(::interfaces::action::Navigation_Goal::_end_position_type arg)
  {
    msg_.end_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_Goal>()
{
  return interfaces::action::builder::Init_Navigation_Goal_end_position();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_Result_success
{
public:
  Init_Navigation_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Navigation_Result success(::interfaces::action::Navigation_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_Result>()
{
  return interfaces::action::builder::Init_Navigation_Result_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_Feedback_direction
{
public:
  Init_Navigation_Feedback_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Navigation_Feedback direction(::interfaces::action::Navigation_Feedback::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_Feedback>()
{
  return interfaces::action::builder::Init_Navigation_Feedback_direction();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_SendGoal_Request_goal
{
public:
  explicit Init_Navigation_SendGoal_Request_goal(::interfaces::action::Navigation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_SendGoal_Request goal(::interfaces::action::Navigation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Request msg_;
};

class Init_Navigation_SendGoal_Request_goal_id
{
public:
  Init_Navigation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_SendGoal_Request_goal goal_id(::interfaces::action::Navigation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigation_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_SendGoal_Request>()
{
  return interfaces::action::builder::Init_Navigation_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_SendGoal_Response_stamp
{
public:
  explicit Init_Navigation_SendGoal_Response_stamp(::interfaces::action::Navigation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_SendGoal_Response stamp(::interfaces::action::Navigation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Response msg_;
};

class Init_Navigation_SendGoal_Response_accepted
{
public:
  Init_Navigation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_SendGoal_Response_stamp accepted(::interfaces::action::Navigation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigation_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_SendGoal_Response>()
{
  return interfaces::action::builder::Init_Navigation_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_SendGoal_Event_response
{
public:
  explicit Init_Navigation_SendGoal_Event_response(::interfaces::action::Navigation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_SendGoal_Event response(::interfaces::action::Navigation_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Event msg_;
};

class Init_Navigation_SendGoal_Event_request
{
public:
  explicit Init_Navigation_SendGoal_Event_request(::interfaces::action::Navigation_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Navigation_SendGoal_Event_response request(::interfaces::action::Navigation_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigation_SendGoal_Event_response(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Event msg_;
};

class Init_Navigation_SendGoal_Event_info
{
public:
  Init_Navigation_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_SendGoal_Event_request info(::interfaces::action::Navigation_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigation_SendGoal_Event_request(msg_);
  }

private:
  ::interfaces::action::Navigation_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_SendGoal_Event>()
{
  return interfaces::action::builder::Init_Navigation_SendGoal_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_GetResult_Request_goal_id
{
public:
  Init_Navigation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Navigation_GetResult_Request goal_id(::interfaces::action::Navigation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_GetResult_Request>()
{
  return interfaces::action::builder::Init_Navigation_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_GetResult_Response_result
{
public:
  explicit Init_Navigation_GetResult_Response_result(::interfaces::action::Navigation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_GetResult_Response result(::interfaces::action::Navigation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Response msg_;
};

class Init_Navigation_GetResult_Response_status
{
public:
  Init_Navigation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_GetResult_Response_result status(::interfaces::action::Navigation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigation_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_GetResult_Response>()
{
  return interfaces::action::builder::Init_Navigation_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_GetResult_Event_response
{
public:
  explicit Init_Navigation_GetResult_Event_response(::interfaces::action::Navigation_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_GetResult_Event response(::interfaces::action::Navigation_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Event msg_;
};

class Init_Navigation_GetResult_Event_request
{
public:
  explicit Init_Navigation_GetResult_Event_request(::interfaces::action::Navigation_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Navigation_GetResult_Event_response request(::interfaces::action::Navigation_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigation_GetResult_Event_response(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Event msg_;
};

class Init_Navigation_GetResult_Event_info
{
public:
  Init_Navigation_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_GetResult_Event_request info(::interfaces::action::Navigation_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigation_GetResult_Event_request(msg_);
  }

private:
  ::interfaces::action::Navigation_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_GetResult_Event>()
{
  return interfaces::action::builder::Init_Navigation_GetResult_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Navigation_FeedbackMessage_feedback
{
public:
  explicit Init_Navigation_FeedbackMessage_feedback(::interfaces::action::Navigation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Navigation_FeedbackMessage feedback(::interfaces::action::Navigation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Navigation_FeedbackMessage msg_;
};

class Init_Navigation_FeedbackMessage_goal_id
{
public:
  Init_Navigation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_FeedbackMessage_feedback goal_id(::interfaces::action::Navigation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigation_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::Navigation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Navigation_FeedbackMessage>()
{
  return interfaces::action::builder::Init_Navigation_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__NAVIGATION__BUILDER_HPP_
