// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracking_actions:action/GpsPursuit.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__STRUCT_H_
#define TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_Goal
{
  int32_t target_uav_id;
  float timeout_sec;
} tracking_actions__action__GpsPursuit_Goal;

// Struct for a sequence of tracking_actions__action__GpsPursuit_Goal.
typedef struct tracking_actions__action__GpsPursuit_Goal__Sequence
{
  tracking_actions__action__GpsPursuit_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_Result
{
  bool success;
  rosidl_runtime_c__String message;
} tracking_actions__action__GpsPursuit_Result;

// Struct for a sequence of tracking_actions__action__GpsPursuit_Result.
typedef struct tracking_actions__action__GpsPursuit_Result__Sequence
{
  tracking_actions__action__GpsPursuit_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_Feedback
{
  float distance_to_target;
} tracking_actions__action__GpsPursuit_Feedback;

// Struct for a sequence of tracking_actions__action__GpsPursuit_Feedback.
typedef struct tracking_actions__action__GpsPursuit_Feedback__Sequence
{
  tracking_actions__action__GpsPursuit_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tracking_actions/action/detail/gps_pursuit__struct.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tracking_actions__action__GpsPursuit_Goal goal;
} tracking_actions__action__GpsPursuit_SendGoal_Request;

// Struct for a sequence of tracking_actions__action__GpsPursuit_SendGoal_Request.
typedef struct tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence
{
  tracking_actions__action__GpsPursuit_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tracking_actions__action__GpsPursuit_SendGoal_Response;

// Struct for a sequence of tracking_actions__action__GpsPursuit_SendGoal_Response.
typedef struct tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence
{
  tracking_actions__action__GpsPursuit_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tracking_actions__action__GpsPursuit_GetResult_Request;

// Struct for a sequence of tracking_actions__action__GpsPursuit_GetResult_Request.
typedef struct tracking_actions__action__GpsPursuit_GetResult_Request__Sequence
{
  tracking_actions__action__GpsPursuit_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tracking_actions/action/detail/gps_pursuit__struct.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_GetResult_Response
{
  int8_t status;
  tracking_actions__action__GpsPursuit_Result result;
} tracking_actions__action__GpsPursuit_GetResult_Response;

// Struct for a sequence of tracking_actions__action__GpsPursuit_GetResult_Response.
typedef struct tracking_actions__action__GpsPursuit_GetResult_Response__Sequence
{
  tracking_actions__action__GpsPursuit_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tracking_actions/action/detail/gps_pursuit__struct.h"

/// Struct defined in action/GpsPursuit in the package tracking_actions.
typedef struct tracking_actions__action__GpsPursuit_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tracking_actions__action__GpsPursuit_Feedback feedback;
} tracking_actions__action__GpsPursuit_FeedbackMessage;

// Struct for a sequence of tracking_actions__action__GpsPursuit_FeedbackMessage.
typedef struct tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence
{
  tracking_actions__action__GpsPursuit_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__STRUCT_H_
