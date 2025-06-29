// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracking_actions:action/GpsPursuit.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__TRAITS_HPP_
#define TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tracking_actions/action/detail/gps_pursuit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_uav_id
  {
    out << "target_uav_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_uav_id, out);
    out << ", ";
  }

  // member: timeout_sec
  {
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_uav_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_uav_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_uav_id, out);
    out << "\n";
  }

  // member: timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_Goal & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_Goal>()
{
  return "tracking_actions::action::GpsPursuit_Goal";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_Goal>()
{
  return "tracking_actions/action/GpsPursuit_Goal";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_Result & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_Result>()
{
  return "tracking_actions::action::GpsPursuit_Result";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_Result>()
{
  return "tracking_actions/action/GpsPursuit_Result";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_to_target
  {
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_Feedback & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_Feedback>()
{
  return "tracking_actions::action::GpsPursuit_Feedback";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_Feedback>()
{
  return "tracking_actions/action/GpsPursuit_Feedback";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tracking_actions/action/detail/gps_pursuit__traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_SendGoal_Request & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_SendGoal_Request>()
{
  return "tracking_actions::action::GpsPursuit_SendGoal_Request";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_SendGoal_Request>()
{
  return "tracking_actions/action/GpsPursuit_SendGoal_Request";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tracking_actions::action::GpsPursuit_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tracking_actions::action::GpsPursuit_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_SendGoal_Response & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_SendGoal_Response>()
{
  return "tracking_actions::action::GpsPursuit_SendGoal_Response";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_SendGoal_Response>()
{
  return "tracking_actions/action/GpsPursuit_SendGoal_Response";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_SendGoal>()
{
  return "tracking_actions::action::GpsPursuit_SendGoal";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_SendGoal>()
{
  return "tracking_actions/action/GpsPursuit_SendGoal";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tracking_actions::action::GpsPursuit_SendGoal_Request>::value &&
    has_fixed_size<tracking_actions::action::GpsPursuit_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tracking_actions::action::GpsPursuit_SendGoal_Request>::value &&
    has_bounded_size<tracking_actions::action::GpsPursuit_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tracking_actions::action::GpsPursuit_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tracking_actions::action::GpsPursuit_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tracking_actions::action::GpsPursuit_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_GetResult_Request & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_GetResult_Request>()
{
  return "tracking_actions::action::GpsPursuit_GetResult_Request";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_GetResult_Request>()
{
  return "tracking_actions/action/GpsPursuit_GetResult_Request";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tracking_actions/action/detail/gps_pursuit__traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_GetResult_Response & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_GetResult_Response>()
{
  return "tracking_actions::action::GpsPursuit_GetResult_Response";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_GetResult_Response>()
{
  return "tracking_actions/action/GpsPursuit_GetResult_Response";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tracking_actions::action::GpsPursuit_Result>::value> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tracking_actions::action::GpsPursuit_Result>::value> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_GetResult>()
{
  return "tracking_actions::action::GpsPursuit_GetResult";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_GetResult>()
{
  return "tracking_actions/action/GpsPursuit_GetResult";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tracking_actions::action::GpsPursuit_GetResult_Request>::value &&
    has_fixed_size<tracking_actions::action::GpsPursuit_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tracking_actions::action::GpsPursuit_GetResult_Request>::value &&
    has_bounded_size<tracking_actions::action::GpsPursuit_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tracking_actions::action::GpsPursuit_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tracking_actions::action::GpsPursuit_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tracking_actions::action::GpsPursuit_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tracking_actions/action/detail/gps_pursuit__traits.hpp"

namespace tracking_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const GpsPursuit_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsPursuit_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsPursuit_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tracking_actions

namespace rosidl_generator_traits
{

[[deprecated("use tracking_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tracking_actions::action::GpsPursuit_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tracking_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tracking_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const tracking_actions::action::GpsPursuit_FeedbackMessage & msg)
{
  return tracking_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<tracking_actions::action::GpsPursuit_FeedbackMessage>()
{
  return "tracking_actions::action::GpsPursuit_FeedbackMessage";
}

template<>
inline const char * name<tracking_actions::action::GpsPursuit_FeedbackMessage>()
{
  return "tracking_actions/action/GpsPursuit_FeedbackMessage";
}

template<>
struct has_fixed_size<tracking_actions::action::GpsPursuit_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tracking_actions::action::GpsPursuit_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tracking_actions::action::GpsPursuit_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tracking_actions::action::GpsPursuit_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tracking_actions::action::GpsPursuit_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tracking_actions::action::GpsPursuit>
  : std::true_type
{
};

template<>
struct is_action_goal<tracking_actions::action::GpsPursuit_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tracking_actions::action::GpsPursuit_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tracking_actions::action::GpsPursuit_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__TRAITS_HPP_
