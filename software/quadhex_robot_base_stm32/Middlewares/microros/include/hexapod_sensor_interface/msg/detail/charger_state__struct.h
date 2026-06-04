// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hexapod_sensor_interface:msg/ChargerState.idl
// generated code does not contain a copyright notice

#ifndef HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__CHARGER_STATE__STRUCT_H_
#define HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__CHARGER_STATE__STRUCT_H_

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

/// Struct defined in msg/ChargerState in the package hexapod_sensor_interface.
/**
  * message from bq24725 charger ic
 */
typedef struct hexapod_sensor_interface__msg__ChargerState
{
  std_msgs__msg__Header header;
  /// whether the AC adapter is connected
  bool ac_present;
  /// whether it is charging
  bool charging;
  /// charging current setpoint (A)
  float charge_current_a;
  /// charging voltage setpoint (V)
  float charge_voltage_v;
  /// AC adapter enter current limit setpoint (A)
  float input_current_a;
  /// real-time charging current on the battery side (A)
  float realtime_current_a;
  /// real-time AC adapter input voltage (V)
  float realtime_input_voltage_v;
  /// charging phase (0:Unknow/1:Not-Charged/2:Pre-Charge/3:Constant Current/4:Constant Voltage/5:Full)
  uint8_t charge_status;
  /// DC-DC temperature (°C)
  float temperature;
} hexapod_sensor_interface__msg__ChargerState;

// Struct for a sequence of hexapod_sensor_interface__msg__ChargerState.
typedef struct hexapod_sensor_interface__msg__ChargerState__Sequence
{
  hexapod_sensor_interface__msg__ChargerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hexapod_sensor_interface__msg__ChargerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HEXAPOD_SENSOR_INTERFACE__MSG__DETAIL__CHARGER_STATE__STRUCT_H_
