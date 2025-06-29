// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tracking_actions:action/GpsPursuit.idl
// generated code does not contain a copyright notice

#ifndef TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__FUNCTIONS_H_
#define TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tracking_actions/msg/rosidl_generator_c__visibility_control.h"

#include "tracking_actions/action/detail/gps_pursuit__struct.h"

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_Goal
 * )) before or use
 * tracking_actions__action__GpsPursuit_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__init(tracking_actions__action__GpsPursuit_Goal * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Goal__fini(tracking_actions__action__GpsPursuit_Goal * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Goal *
tracking_actions__action__GpsPursuit_Goal__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Goal__destroy(tracking_actions__action__GpsPursuit_Goal * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__are_equal(const tracking_actions__action__GpsPursuit_Goal * lhs, const tracking_actions__action__GpsPursuit_Goal * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__copy(
  const tracking_actions__action__GpsPursuit_Goal * input,
  tracking_actions__action__GpsPursuit_Goal * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__Sequence__init(tracking_actions__action__GpsPursuit_Goal__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Goal__Sequence__fini(tracking_actions__action__GpsPursuit_Goal__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Goal__Sequence *
tracking_actions__action__GpsPursuit_Goal__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Goal__Sequence__destroy(tracking_actions__action__GpsPursuit_Goal__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__Sequence__are_equal(const tracking_actions__action__GpsPursuit_Goal__Sequence * lhs, const tracking_actions__action__GpsPursuit_Goal__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Goal__Sequence__copy(
  const tracking_actions__action__GpsPursuit_Goal__Sequence * input,
  tracking_actions__action__GpsPursuit_Goal__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_Result
 * )) before or use
 * tracking_actions__action__GpsPursuit_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__init(tracking_actions__action__GpsPursuit_Result * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Result__fini(tracking_actions__action__GpsPursuit_Result * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Result *
tracking_actions__action__GpsPursuit_Result__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Result__destroy(tracking_actions__action__GpsPursuit_Result * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__are_equal(const tracking_actions__action__GpsPursuit_Result * lhs, const tracking_actions__action__GpsPursuit_Result * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__copy(
  const tracking_actions__action__GpsPursuit_Result * input,
  tracking_actions__action__GpsPursuit_Result * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__Sequence__init(tracking_actions__action__GpsPursuit_Result__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Result__Sequence__fini(tracking_actions__action__GpsPursuit_Result__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Result__Sequence *
tracking_actions__action__GpsPursuit_Result__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Result__Sequence__destroy(tracking_actions__action__GpsPursuit_Result__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__Sequence__are_equal(const tracking_actions__action__GpsPursuit_Result__Sequence * lhs, const tracking_actions__action__GpsPursuit_Result__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Result__Sequence__copy(
  const tracking_actions__action__GpsPursuit_Result__Sequence * input,
  tracking_actions__action__GpsPursuit_Result__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_Feedback
 * )) before or use
 * tracking_actions__action__GpsPursuit_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__init(tracking_actions__action__GpsPursuit_Feedback * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Feedback__fini(tracking_actions__action__GpsPursuit_Feedback * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Feedback *
tracking_actions__action__GpsPursuit_Feedback__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Feedback__destroy(tracking_actions__action__GpsPursuit_Feedback * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__are_equal(const tracking_actions__action__GpsPursuit_Feedback * lhs, const tracking_actions__action__GpsPursuit_Feedback * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__copy(
  const tracking_actions__action__GpsPursuit_Feedback * input,
  tracking_actions__action__GpsPursuit_Feedback * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__Sequence__init(tracking_actions__action__GpsPursuit_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Feedback__Sequence__fini(tracking_actions__action__GpsPursuit_Feedback__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_Feedback__Sequence *
tracking_actions__action__GpsPursuit_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_Feedback__Sequence__destroy(tracking_actions__action__GpsPursuit_Feedback__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__Sequence__are_equal(const tracking_actions__action__GpsPursuit_Feedback__Sequence * lhs, const tracking_actions__action__GpsPursuit_Feedback__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_Feedback__Sequence__copy(
  const tracking_actions__action__GpsPursuit_Feedback__Sequence * input,
  tracking_actions__action__GpsPursuit_Feedback__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_SendGoal_Request
 * )) before or use
 * tracking_actions__action__GpsPursuit_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__init(tracking_actions__action__GpsPursuit_SendGoal_Request * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Request__fini(tracking_actions__action__GpsPursuit_SendGoal_Request * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_SendGoal_Request *
tracking_actions__action__GpsPursuit_SendGoal_Request__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Request__destroy(tracking_actions__action__GpsPursuit_SendGoal_Request * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__are_equal(const tracking_actions__action__GpsPursuit_SendGoal_Request * lhs, const tracking_actions__action__GpsPursuit_SendGoal_Request * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__copy(
  const tracking_actions__action__GpsPursuit_SendGoal_Request * input,
  tracking_actions__action__GpsPursuit_SendGoal_Request * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__init(tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__fini(tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence *
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__destroy(tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__are_equal(const tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * lhs, const tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence__copy(
  const tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * input,
  tracking_actions__action__GpsPursuit_SendGoal_Request__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_SendGoal_Response
 * )) before or use
 * tracking_actions__action__GpsPursuit_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__init(tracking_actions__action__GpsPursuit_SendGoal_Response * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Response__fini(tracking_actions__action__GpsPursuit_SendGoal_Response * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_SendGoal_Response *
tracking_actions__action__GpsPursuit_SendGoal_Response__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Response__destroy(tracking_actions__action__GpsPursuit_SendGoal_Response * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__are_equal(const tracking_actions__action__GpsPursuit_SendGoal_Response * lhs, const tracking_actions__action__GpsPursuit_SendGoal_Response * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__copy(
  const tracking_actions__action__GpsPursuit_SendGoal_Response * input,
  tracking_actions__action__GpsPursuit_SendGoal_Response * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__init(tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__fini(tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence *
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__destroy(tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__are_equal(const tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * lhs, const tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence__copy(
  const tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * input,
  tracking_actions__action__GpsPursuit_SendGoal_Response__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_GetResult_Request
 * )) before or use
 * tracking_actions__action__GpsPursuit_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__init(tracking_actions__action__GpsPursuit_GetResult_Request * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Request__fini(tracking_actions__action__GpsPursuit_GetResult_Request * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_GetResult_Request *
tracking_actions__action__GpsPursuit_GetResult_Request__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Request__destroy(tracking_actions__action__GpsPursuit_GetResult_Request * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__are_equal(const tracking_actions__action__GpsPursuit_GetResult_Request * lhs, const tracking_actions__action__GpsPursuit_GetResult_Request * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__copy(
  const tracking_actions__action__GpsPursuit_GetResult_Request * input,
  tracking_actions__action__GpsPursuit_GetResult_Request * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__init(tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__fini(tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence *
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__destroy(tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__are_equal(const tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * lhs, const tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Request__Sequence__copy(
  const tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * input,
  tracking_actions__action__GpsPursuit_GetResult_Request__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_GetResult_Response
 * )) before or use
 * tracking_actions__action__GpsPursuit_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__init(tracking_actions__action__GpsPursuit_GetResult_Response * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Response__fini(tracking_actions__action__GpsPursuit_GetResult_Response * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_GetResult_Response *
tracking_actions__action__GpsPursuit_GetResult_Response__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Response__destroy(tracking_actions__action__GpsPursuit_GetResult_Response * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__are_equal(const tracking_actions__action__GpsPursuit_GetResult_Response * lhs, const tracking_actions__action__GpsPursuit_GetResult_Response * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__copy(
  const tracking_actions__action__GpsPursuit_GetResult_Response * input,
  tracking_actions__action__GpsPursuit_GetResult_Response * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__init(tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__fini(tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence *
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__destroy(tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__are_equal(const tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * lhs, const tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_GetResult_Response__Sequence__copy(
  const tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * input,
  tracking_actions__action__GpsPursuit_GetResult_Response__Sequence * output);

/// Initialize action/GpsPursuit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracking_actions__action__GpsPursuit_FeedbackMessage
 * )) before or use
 * tracking_actions__action__GpsPursuit_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__init(tracking_actions__action__GpsPursuit_FeedbackMessage * msg);

/// Finalize action/GpsPursuit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_FeedbackMessage__fini(tracking_actions__action__GpsPursuit_FeedbackMessage * msg);

/// Create action/GpsPursuit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_FeedbackMessage *
tracking_actions__action__GpsPursuit_FeedbackMessage__create();

/// Destroy action/GpsPursuit message.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_FeedbackMessage__destroy(tracking_actions__action__GpsPursuit_FeedbackMessage * msg);

/// Check for action/GpsPursuit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__are_equal(const tracking_actions__action__GpsPursuit_FeedbackMessage * lhs, const tracking_actions__action__GpsPursuit_FeedbackMessage * rhs);

/// Copy a action/GpsPursuit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__copy(
  const tracking_actions__action__GpsPursuit_FeedbackMessage * input,
  tracking_actions__action__GpsPursuit_FeedbackMessage * output);

/// Initialize array of action/GpsPursuit messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__init(tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__fini(tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * array);

/// Create array of action/GpsPursuit messages.
/**
 * It allocates the memory for the array and calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence *
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GpsPursuit messages.
/**
 * It calls
 * tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
void
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__destroy(tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * array);

/// Check for action/GpsPursuit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__are_equal(const tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * lhs, const tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GpsPursuit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracking_actions
bool
tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence__copy(
  const tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * input,
  tracking_actions__action__GpsPursuit_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRACKING_ACTIONS__ACTION__DETAIL__GPS_PURSUIT__FUNCTIONS_H_
