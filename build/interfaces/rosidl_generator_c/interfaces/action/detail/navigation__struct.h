// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:action/Navigation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/navigation.h"


#ifndef INTERFACES__ACTION__DETAIL__NAVIGATION__STRUCT_H_
#define INTERFACES__ACTION__DETAIL__NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'end_position'
#include "interfaces/msg/detail/position__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_Goal
{
  interfaces__msg__Position end_position;
} interfaces__action__Navigation_Goal;

// Struct for a sequence of interfaces__action__Navigation_Goal.
typedef struct interfaces__action__Navigation_Goal__Sequence
{
  interfaces__action__Navigation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_Result
{
  /// Result
  bool success;
} interfaces__action__Navigation_Result;

// Struct for a sequence of interfaces__action__Navigation_Result.
typedef struct interfaces__action__Navigation_Result__Sequence
{
  interfaces__action__Navigation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_Feedback
{
  /// Feedback
  float direction;
} interfaces__action__Navigation_Feedback;

// Struct for a sequence of interfaces__action__Navigation_Feedback.
typedef struct interfaces__action__Navigation_Feedback__Sequence
{
  interfaces__action__Navigation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaces/action/detail/navigation__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__Navigation_Goal goal;
} interfaces__action__Navigation_SendGoal_Request;

// Struct for a sequence of interfaces__action__Navigation_SendGoal_Request.
typedef struct interfaces__action__Navigation_SendGoal_Request__Sequence
{
  interfaces__action__Navigation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces__action__Navigation_SendGoal_Response;

// Struct for a sequence of interfaces__action__Navigation_SendGoal_Response.
typedef struct interfaces__action__Navigation_SendGoal_Response__Sequence
{
  interfaces__action__Navigation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__Navigation_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__Navigation_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__Navigation_SendGoal_Request__Sequence request;
  interfaces__action__Navigation_SendGoal_Response__Sequence response;
} interfaces__action__Navigation_SendGoal_Event;

// Struct for a sequence of interfaces__action__Navigation_SendGoal_Event.
typedef struct interfaces__action__Navigation_SendGoal_Event__Sequence
{
  interfaces__action__Navigation_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces__action__Navigation_GetResult_Request;

// Struct for a sequence of interfaces__action__Navigation_GetResult_Request.
typedef struct interfaces__action__Navigation_GetResult_Request__Sequence
{
  interfaces__action__Navigation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/navigation__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_GetResult_Response
{
  int8_t status;
  interfaces__action__Navigation_Result result;
} interfaces__action__Navigation_GetResult_Response;

// Struct for a sequence of interfaces__action__Navigation_GetResult_Response.
typedef struct interfaces__action__Navigation_GetResult_Response__Sequence
{
  interfaces__action__Navigation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__Navigation_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__Navigation_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__Navigation_GetResult_Request__Sequence request;
  interfaces__action__Navigation_GetResult_Response__Sequence response;
} interfaces__action__Navigation_GetResult_Event;

// Struct for a sequence of interfaces__action__Navigation_GetResult_Event.
typedef struct interfaces__action__Navigation_GetResult_Event__Sequence
{
  interfaces__action__Navigation_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/navigation__struct.h"

/// Struct defined in action/Navigation in the package interfaces.
typedef struct interfaces__action__Navigation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__Navigation_Feedback feedback;
} interfaces__action__Navigation_FeedbackMessage;

// Struct for a sequence of interfaces__action__Navigation_FeedbackMessage.
typedef struct interfaces__action__Navigation_FeedbackMessage__Sequence
{
  interfaces__action__Navigation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__Navigation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__ACTION__DETAIL__NAVIGATION__STRUCT_H_
