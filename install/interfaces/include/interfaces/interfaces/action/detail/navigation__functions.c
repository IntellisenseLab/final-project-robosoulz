// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:action/Navigation.idl
// generated code does not contain a copyright notice
#include "interfaces/action/detail/navigation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `end_position`
#include "interfaces/msg/detail/position__functions.h"

bool
interfaces__action__Navigation_Goal__init(interfaces__action__Navigation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // end_position
  if (!interfaces__msg__Position__init(&msg->end_position)) {
    interfaces__action__Navigation_Goal__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_Goal__fini(interfaces__action__Navigation_Goal * msg)
{
  if (!msg) {
    return;
  }
  // end_position
  interfaces__msg__Position__fini(&msg->end_position);
}

bool
interfaces__action__Navigation_Goal__are_equal(const interfaces__action__Navigation_Goal * lhs, const interfaces__action__Navigation_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // end_position
  if (!interfaces__msg__Position__are_equal(
      &(lhs->end_position), &(rhs->end_position)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_Goal__copy(
  const interfaces__action__Navigation_Goal * input,
  interfaces__action__Navigation_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // end_position
  if (!interfaces__msg__Position__copy(
      &(input->end_position), &(output->end_position)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_Goal *
interfaces__action__Navigation_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Goal * msg = (interfaces__action__Navigation_Goal *)allocator.allocate(sizeof(interfaces__action__Navigation_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_Goal));
  bool success = interfaces__action__Navigation_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_Goal__destroy(interfaces__action__Navigation_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_Goal__Sequence__init(interfaces__action__Navigation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Goal * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_Goal *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_Goal__Sequence__fini(interfaces__action__Navigation_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_Goal__Sequence *
interfaces__action__Navigation_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Goal__Sequence * array = (interfaces__action__Navigation_Goal__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_Goal__Sequence__destroy(interfaces__action__Navigation_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_Goal__Sequence__are_equal(const interfaces__action__Navigation_Goal__Sequence * lhs, const interfaces__action__Navigation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_Goal__Sequence__copy(
  const interfaces__action__Navigation_Goal__Sequence * input,
  interfaces__action__Navigation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_Goal * data =
      (interfaces__action__Navigation_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interfaces__action__Navigation_Result__init(interfaces__action__Navigation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
interfaces__action__Navigation_Result__fini(interfaces__action__Navigation_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
interfaces__action__Navigation_Result__are_equal(const interfaces__action__Navigation_Result * lhs, const interfaces__action__Navigation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_Result__copy(
  const interfaces__action__Navigation_Result * input,
  interfaces__action__Navigation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

interfaces__action__Navigation_Result *
interfaces__action__Navigation_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Result * msg = (interfaces__action__Navigation_Result *)allocator.allocate(sizeof(interfaces__action__Navigation_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_Result));
  bool success = interfaces__action__Navigation_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_Result__destroy(interfaces__action__Navigation_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_Result__Sequence__init(interfaces__action__Navigation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Result * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_Result *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_Result__Sequence__fini(interfaces__action__Navigation_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_Result__Sequence *
interfaces__action__Navigation_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Result__Sequence * array = (interfaces__action__Navigation_Result__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_Result__Sequence__destroy(interfaces__action__Navigation_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_Result__Sequence__are_equal(const interfaces__action__Navigation_Result__Sequence * lhs, const interfaces__action__Navigation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_Result__Sequence__copy(
  const interfaces__action__Navigation_Result__Sequence * input,
  interfaces__action__Navigation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_Result * data =
      (interfaces__action__Navigation_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interfaces__action__Navigation_Feedback__init(interfaces__action__Navigation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  return true;
}

void
interfaces__action__Navigation_Feedback__fini(interfaces__action__Navigation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // direction
}

bool
interfaces__action__Navigation_Feedback__are_equal(const interfaces__action__Navigation_Feedback * lhs, const interfaces__action__Navigation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_Feedback__copy(
  const interfaces__action__Navigation_Feedback * input,
  interfaces__action__Navigation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  return true;
}

interfaces__action__Navigation_Feedback *
interfaces__action__Navigation_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Feedback * msg = (interfaces__action__Navigation_Feedback *)allocator.allocate(sizeof(interfaces__action__Navigation_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_Feedback));
  bool success = interfaces__action__Navigation_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_Feedback__destroy(interfaces__action__Navigation_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_Feedback__Sequence__init(interfaces__action__Navigation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Feedback * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_Feedback *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_Feedback__Sequence__fini(interfaces__action__Navigation_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_Feedback__Sequence *
interfaces__action__Navigation_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_Feedback__Sequence * array = (interfaces__action__Navigation_Feedback__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_Feedback__Sequence__destroy(interfaces__action__Navigation_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_Feedback__Sequence__are_equal(const interfaces__action__Navigation_Feedback__Sequence * lhs, const interfaces__action__Navigation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_Feedback__Sequence__copy(
  const interfaces__action__Navigation_Feedback__Sequence * input,
  interfaces__action__Navigation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_Feedback * data =
      (interfaces__action__Navigation_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "interfaces/action/detail/navigation__functions.h"

bool
interfaces__action__Navigation_SendGoal_Request__init(interfaces__action__Navigation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__Navigation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!interfaces__action__Navigation_Goal__init(&msg->goal)) {
    interfaces__action__Navigation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_SendGoal_Request__fini(interfaces__action__Navigation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  interfaces__action__Navigation_Goal__fini(&msg->goal);
}

bool
interfaces__action__Navigation_SendGoal_Request__are_equal(const interfaces__action__Navigation_SendGoal_Request * lhs, const interfaces__action__Navigation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!interfaces__action__Navigation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Request__copy(
  const interfaces__action__Navigation_SendGoal_Request * input,
  interfaces__action__Navigation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!interfaces__action__Navigation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_SendGoal_Request *
interfaces__action__Navigation_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Request * msg = (interfaces__action__Navigation_SendGoal_Request *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_SendGoal_Request));
  bool success = interfaces__action__Navigation_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_SendGoal_Request__destroy(interfaces__action__Navigation_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_SendGoal_Request__Sequence__init(interfaces__action__Navigation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Request * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_SendGoal_Request *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_SendGoal_Request__Sequence__fini(interfaces__action__Navigation_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_SendGoal_Request__Sequence *
interfaces__action__Navigation_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Request__Sequence * array = (interfaces__action__Navigation_SendGoal_Request__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_SendGoal_Request__Sequence__destroy(interfaces__action__Navigation_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_SendGoal_Request__Sequence__are_equal(const interfaces__action__Navigation_SendGoal_Request__Sequence * lhs, const interfaces__action__Navigation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Request__Sequence__copy(
  const interfaces__action__Navigation_SendGoal_Request__Sequence * input,
  interfaces__action__Navigation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_SendGoal_Request * data =
      (interfaces__action__Navigation_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__action__Navigation_SendGoal_Response__init(interfaces__action__Navigation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interfaces__action__Navigation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_SendGoal_Response__fini(interfaces__action__Navigation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
interfaces__action__Navigation_SendGoal_Response__are_equal(const interfaces__action__Navigation_SendGoal_Response * lhs, const interfaces__action__Navigation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Response__copy(
  const interfaces__action__Navigation_SendGoal_Response * input,
  interfaces__action__Navigation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_SendGoal_Response *
interfaces__action__Navigation_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Response * msg = (interfaces__action__Navigation_SendGoal_Response *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_SendGoal_Response));
  bool success = interfaces__action__Navigation_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_SendGoal_Response__destroy(interfaces__action__Navigation_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_SendGoal_Response__Sequence__init(interfaces__action__Navigation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Response * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_SendGoal_Response *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_SendGoal_Response__Sequence__fini(interfaces__action__Navigation_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_SendGoal_Response__Sequence *
interfaces__action__Navigation_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Response__Sequence * array = (interfaces__action__Navigation_SendGoal_Response__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_SendGoal_Response__Sequence__destroy(interfaces__action__Navigation_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_SendGoal_Response__Sequence__are_equal(const interfaces__action__Navigation_SendGoal_Response__Sequence * lhs, const interfaces__action__Navigation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Response__Sequence__copy(
  const interfaces__action__Navigation_SendGoal_Response__Sequence * input,
  interfaces__action__Navigation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_SendGoal_Response * data =
      (interfaces__action__Navigation_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/action/detail/navigation__functions.h"

bool
interfaces__action__Navigation_SendGoal_Event__init(interfaces__action__Navigation_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces__action__Navigation_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces__action__Navigation_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    interfaces__action__Navigation_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces__action__Navigation_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    interfaces__action__Navigation_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_SendGoal_Event__fini(interfaces__action__Navigation_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces__action__Navigation_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  interfaces__action__Navigation_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
interfaces__action__Navigation_SendGoal_Event__are_equal(const interfaces__action__Navigation_SendGoal_Event * lhs, const interfaces__action__Navigation_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__Navigation_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__Navigation_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Event__copy(
  const interfaces__action__Navigation_SendGoal_Event * input,
  interfaces__action__Navigation_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__Navigation_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__Navigation_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_SendGoal_Event *
interfaces__action__Navigation_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Event * msg = (interfaces__action__Navigation_SendGoal_Event *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_SendGoal_Event));
  bool success = interfaces__action__Navigation_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_SendGoal_Event__destroy(interfaces__action__Navigation_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_SendGoal_Event__Sequence__init(interfaces__action__Navigation_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Event * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_SendGoal_Event *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_SendGoal_Event__Sequence__fini(interfaces__action__Navigation_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_SendGoal_Event__Sequence *
interfaces__action__Navigation_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_SendGoal_Event__Sequence * array = (interfaces__action__Navigation_SendGoal_Event__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_SendGoal_Event__Sequence__destroy(interfaces__action__Navigation_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_SendGoal_Event__Sequence__are_equal(const interfaces__action__Navigation_SendGoal_Event__Sequence * lhs, const interfaces__action__Navigation_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_SendGoal_Event__Sequence__copy(
  const interfaces__action__Navigation_SendGoal_Event__Sequence * input,
  interfaces__action__Navigation_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_SendGoal_Event * data =
      (interfaces__action__Navigation_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
interfaces__action__Navigation_GetResult_Request__init(interfaces__action__Navigation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__Navigation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_GetResult_Request__fini(interfaces__action__Navigation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
interfaces__action__Navigation_GetResult_Request__are_equal(const interfaces__action__Navigation_GetResult_Request * lhs, const interfaces__action__Navigation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Request__copy(
  const interfaces__action__Navigation_GetResult_Request * input,
  interfaces__action__Navigation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_GetResult_Request *
interfaces__action__Navigation_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Request * msg = (interfaces__action__Navigation_GetResult_Request *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_GetResult_Request));
  bool success = interfaces__action__Navigation_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_GetResult_Request__destroy(interfaces__action__Navigation_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_GetResult_Request__Sequence__init(interfaces__action__Navigation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Request * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_GetResult_Request *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_GetResult_Request__Sequence__fini(interfaces__action__Navigation_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_GetResult_Request__Sequence *
interfaces__action__Navigation_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Request__Sequence * array = (interfaces__action__Navigation_GetResult_Request__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_GetResult_Request__Sequence__destroy(interfaces__action__Navigation_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_GetResult_Request__Sequence__are_equal(const interfaces__action__Navigation_GetResult_Request__Sequence * lhs, const interfaces__action__Navigation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Request__Sequence__copy(
  const interfaces__action__Navigation_GetResult_Request__Sequence * input,
  interfaces__action__Navigation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_GetResult_Request * data =
      (interfaces__action__Navigation_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "interfaces/action/detail/navigation__functions.h"

bool
interfaces__action__Navigation_GetResult_Response__init(interfaces__action__Navigation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!interfaces__action__Navigation_Result__init(&msg->result)) {
    interfaces__action__Navigation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_GetResult_Response__fini(interfaces__action__Navigation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  interfaces__action__Navigation_Result__fini(&msg->result);
}

bool
interfaces__action__Navigation_GetResult_Response__are_equal(const interfaces__action__Navigation_GetResult_Response * lhs, const interfaces__action__Navigation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!interfaces__action__Navigation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Response__copy(
  const interfaces__action__Navigation_GetResult_Response * input,
  interfaces__action__Navigation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!interfaces__action__Navigation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_GetResult_Response *
interfaces__action__Navigation_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Response * msg = (interfaces__action__Navigation_GetResult_Response *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_GetResult_Response));
  bool success = interfaces__action__Navigation_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_GetResult_Response__destroy(interfaces__action__Navigation_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_GetResult_Response__Sequence__init(interfaces__action__Navigation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Response * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_GetResult_Response *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_GetResult_Response__Sequence__fini(interfaces__action__Navigation_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_GetResult_Response__Sequence *
interfaces__action__Navigation_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Response__Sequence * array = (interfaces__action__Navigation_GetResult_Response__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_GetResult_Response__Sequence__destroy(interfaces__action__Navigation_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_GetResult_Response__Sequence__are_equal(const interfaces__action__Navigation_GetResult_Response__Sequence * lhs, const interfaces__action__Navigation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Response__Sequence__copy(
  const interfaces__action__Navigation_GetResult_Response__Sequence * input,
  interfaces__action__Navigation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_GetResult_Response * data =
      (interfaces__action__Navigation_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/action/detail/navigation__functions.h"

bool
interfaces__action__Navigation_GetResult_Event__init(interfaces__action__Navigation_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces__action__Navigation_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces__action__Navigation_GetResult_Request__Sequence__init(&msg->request, 0)) {
    interfaces__action__Navigation_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces__action__Navigation_GetResult_Response__Sequence__init(&msg->response, 0)) {
    interfaces__action__Navigation_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_GetResult_Event__fini(interfaces__action__Navigation_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces__action__Navigation_GetResult_Request__Sequence__fini(&msg->request);
  // response
  interfaces__action__Navigation_GetResult_Response__Sequence__fini(&msg->response);
}

bool
interfaces__action__Navigation_GetResult_Event__are_equal(const interfaces__action__Navigation_GetResult_Event * lhs, const interfaces__action__Navigation_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__Navigation_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__Navigation_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Event__copy(
  const interfaces__action__Navigation_GetResult_Event * input,
  interfaces__action__Navigation_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__Navigation_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__Navigation_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_GetResult_Event *
interfaces__action__Navigation_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Event * msg = (interfaces__action__Navigation_GetResult_Event *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_GetResult_Event));
  bool success = interfaces__action__Navigation_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_GetResult_Event__destroy(interfaces__action__Navigation_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_GetResult_Event__Sequence__init(interfaces__action__Navigation_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Event * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_GetResult_Event *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_GetResult_Event__Sequence__fini(interfaces__action__Navigation_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_GetResult_Event__Sequence *
interfaces__action__Navigation_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_GetResult_Event__Sequence * array = (interfaces__action__Navigation_GetResult_Event__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_GetResult_Event__Sequence__destroy(interfaces__action__Navigation_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_GetResult_Event__Sequence__are_equal(const interfaces__action__Navigation_GetResult_Event__Sequence * lhs, const interfaces__action__Navigation_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_GetResult_Event__Sequence__copy(
  const interfaces__action__Navigation_GetResult_Event__Sequence * input,
  interfaces__action__Navigation_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_GetResult_Event * data =
      (interfaces__action__Navigation_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "interfaces/action/detail/navigation__functions.h"

bool
interfaces__action__Navigation_FeedbackMessage__init(interfaces__action__Navigation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__Navigation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!interfaces__action__Navigation_Feedback__init(&msg->feedback)) {
    interfaces__action__Navigation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__Navigation_FeedbackMessage__fini(interfaces__action__Navigation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  interfaces__action__Navigation_Feedback__fini(&msg->feedback);
}

bool
interfaces__action__Navigation_FeedbackMessage__are_equal(const interfaces__action__Navigation_FeedbackMessage * lhs, const interfaces__action__Navigation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interfaces__action__Navigation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__Navigation_FeedbackMessage__copy(
  const interfaces__action__Navigation_FeedbackMessage * input,
  interfaces__action__Navigation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interfaces__action__Navigation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

interfaces__action__Navigation_FeedbackMessage *
interfaces__action__Navigation_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_FeedbackMessage * msg = (interfaces__action__Navigation_FeedbackMessage *)allocator.allocate(sizeof(interfaces__action__Navigation_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__Navigation_FeedbackMessage));
  bool success = interfaces__action__Navigation_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__Navigation_FeedbackMessage__destroy(interfaces__action__Navigation_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__Navigation_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__Navigation_FeedbackMessage__Sequence__init(interfaces__action__Navigation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_FeedbackMessage * data = NULL;

  if (size) {
    data = (interfaces__action__Navigation_FeedbackMessage *)allocator.zero_allocate(size, sizeof(interfaces__action__Navigation_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__Navigation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__Navigation_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__action__Navigation_FeedbackMessage__Sequence__fini(interfaces__action__Navigation_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__action__Navigation_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__action__Navigation_FeedbackMessage__Sequence *
interfaces__action__Navigation_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__Navigation_FeedbackMessage__Sequence * array = (interfaces__action__Navigation_FeedbackMessage__Sequence *)allocator.allocate(sizeof(interfaces__action__Navigation_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__Navigation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__Navigation_FeedbackMessage__Sequence__destroy(interfaces__action__Navigation_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__Navigation_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__Navigation_FeedbackMessage__Sequence__are_equal(const interfaces__action__Navigation_FeedbackMessage__Sequence * lhs, const interfaces__action__Navigation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__Navigation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__Navigation_FeedbackMessage__Sequence__copy(
  const interfaces__action__Navigation_FeedbackMessage__Sequence * input,
  interfaces__action__Navigation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__Navigation_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__Navigation_FeedbackMessage * data =
      (interfaces__action__Navigation_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__Navigation_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__Navigation_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__Navigation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
