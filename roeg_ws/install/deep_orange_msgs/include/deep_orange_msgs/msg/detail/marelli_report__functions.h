// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from deep_orange_msgs:msg/MarelliReport.idl
// generated code does not contain a copyright notice

#ifndef DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__FUNCTIONS_H_
#define DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "deep_orange_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "deep_orange_msgs/msg/detail/marelli_report__struct.h"

/// Initialize msg/MarelliReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * deep_orange_msgs__msg__MarelliReport
 * )) before or use
 * deep_orange_msgs__msg__MarelliReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__init(deep_orange_msgs__msg__MarelliReport * msg);

/// Finalize msg/MarelliReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
void
deep_orange_msgs__msg__MarelliReport__fini(deep_orange_msgs__msg__MarelliReport * msg);

/// Create msg/MarelliReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * deep_orange_msgs__msg__MarelliReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
deep_orange_msgs__msg__MarelliReport *
deep_orange_msgs__msg__MarelliReport__create();

/// Destroy msg/MarelliReport message.
/**
 * It calls
 * deep_orange_msgs__msg__MarelliReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
void
deep_orange_msgs__msg__MarelliReport__destroy(deep_orange_msgs__msg__MarelliReport * msg);

/// Check for msg/MarelliReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__are_equal(const deep_orange_msgs__msg__MarelliReport * lhs, const deep_orange_msgs__msg__MarelliReport * rhs);

/// Copy a msg/MarelliReport message.
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
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__copy(
  const deep_orange_msgs__msg__MarelliReport * input,
  deep_orange_msgs__msg__MarelliReport * output);

/// Initialize array of msg/MarelliReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * deep_orange_msgs__msg__MarelliReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__Sequence__init(deep_orange_msgs__msg__MarelliReport__Sequence * array, size_t size);

/// Finalize array of msg/MarelliReport messages.
/**
 * It calls
 * deep_orange_msgs__msg__MarelliReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
void
deep_orange_msgs__msg__MarelliReport__Sequence__fini(deep_orange_msgs__msg__MarelliReport__Sequence * array);

/// Create array of msg/MarelliReport messages.
/**
 * It allocates the memory for the array and calls
 * deep_orange_msgs__msg__MarelliReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
deep_orange_msgs__msg__MarelliReport__Sequence *
deep_orange_msgs__msg__MarelliReport__Sequence__create(size_t size);

/// Destroy array of msg/MarelliReport messages.
/**
 * It calls
 * deep_orange_msgs__msg__MarelliReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
void
deep_orange_msgs__msg__MarelliReport__Sequence__destroy(deep_orange_msgs__msg__MarelliReport__Sequence * array);

/// Check for msg/MarelliReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__Sequence__are_equal(const deep_orange_msgs__msg__MarelliReport__Sequence * lhs, const deep_orange_msgs__msg__MarelliReport__Sequence * rhs);

/// Copy an array of msg/MarelliReport messages.
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
ROSIDL_GENERATOR_C_PUBLIC_deep_orange_msgs
bool
deep_orange_msgs__msg__MarelliReport__Sequence__copy(
  const deep_orange_msgs__msg__MarelliReport__Sequence * input,
  deep_orange_msgs__msg__MarelliReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DEEP_ORANGE_MSGS__MSG__DETAIL__MARELLI_REPORT__FUNCTIONS_H_
