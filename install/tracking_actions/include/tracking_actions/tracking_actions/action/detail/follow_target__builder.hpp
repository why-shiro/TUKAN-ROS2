// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tracking_actions:action/FollowTarget.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_ACTIONS__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_
#define TRACKING_ACTIONS__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tracking_actions/action/detail/follow_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_Goal_timeout_sec
{
public:
  explicit Init_FollowTarget_Goal_timeout_sec(::tracking_actions::action::FollowTarget_Goal & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_Goal timeout_sec(::tracking_actions::action::FollowTarget_Goal::_timeout_sec_type arg)
  {
    msg_.timeout_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Goal msg_;
};

class Init_FollowTarget_Goal_target_uav_id
{
public:
  Init_FollowTarget_Goal_target_uav_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_Goal_timeout_sec target_uav_id(::tracking_actions::action::FollowTarget_Goal::_target_uav_id_type arg)
  {
    msg_.target_uav_id = std::move(arg);
    return Init_FollowTarget_Goal_timeout_sec(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_Goal>()
{
  return tracking_actions::action::builder::Init_FollowTarget_Goal_target_uav_id();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_Result_message
{
public:
  explicit Init_FollowTarget_Result_message(::tracking_actions::action::FollowTarget_Result & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_Result message(::tracking_actions::action::FollowTarget_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Result msg_;
};

class Init_FollowTarget_Result_success
{
public:
  Init_FollowTarget_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_Result_message success(::tracking_actions::action::FollowTarget_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FollowTarget_Result_message(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_Result>()
{
  return tracking_actions::action::builder::Init_FollowTarget_Result_success();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_Feedback_y_offset
{
public:
  explicit Init_FollowTarget_Feedback_y_offset(::tracking_actions::action::FollowTarget_Feedback & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_Feedback y_offset(::tracking_actions::action::FollowTarget_Feedback::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Feedback msg_;
};

class Init_FollowTarget_Feedback_x_offset
{
public:
  explicit Init_FollowTarget_Feedback_x_offset(::tracking_actions::action::FollowTarget_Feedback & msg)
  : msg_(msg)
  {}
  Init_FollowTarget_Feedback_y_offset x_offset(::tracking_actions::action::FollowTarget_Feedback::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_FollowTarget_Feedback_y_offset(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Feedback msg_;
};

class Init_FollowTarget_Feedback_target_visible
{
public:
  Init_FollowTarget_Feedback_target_visible()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_Feedback_x_offset target_visible(::tracking_actions::action::FollowTarget_Feedback::_target_visible_type arg)
  {
    msg_.target_visible = std::move(arg);
    return Init_FollowTarget_Feedback_x_offset(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_Feedback>()
{
  return tracking_actions::action::builder::Init_FollowTarget_Feedback_target_visible();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_SendGoal_Request_goal
{
public:
  explicit Init_FollowTarget_SendGoal_Request_goal(::tracking_actions::action::FollowTarget_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_SendGoal_Request goal(::tracking_actions::action::FollowTarget_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_SendGoal_Request msg_;
};

class Init_FollowTarget_SendGoal_Request_goal_id
{
public:
  Init_FollowTarget_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_SendGoal_Request_goal goal_id(::tracking_actions::action::FollowTarget_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowTarget_SendGoal_Request_goal(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_SendGoal_Request>()
{
  return tracking_actions::action::builder::Init_FollowTarget_SendGoal_Request_goal_id();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_SendGoal_Response_stamp
{
public:
  explicit Init_FollowTarget_SendGoal_Response_stamp(::tracking_actions::action::FollowTarget_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_SendGoal_Response stamp(::tracking_actions::action::FollowTarget_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_SendGoal_Response msg_;
};

class Init_FollowTarget_SendGoal_Response_accepted
{
public:
  Init_FollowTarget_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_SendGoal_Response_stamp accepted(::tracking_actions::action::FollowTarget_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowTarget_SendGoal_Response_stamp(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_SendGoal_Response>()
{
  return tracking_actions::action::builder::Init_FollowTarget_SendGoal_Response_accepted();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_GetResult_Request_goal_id
{
public:
  Init_FollowTarget_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tracking_actions::action::FollowTarget_GetResult_Request goal_id(::tracking_actions::action::FollowTarget_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_GetResult_Request>()
{
  return tracking_actions::action::builder::Init_FollowTarget_GetResult_Request_goal_id();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_GetResult_Response_result
{
public:
  explicit Init_FollowTarget_GetResult_Response_result(::tracking_actions::action::FollowTarget_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_GetResult_Response result(::tracking_actions::action::FollowTarget_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_GetResult_Response msg_;
};

class Init_FollowTarget_GetResult_Response_status
{
public:
  Init_FollowTarget_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_GetResult_Response_result status(::tracking_actions::action::FollowTarget_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowTarget_GetResult_Response_result(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_GetResult_Response>()
{
  return tracking_actions::action::builder::Init_FollowTarget_GetResult_Response_status();
}

}  // namespace tracking_actions


namespace tracking_actions
{

namespace action
{

namespace builder
{

class Init_FollowTarget_FeedbackMessage_feedback
{
public:
  explicit Init_FollowTarget_FeedbackMessage_feedback(::tracking_actions::action::FollowTarget_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tracking_actions::action::FollowTarget_FeedbackMessage feedback(::tracking_actions::action::FollowTarget_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_FeedbackMessage msg_;
};

class Init_FollowTarget_FeedbackMessage_goal_id
{
public:
  Init_FollowTarget_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_FeedbackMessage_feedback goal_id(::tracking_actions::action::FollowTarget_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowTarget_FeedbackMessage_feedback(msg_);
  }

private:
  ::tracking_actions::action::FollowTarget_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tracking_actions::action::FollowTarget_FeedbackMessage>()
{
  return tracking_actions::action::builder::Init_FollowTarget_FeedbackMessage_goal_id();
}

}  // namespace tracking_actions

#endif  // TRACKING_ACTIONS__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_
