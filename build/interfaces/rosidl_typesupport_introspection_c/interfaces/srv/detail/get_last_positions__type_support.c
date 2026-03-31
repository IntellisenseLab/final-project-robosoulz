// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/GetLastPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/get_last_positions__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/get_last_positions__functions.h"
#include "interfaces/srv/detail/get_last_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__GetLastPositions_Request__init(message_memory);
}

void interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_fini_function(void * message_memory)
{
  interfaces__srv__GetLastPositions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_member_array[1] = {
  {
    "num_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__GetLastPositions_Request, num_positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_members = {
  "interfaces__srv",  // message namespace
  "GetLastPositions_Request",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__GetLastPositions_Request),
  false,  // has_any_key_member_
  interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_member_array,  // message members
  interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle = {
  0,
  &interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__GetLastPositions_Request__get_type_hash,
  &interfaces__srv__GetLastPositions_Request__get_type_description,
  &interfaces__srv__GetLastPositions_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Request)() {
  if (!interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/get_last_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/get_last_positions__functions.h"
// already included above
// #include "interfaces/srv/detail/get_last_positions__struct.h"


// Include directives for member types
// Member `positions`
#include "interfaces/msg/position.h"
// Member `positions`
#include "interfaces/msg/detail/position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__GetLastPositions_Response__init(message_memory);
}

void interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_fini_function(void * message_memory)
{
  interfaces__srv__GetLastPositions_Response__fini(message_memory);
}

size_t interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Response__positions(
  const void * untyped_member)
{
  const interfaces__msg__Position__Sequence * member =
    (const interfaces__msg__Position__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Response__positions(
  const void * untyped_member, size_t index)
{
  const interfaces__msg__Position__Sequence * member =
    (const interfaces__msg__Position__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Response__positions(
  void * untyped_member, size_t index)
{
  interfaces__msg__Position__Sequence * member =
    (interfaces__msg__Position__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Response__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__msg__Position * item =
    ((const interfaces__msg__Position *)
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Response__positions(untyped_member, index));
  interfaces__msg__Position * value =
    (interfaces__msg__Position *)(untyped_value);
  *value = *item;
}

void interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Response__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__msg__Position * item =
    ((interfaces__msg__Position *)
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Response__positions(untyped_member, index));
  const interfaces__msg__Position * value =
    (const interfaces__msg__Position *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Response__positions(
  void * untyped_member, size_t size)
{
  interfaces__msg__Position__Sequence * member =
    (interfaces__msg__Position__Sequence *)(untyped_member);
  interfaces__msg__Position__Sequence__fini(member);
  return interfaces__msg__Position__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__GetLastPositions_Response, positions),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Response__positions,  // size() function pointer
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Response__positions,  // get_const(index) function pointer
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Response__positions,  // get(index) function pointer
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Response__positions,  // fetch(index, &value) function pointer
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Response__positions,  // assign(index, value) function pointer
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Response__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_members = {
  "interfaces__srv",  // message namespace
  "GetLastPositions_Response",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__GetLastPositions_Response),
  false,  // has_any_key_member_
  interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_member_array,  // message members
  interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle = {
  0,
  &interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__GetLastPositions_Response__get_type_hash,
  &interfaces__srv__GetLastPositions_Response__get_type_description,
  &interfaces__srv__GetLastPositions_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Response)() {
  interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, Position)();
  if (!interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/get_last_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/get_last_positions__functions.h"
// already included above
// #include "interfaces/srv/detail/get_last_positions__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "interfaces/srv/get_last_positions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/srv/detail/get_last_positions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__GetLastPositions_Event__init(message_memory);
}

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_fini_function(void * message_memory)
{
  interfaces__srv__GetLastPositions_Event__fini(message_memory);
}

size_t interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Event__request(
  const void * untyped_member)
{
  const interfaces__srv__GetLastPositions_Request__Sequence * member =
    (const interfaces__srv__GetLastPositions_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__request(
  const void * untyped_member, size_t index)
{
  const interfaces__srv__GetLastPositions_Request__Sequence * member =
    (const interfaces__srv__GetLastPositions_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__request(
  void * untyped_member, size_t index)
{
  interfaces__srv__GetLastPositions_Request__Sequence * member =
    (interfaces__srv__GetLastPositions_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__srv__GetLastPositions_Request * item =
    ((const interfaces__srv__GetLastPositions_Request *)
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__request(untyped_member, index));
  interfaces__srv__GetLastPositions_Request * value =
    (interfaces__srv__GetLastPositions_Request *)(untyped_value);
  *value = *item;
}

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__srv__GetLastPositions_Request * item =
    ((interfaces__srv__GetLastPositions_Request *)
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__request(untyped_member, index));
  const interfaces__srv__GetLastPositions_Request * value =
    (const interfaces__srv__GetLastPositions_Request *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Event__request(
  void * untyped_member, size_t size)
{
  interfaces__srv__GetLastPositions_Request__Sequence * member =
    (interfaces__srv__GetLastPositions_Request__Sequence *)(untyped_member);
  interfaces__srv__GetLastPositions_Request__Sequence__fini(member);
  return interfaces__srv__GetLastPositions_Request__Sequence__init(member, size);
}

size_t interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Event__response(
  const void * untyped_member)
{
  const interfaces__srv__GetLastPositions_Response__Sequence * member =
    (const interfaces__srv__GetLastPositions_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__response(
  const void * untyped_member, size_t index)
{
  const interfaces__srv__GetLastPositions_Response__Sequence * member =
    (const interfaces__srv__GetLastPositions_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__response(
  void * untyped_member, size_t index)
{
  interfaces__srv__GetLastPositions_Response__Sequence * member =
    (interfaces__srv__GetLastPositions_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__srv__GetLastPositions_Response * item =
    ((const interfaces__srv__GetLastPositions_Response *)
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__response(untyped_member, index));
  interfaces__srv__GetLastPositions_Response * value =
    (interfaces__srv__GetLastPositions_Response *)(untyped_value);
  *value = *item;
}

void interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__srv__GetLastPositions_Response * item =
    ((interfaces__srv__GetLastPositions_Response *)
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__response(untyped_member, index));
  const interfaces__srv__GetLastPositions_Response * value =
    (const interfaces__srv__GetLastPositions_Response *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Event__response(
  void * untyped_member, size_t size)
{
  interfaces__srv__GetLastPositions_Response__Sequence * member =
    (interfaces__srv__GetLastPositions_Response__Sequence *)(untyped_member);
  interfaces__srv__GetLastPositions_Response__Sequence__fini(member);
  return interfaces__srv__GetLastPositions_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__GetLastPositions_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces__srv__GetLastPositions_Event, request),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Event__request,  // size() function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__request,  // get_const(index) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__request,  // get(index) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Event__request,  // fetch(index, &value) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Event__request,  // assign(index, value) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces__srv__GetLastPositions_Event, response),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__size_function__GetLastPositions_Event__response,  // size() function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_const_function__GetLastPositions_Event__response,  // get_const(index) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__get_function__GetLastPositions_Event__response,  // get(index) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__fetch_function__GetLastPositions_Event__response,  // fetch(index, &value) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__assign_function__GetLastPositions_Event__response,  // assign(index, value) function pointer
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__resize_function__GetLastPositions_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_members = {
  "interfaces__srv",  // message namespace
  "GetLastPositions_Event",  // message name
  3,  // number of fields
  sizeof(interfaces__srv__GetLastPositions_Event),
  false,  // has_any_key_member_
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_member_array,  // message members
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_type_support_handle = {
  0,
  &interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__GetLastPositions_Event__get_type_hash,
  &interfaces__srv__GetLastPositions_Event__get_type_description,
  &interfaces__srv__GetLastPositions_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Event)() {
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Request)();
  interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Response)();
  if (!interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/get_last_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_members = {
  "interfaces__srv",  // service namespace
  "GetLastPositions",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle,
  NULL,  // response message
  // interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle
  NULL  // event_message
  // interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle
};


static rosidl_service_type_support_t interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_type_support_handle = {
  0,
  &interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_members,
  get_service_typesupport_handle_function,
  &interfaces__srv__GetLastPositions_Request__rosidl_typesupport_introspection_c__GetLastPositions_Request_message_type_support_handle,
  &interfaces__srv__GetLastPositions_Response__rosidl_typesupport_introspection_c__GetLastPositions_Response_message_type_support_handle,
  &interfaces__srv__GetLastPositions_Event__rosidl_typesupport_introspection_c__GetLastPositions_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    GetLastPositions
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    GetLastPositions
  ),
  &interfaces__srv__GetLastPositions__get_type_hash,
  &interfaces__srv__GetLastPositions__get_type_description,
  &interfaces__srv__GetLastPositions__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions)(void) {
  if (!interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, GetLastPositions_Event)()->data;
  }

  return &interfaces__srv__detail__get_last_positions__rosidl_typesupport_introspection_c__GetLastPositions_service_type_support_handle;
}
