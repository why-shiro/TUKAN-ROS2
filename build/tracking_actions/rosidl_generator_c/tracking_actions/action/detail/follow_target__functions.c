// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tracking_actions:action/FollowTarget.idl
// generated code does not contain a copyright notice
#include "tracking_actions/action/detail/follow_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tracking_actions__action__FollowTarget_Goal__init(tracking_actions__action__FollowTarget_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_uav_id
  // timeout_sec
  return true;
}

void
tracking_actions__action__FollowTarget_Goal__fini(tracking_actions__action__FollowTarget_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_uav_id
  // timeout_sec
}

bool
tracking_actions__action__FollowTarget_Goal__are_equal(const tracking_actions__action__FollowTarget_Goal * lhs, const tracking_actions__action__FollowTarget_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_uav_id
  if (lhs->target_uav_id != rhs->target_uav_id) {
    return false;
  }
  // timeout_sec
  if (lhs->timeout_sec != rhs->timeout_sec) {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Goal__copy(
  const tracking_actions__action__FollowTarget_Goal * input,
  tracking_actions__action__FollowTarget_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_uav_id
  output->target_uav_id = input->target_uav_id;
  // timeout_sec
  output->timeout_sec = input->timeout_sec;
  return true;
}

tracking_actions__action__FollowTarget_Goal *
tracking_actions__action__FollowTarget_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Goal * msg = (tracking_actions__action__FollowTarget_Goal *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_Goal));
  bool success = tracking_actions__action__FollowTarget_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_Goal__destroy(tracking_actions__action__FollowTarget_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_Goal__Sequence__init(tracking_actions__action__FollowTarget_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Goal * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_Goal *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_Goal__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_Goal__Sequence__fini(tracking_actions__action__FollowTarget_Goal__Sequence * array)
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
      tracking_actions__action__FollowTarget_Goal__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_Goal__Sequence *
tracking_actions__action__FollowTarget_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Goal__Sequence * array = (tracking_actions__action__FollowTarget_Goal__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_Goal__Sequence__destroy(tracking_actions__action__FollowTarget_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_Goal__Sequence__are_equal(const tracking_actions__action__FollowTarget_Goal__Sequence * lhs, const tracking_actions__action__FollowTarget_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Goal__Sequence__copy(
  const tracking_actions__action__FollowTarget_Goal__Sequence * input,
  tracking_actions__action__FollowTarget_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_Goal * data =
      (tracking_actions__action__FollowTarget_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
tracking_actions__action__FollowTarget_Result__init(tracking_actions__action__FollowTarget_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    tracking_actions__action__FollowTarget_Result__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_Result__fini(tracking_actions__action__FollowTarget_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
tracking_actions__action__FollowTarget_Result__are_equal(const tracking_actions__action__FollowTarget_Result * lhs, const tracking_actions__action__FollowTarget_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Result__copy(
  const tracking_actions__action__FollowTarget_Result * input,
  tracking_actions__action__FollowTarget_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

tracking_actions__action__FollowTarget_Result *
tracking_actions__action__FollowTarget_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Result * msg = (tracking_actions__action__FollowTarget_Result *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_Result));
  bool success = tracking_actions__action__FollowTarget_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_Result__destroy(tracking_actions__action__FollowTarget_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_Result__Sequence__init(tracking_actions__action__FollowTarget_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Result * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_Result *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_Result__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_Result__Sequence__fini(tracking_actions__action__FollowTarget_Result__Sequence * array)
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
      tracking_actions__action__FollowTarget_Result__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_Result__Sequence *
tracking_actions__action__FollowTarget_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Result__Sequence * array = (tracking_actions__action__FollowTarget_Result__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_Result__Sequence__destroy(tracking_actions__action__FollowTarget_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_Result__Sequence__are_equal(const tracking_actions__action__FollowTarget_Result__Sequence * lhs, const tracking_actions__action__FollowTarget_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Result__Sequence__copy(
  const tracking_actions__action__FollowTarget_Result__Sequence * input,
  tracking_actions__action__FollowTarget_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_Result * data =
      (tracking_actions__action__FollowTarget_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tracking_actions__action__FollowTarget_Feedback__init(tracking_actions__action__FollowTarget_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // target_visible
  // x_offset
  // y_offset
  return true;
}

void
tracking_actions__action__FollowTarget_Feedback__fini(tracking_actions__action__FollowTarget_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // target_visible
  // x_offset
  // y_offset
}

bool
tracking_actions__action__FollowTarget_Feedback__are_equal(const tracking_actions__action__FollowTarget_Feedback * lhs, const tracking_actions__action__FollowTarget_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_visible
  if (lhs->target_visible != rhs->target_visible) {
    return false;
  }
  // x_offset
  if (lhs->x_offset != rhs->x_offset) {
    return false;
  }
  // y_offset
  if (lhs->y_offset != rhs->y_offset) {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Feedback__copy(
  const tracking_actions__action__FollowTarget_Feedback * input,
  tracking_actions__action__FollowTarget_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // target_visible
  output->target_visible = input->target_visible;
  // x_offset
  output->x_offset = input->x_offset;
  // y_offset
  output->y_offset = input->y_offset;
  return true;
}

tracking_actions__action__FollowTarget_Feedback *
tracking_actions__action__FollowTarget_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Feedback * msg = (tracking_actions__action__FollowTarget_Feedback *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_Feedback));
  bool success = tracking_actions__action__FollowTarget_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_Feedback__destroy(tracking_actions__action__FollowTarget_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_Feedback__Sequence__init(tracking_actions__action__FollowTarget_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Feedback * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_Feedback *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_Feedback__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_Feedback__Sequence__fini(tracking_actions__action__FollowTarget_Feedback__Sequence * array)
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
      tracking_actions__action__FollowTarget_Feedback__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_Feedback__Sequence *
tracking_actions__action__FollowTarget_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_Feedback__Sequence * array = (tracking_actions__action__FollowTarget_Feedback__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_Feedback__Sequence__destroy(tracking_actions__action__FollowTarget_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_Feedback__Sequence__are_equal(const tracking_actions__action__FollowTarget_Feedback__Sequence * lhs, const tracking_actions__action__FollowTarget_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_Feedback__Sequence__copy(
  const tracking_actions__action__FollowTarget_Feedback__Sequence * input,
  tracking_actions__action__FollowTarget_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_Feedback * data =
      (tracking_actions__action__FollowTarget_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_Feedback__copy(
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
// #include "tracking_actions/action/detail/follow_target__functions.h"

bool
tracking_actions__action__FollowTarget_SendGoal_Request__init(tracking_actions__action__FollowTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tracking_actions__action__FollowTarget_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tracking_actions__action__FollowTarget_Goal__init(&msg->goal)) {
    tracking_actions__action__FollowTarget_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_SendGoal_Request__fini(tracking_actions__action__FollowTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tracking_actions__action__FollowTarget_Goal__fini(&msg->goal);
}

bool
tracking_actions__action__FollowTarget_SendGoal_Request__are_equal(const tracking_actions__action__FollowTarget_SendGoal_Request * lhs, const tracking_actions__action__FollowTarget_SendGoal_Request * rhs)
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
  if (!tracking_actions__action__FollowTarget_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_SendGoal_Request__copy(
  const tracking_actions__action__FollowTarget_SendGoal_Request * input,
  tracking_actions__action__FollowTarget_SendGoal_Request * output)
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
  if (!tracking_actions__action__FollowTarget_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tracking_actions__action__FollowTarget_SendGoal_Request *
tracking_actions__action__FollowTarget_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Request * msg = (tracking_actions__action__FollowTarget_SendGoal_Request *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_SendGoal_Request));
  bool success = tracking_actions__action__FollowTarget_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_SendGoal_Request__destroy(tracking_actions__action__FollowTarget_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__init(tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Request * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_SendGoal_Request__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__fini(tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * array)
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
      tracking_actions__action__FollowTarget_SendGoal_Request__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_SendGoal_Request__Sequence *
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * array = (tracking_actions__action__FollowTarget_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__destroy(tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__are_equal(const tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * lhs, const tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_SendGoal_Request__Sequence__copy(
  const tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * input,
  tracking_actions__action__FollowTarget_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_SendGoal_Request * data =
      (tracking_actions__action__FollowTarget_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_SendGoal_Request__copy(
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
tracking_actions__action__FollowTarget_SendGoal_Response__init(tracking_actions__action__FollowTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tracking_actions__action__FollowTarget_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_SendGoal_Response__fini(tracking_actions__action__FollowTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tracking_actions__action__FollowTarget_SendGoal_Response__are_equal(const tracking_actions__action__FollowTarget_SendGoal_Response * lhs, const tracking_actions__action__FollowTarget_SendGoal_Response * rhs)
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
tracking_actions__action__FollowTarget_SendGoal_Response__copy(
  const tracking_actions__action__FollowTarget_SendGoal_Response * input,
  tracking_actions__action__FollowTarget_SendGoal_Response * output)
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

tracking_actions__action__FollowTarget_SendGoal_Response *
tracking_actions__action__FollowTarget_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Response * msg = (tracking_actions__action__FollowTarget_SendGoal_Response *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_SendGoal_Response));
  bool success = tracking_actions__action__FollowTarget_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_SendGoal_Response__destroy(tracking_actions__action__FollowTarget_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__init(tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Response * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_SendGoal_Response__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__fini(tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * array)
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
      tracking_actions__action__FollowTarget_SendGoal_Response__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_SendGoal_Response__Sequence *
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * array = (tracking_actions__action__FollowTarget_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__destroy(tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__are_equal(const tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * lhs, const tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_SendGoal_Response__Sequence__copy(
  const tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * input,
  tracking_actions__action__FollowTarget_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_SendGoal_Response * data =
      (tracking_actions__action__FollowTarget_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_SendGoal_Response__copy(
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
tracking_actions__action__FollowTarget_GetResult_Request__init(tracking_actions__action__FollowTarget_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tracking_actions__action__FollowTarget_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_GetResult_Request__fini(tracking_actions__action__FollowTarget_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tracking_actions__action__FollowTarget_GetResult_Request__are_equal(const tracking_actions__action__FollowTarget_GetResult_Request * lhs, const tracking_actions__action__FollowTarget_GetResult_Request * rhs)
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
tracking_actions__action__FollowTarget_GetResult_Request__copy(
  const tracking_actions__action__FollowTarget_GetResult_Request * input,
  tracking_actions__action__FollowTarget_GetResult_Request * output)
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

tracking_actions__action__FollowTarget_GetResult_Request *
tracking_actions__action__FollowTarget_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Request * msg = (tracking_actions__action__FollowTarget_GetResult_Request *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_GetResult_Request));
  bool success = tracking_actions__action__FollowTarget_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_GetResult_Request__destroy(tracking_actions__action__FollowTarget_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__init(tracking_actions__action__FollowTarget_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Request * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_GetResult_Request *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_GetResult_Request__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__fini(tracking_actions__action__FollowTarget_GetResult_Request__Sequence * array)
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
      tracking_actions__action__FollowTarget_GetResult_Request__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_GetResult_Request__Sequence *
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Request__Sequence * array = (tracking_actions__action__FollowTarget_GetResult_Request__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__destroy(tracking_actions__action__FollowTarget_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__are_equal(const tracking_actions__action__FollowTarget_GetResult_Request__Sequence * lhs, const tracking_actions__action__FollowTarget_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_GetResult_Request__Sequence__copy(
  const tracking_actions__action__FollowTarget_GetResult_Request__Sequence * input,
  tracking_actions__action__FollowTarget_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_GetResult_Request * data =
      (tracking_actions__action__FollowTarget_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_GetResult_Request__copy(
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
// #include "tracking_actions/action/detail/follow_target__functions.h"

bool
tracking_actions__action__FollowTarget_GetResult_Response__init(tracking_actions__action__FollowTarget_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tracking_actions__action__FollowTarget_Result__init(&msg->result)) {
    tracking_actions__action__FollowTarget_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_GetResult_Response__fini(tracking_actions__action__FollowTarget_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tracking_actions__action__FollowTarget_Result__fini(&msg->result);
}

bool
tracking_actions__action__FollowTarget_GetResult_Response__are_equal(const tracking_actions__action__FollowTarget_GetResult_Response * lhs, const tracking_actions__action__FollowTarget_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tracking_actions__action__FollowTarget_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_GetResult_Response__copy(
  const tracking_actions__action__FollowTarget_GetResult_Response * input,
  tracking_actions__action__FollowTarget_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tracking_actions__action__FollowTarget_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tracking_actions__action__FollowTarget_GetResult_Response *
tracking_actions__action__FollowTarget_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Response * msg = (tracking_actions__action__FollowTarget_GetResult_Response *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_GetResult_Response));
  bool success = tracking_actions__action__FollowTarget_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_GetResult_Response__destroy(tracking_actions__action__FollowTarget_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__init(tracking_actions__action__FollowTarget_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Response * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_GetResult_Response *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_GetResult_Response__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__fini(tracking_actions__action__FollowTarget_GetResult_Response__Sequence * array)
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
      tracking_actions__action__FollowTarget_GetResult_Response__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_GetResult_Response__Sequence *
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_GetResult_Response__Sequence * array = (tracking_actions__action__FollowTarget_GetResult_Response__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__destroy(tracking_actions__action__FollowTarget_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__are_equal(const tracking_actions__action__FollowTarget_GetResult_Response__Sequence * lhs, const tracking_actions__action__FollowTarget_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_GetResult_Response__Sequence__copy(
  const tracking_actions__action__FollowTarget_GetResult_Response__Sequence * input,
  tracking_actions__action__FollowTarget_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_GetResult_Response * data =
      (tracking_actions__action__FollowTarget_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_GetResult_Response__copy(
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
// #include "tracking_actions/action/detail/follow_target__functions.h"

bool
tracking_actions__action__FollowTarget_FeedbackMessage__init(tracking_actions__action__FollowTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tracking_actions__action__FollowTarget_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tracking_actions__action__FollowTarget_Feedback__init(&msg->feedback)) {
    tracking_actions__action__FollowTarget_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tracking_actions__action__FollowTarget_FeedbackMessage__fini(tracking_actions__action__FollowTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tracking_actions__action__FollowTarget_Feedback__fini(&msg->feedback);
}

bool
tracking_actions__action__FollowTarget_FeedbackMessage__are_equal(const tracking_actions__action__FollowTarget_FeedbackMessage * lhs, const tracking_actions__action__FollowTarget_FeedbackMessage * rhs)
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
  if (!tracking_actions__action__FollowTarget_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_FeedbackMessage__copy(
  const tracking_actions__action__FollowTarget_FeedbackMessage * input,
  tracking_actions__action__FollowTarget_FeedbackMessage * output)
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
  if (!tracking_actions__action__FollowTarget_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tracking_actions__action__FollowTarget_FeedbackMessage *
tracking_actions__action__FollowTarget_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_FeedbackMessage * msg = (tracking_actions__action__FollowTarget_FeedbackMessage *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tracking_actions__action__FollowTarget_FeedbackMessage));
  bool success = tracking_actions__action__FollowTarget_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tracking_actions__action__FollowTarget_FeedbackMessage__destroy(tracking_actions__action__FollowTarget_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tracking_actions__action__FollowTarget_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__init(tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_FeedbackMessage * data = NULL;

  if (size) {
    data = (tracking_actions__action__FollowTarget_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tracking_actions__action__FollowTarget_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tracking_actions__action__FollowTarget_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tracking_actions__action__FollowTarget_FeedbackMessage__fini(&data[i - 1]);
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
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__fini(tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * array)
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
      tracking_actions__action__FollowTarget_FeedbackMessage__fini(&array->data[i]);
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

tracking_actions__action__FollowTarget_FeedbackMessage__Sequence *
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * array = (tracking_actions__action__FollowTarget_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tracking_actions__action__FollowTarget_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__destroy(tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__are_equal(const tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * lhs, const tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tracking_actions__action__FollowTarget_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tracking_actions__action__FollowTarget_FeedbackMessage__Sequence__copy(
  const tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * input,
  tracking_actions__action__FollowTarget_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tracking_actions__action__FollowTarget_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tracking_actions__action__FollowTarget_FeedbackMessage * data =
      (tracking_actions__action__FollowTarget_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tracking_actions__action__FollowTarget_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tracking_actions__action__FollowTarget_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tracking_actions__action__FollowTarget_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
