// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hexapod_sensor_interface:msg/BoardState.idl
// generated code does not contain a copyright notice

#ifndef HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__STRUCT_H_
#define HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'charger_state'
#include "hexapod_sensor_interface/msg/detail/charger_state__struct.h"

/// Struct defined in msg/BoardState in the package hexapod_sensor_interface.
/**
  * stm32 board info and state, message: /sensor/board_state
 */
typedef struct hexapod_sensor_interface__msg__BoardState
{
  std_msgs__msg__Header header;
  /// servo DC-DC Temperature (°C)
  float servo_power_temperature;
  /// servo DC-DC output voltage
  float servo_power_voltage_v;
  /// stm32 MCU temperature
  float mcu_temperature;
  /// charge_state
  hexapod_sensor_interface__msg__ChargerState charger_state;
} hexapod_sensor_interface__msg__BoardState;

// Struct for a sequence of hexapod_sensor_interface__msg__BoardState.
typedef struct hexapod_sensor_interface__msg__BoardState__Sequence
{
  hexapod_sensor_interface__msg__BoardState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hexapod_sensor_interface__msg__BoardState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__BOARD_STATE__STRUCT_H_
