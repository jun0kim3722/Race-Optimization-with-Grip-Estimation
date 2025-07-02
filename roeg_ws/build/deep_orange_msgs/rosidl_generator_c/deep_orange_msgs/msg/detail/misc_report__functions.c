// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/misc_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__MiscReport__init(deep_orange_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__MiscReport__fini(msg);
    return false;
  }
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
  return true;
}

void
deep_orange_msgs__msg__MiscReport__fini(deep_orange_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
}

bool
deep_orange_msgs__msg__MiscReport__are_equal(const deep_orange_msgs__msg__MiscReport * lhs, const deep_orange_msgs__msg__MiscReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // off_grid_power_connection
  if (lhs->off_grid_power_connection != rhs->off_grid_power_connection) {
    return false;
  }
  // safety_switch_state
  if (lhs->safety_switch_state != rhs->safety_switch_state) {
    return false;
  }
  // mode_switch_state
  if (lhs->mode_switch_state != rhs->mode_switch_state) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__MiscReport__copy(
  const deep_orange_msgs__msg__MiscReport * input,
  deep_orange_msgs__msg__MiscReport * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // off_grid_power_connection
  output->off_grid_power_connection = input->off_grid_power_connection;
  // safety_switch_state
  output->safety_switch_state = input->safety_switch_state;
  // mode_switch_state
  output->mode_switch_state = input->mode_switch_state;
  // sys_state
  output->sys_state = input->sys_state;
  return true;
}

deep_orange_msgs__msg__MiscReport *
deep_orange_msgs__msg__MiscReport__create()
{
  deep_orange_msgs__msg__MiscReport * msg = (deep_orange_msgs__msg__MiscReport *)malloc(sizeof(deep_orange_msgs__msg__MiscReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__MiscReport));
  bool success = deep_orange_msgs__msg__MiscReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__MiscReport__destroy(deep_orange_msgs__msg__MiscReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__MiscReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__MiscReport__Sequence__init(deep_orange_msgs__msg__MiscReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__MiscReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__MiscReport *)calloc(size, sizeof(deep_orange_msgs__msg__MiscReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__MiscReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__MiscReport__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deep_orange_msgs__msg__MiscReport__Sequence__fini(deep_orange_msgs__msg__MiscReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__MiscReport__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deep_orange_msgs__msg__MiscReport__Sequence *
deep_orange_msgs__msg__MiscReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__MiscReport__Sequence * array = (deep_orange_msgs__msg__MiscReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__MiscReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__MiscReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__MiscReport__Sequence__destroy(deep_orange_msgs__msg__MiscReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__MiscReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__MiscReport__Sequence__are_equal(const deep_orange_msgs__msg__MiscReport__Sequence * lhs, const deep_orange_msgs__msg__MiscReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__MiscReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__MiscReport__Sequence__copy(
  const deep_orange_msgs__msg__MiscReport__Sequence * input,
  deep_orange_msgs__msg__MiscReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__MiscReport);
    deep_orange_msgs__msg__MiscReport * data =
      (deep_orange_msgs__msg__MiscReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__MiscReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__MiscReport__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deep_orange_msgs__msg__MiscReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
