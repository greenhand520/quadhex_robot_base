// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hexapod_sensor_interface:msg/BoardState.idl
// generated code does not contain a copyright notice

#ifndef HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__FUNCTIONS_H_
#define HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hexapod_sensor_interface/msg/rosidl_generator_c__visibility_control.h"

#include "hexapod_sensor_interface/msg/detail/board_state__struct.h"

/// Initialize msg/BoardState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hexapod_sensor_interface__msg__BoardState
 * )) before or use
 * hexapod_sensor_interface__msg__BoardState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__init(hexapod_sensor_interface__msg__BoardState * msg);

/// Finalize msg/BoardState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
void
hexapod_sensor_interface__msg__BoardState__fini(hexapod_sensor_interface__msg__BoardState * msg);

/// Create msg/BoardState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hexapod_sensor_interface__msg__BoardState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
hexapod_sensor_interface__msg__BoardState *
hexapod_sensor_interface__msg__BoardState__create();

/// Destroy msg/BoardState message.
/**
 * It calls
 * hexapod_sensor_interface__msg__BoardState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
void
hexapod_sensor_interface__msg__BoardState__destroy(hexapod_sensor_interface__msg__BoardState * msg);

/// Check for msg/BoardState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__are_equal(const hexapod_sensor_interface__msg__BoardState * lhs, const hexapod_sensor_interface__msg__BoardState * rhs);

/// Copy a msg/BoardState message.
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
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__copy(
  const hexapod_sensor_interface__msg__BoardState * input,
  hexapod_sensor_interface__msg__BoardState * output);

/// Initialize array of msg/BoardState messages.
/**
 * It allocates the memory for the number of elements and calls
 * hexapod_sensor_interface__msg__BoardState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__Sequence__init(hexapod_sensor_interface__msg__BoardState__Sequence * array, size_t size);

/// Finalize array of msg/BoardState messages.
/**
 * It calls
 * hexapod_sensor_interface__msg__BoardState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
void
hexapod_sensor_interface__msg__BoardState__Sequence__fini(hexapod_sensor_interface__msg__BoardState__Sequence * array);

/// Create array of msg/BoardState messages.
/**
 * It allocates the memory for the array and calls
 * hexapod_sensor_interface__msg__BoardState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
hexapod_sensor_interface__msg__BoardState__Sequence *
hexapod_sensor_interface__msg__BoardState__Sequence__create(size_t size);

/// Destroy array of msg/BoardState messages.
/**
 * It calls
 * hexapod_sensor_interface__msg__BoardState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
void
hexapod_sensor_interface__msg__BoardState__Sequence__destroy(hexapod_sensor_interface__msg__BoardState__Sequence * array);

/// Check for msg/BoardState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__Sequence__are_equal(const hexapod_sensor_interface__msg__BoardState__Sequence * lhs, const hexapod_sensor_interface__msg__BoardState__Sequence * rhs);

/// Copy an array of msg/BoardState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hexapod_sensor_interface
bool
hexapod_sensor_interface__msg__BoardState__Sequence__copy(
  const hexapod_sensor_interface__msg__BoardState__Sequence * input,
  hexapod_sensor_interface__msg__BoardState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__FUNCTIONS_H_
