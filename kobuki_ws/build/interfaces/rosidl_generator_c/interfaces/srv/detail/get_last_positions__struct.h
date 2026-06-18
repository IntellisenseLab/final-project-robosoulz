// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/GetLastPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/get_last_positions.h"


#ifndef INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__STRUCT_H_
#define INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLastPositions in the package interfaces.
typedef struct interfaces__srv__GetLastPositions_Request
{
  int32_t num_positions;
} interfaces__srv__GetLastPositions_Request;

// Struct for a sequence of interfaces__srv__GetLastPositions_Request.
typedef struct interfaces__srv__GetLastPositions_Request__Sequence
{
  interfaces__srv__GetLastPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__GetLastPositions_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "interfaces/msg/detail/position__struct.h"

/// Struct defined in srv/GetLastPositions in the package interfaces.
typedef struct interfaces__srv__GetLastPositions_Response
{
  interfaces__msg__Position__Sequence positions;
} interfaces__srv__GetLastPositions_Response;

// Struct for a sequence of interfaces__srv__GetLastPositions_Response.
typedef struct interfaces__srv__GetLastPositions_Response__Sequence
{
  interfaces__srv__GetLastPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__GetLastPositions_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__srv__GetLastPositions_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__srv__GetLastPositions_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetLastPositions in the package interfaces.
typedef struct interfaces__srv__GetLastPositions_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__srv__GetLastPositions_Request__Sequence request;
  interfaces__srv__GetLastPositions_Response__Sequence response;
} interfaces__srv__GetLastPositions_Event;

// Struct for a sequence of interfaces__srv__GetLastPositions_Event.
typedef struct interfaces__srv__GetLastPositions_Event__Sequence
{
  interfaces__srv__GetLastPositions_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__GetLastPositions_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__GET_LAST_POSITIONS__STRUCT_H_
