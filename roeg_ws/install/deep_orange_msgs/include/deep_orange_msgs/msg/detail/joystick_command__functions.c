// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/joystick_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__JoystickCommand__init(deep_orange_msgs__msg__JoystickCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__JoystickCommand__fini(msg);
    return false;
  }
  // counter
  // emergency_stop
  // coordinated_stop
  // joy_enable
  // steering_cmd
  // brake_cmd
  // accelerator_cmd
  // gear_cmd
  // joystick_healthy
  return true;
}

void
deep_orange_msgs__msg__JoystickCommand__fini(deep_orange_msgs__msg__JoystickCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // counter
  // emergency_stop
  // coordinated_stop
  // joy_enable
  // steering_cmd
  // brake_cmd
  // accelerator_cmd
  // gear_cmd
  // joystick_healthy
}

bool
deep_orange_msgs__msg__JoystickCommand__are_equal(const deep_orange_msgs__msg__JoystickCommand * lhs, const deep_orange_msgs__msg__JoystickCommand * rhs)
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
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // coordinated_stop
  if (lhs->coordinated_stop != rhs->coordinated_stop) {
    return false;
  }
  // joy_enable
  if (lhs->joy_enable != rhs->joy_enable) {
    return false;
  }
  // steering_cmd
  if (lhs->steering_cmd != rhs->steering_cmd) {
    return false;
  }
  // brake_cmd
  if (lhs->brake_cmd != rhs->brake_cmd) {
    return false;
  }
  // accelerator_cmd
  if (lhs->accelerator_cmd != rhs->accelerator_cmd) {
    return false;
  }
  // gear_cmd
  if (lhs->gear_cmd != rhs->gear_cmd) {
    return false;
  }
  // joystick_healthy
  if (lhs->joystick_healthy != rhs->joystick_healthy) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__JoystickCommand__copy(
  const deep_orange_msgs__msg__JoystickCommand * input,
  deep_orange_msgs__msg__JoystickCommand * output)
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
  // counter
  output->counter = input->counter;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // coordinated_stop
  output->coordinated_stop = input->coordinated_stop;
  // joy_enable
  output->joy_enable = input->joy_enable;
  // steering_cmd
  output->steering_cmd = input->steering_cmd;
  // brake_cmd
  output->brake_cmd = input->brake_cmd;
  // accelerator_cmd
  output->accelerator_cmd = input->accelerator_cmd;
  // gear_cmd
  output->gear_cmd = input->gear_cmd;
  // joystick_healthy
  output->joystick_healthy = input->joystick_healthy;
  return true;
}

deep_orange_msgs__msg__JoystickCommand *
deep_orange_msgs__msg__JoystickCommand__create()
{
  deep_orange_msgs__msg__JoystickCommand * msg = (deep_orange_msgs__msg__JoystickCommand *)malloc(sizeof(deep_orange_msgs__msg__JoystickCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__JoystickCommand));
  bool success = deep_orange_msgs__msg__JoystickCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__JoystickCommand__destroy(deep_orange_msgs__msg__JoystickCommand * msg)
{
  if (msg) {
    deep_orange_msgs__msg__JoystickCommand__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__JoystickCommand__Sequence__init(deep_orange_msgs__msg__JoystickCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__JoystickCommand * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__JoystickCommand *)calloc(size, sizeof(deep_orange_msgs__msg__JoystickCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__JoystickCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__JoystickCommand__fini(&data[i - 1]);
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
deep_orange_msgs__msg__JoystickCommand__Sequence__fini(deep_orange_msgs__msg__JoystickCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__JoystickCommand__fini(&array->data[i]);
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

deep_orange_msgs__msg__JoystickCommand__Sequence *
deep_orange_msgs__msg__JoystickCommand__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__JoystickCommand__Sequence * array = (deep_orange_msgs__msg__JoystickCommand__Sequence *)malloc(sizeof(deep_orange_msgs__msg__JoystickCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__JoystickCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__JoystickCommand__Sequence__destroy(deep_orange_msgs__msg__JoystickCommand__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__JoystickCommand__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__JoystickCommand__Sequence__are_equal(const deep_orange_msgs__msg__JoystickCommand__Sequence * lhs, const deep_orange_msgs__msg__JoystickCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__JoystickCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__JoystickCommand__Sequence__copy(
  const deep_orange_msgs__msg__JoystickCommand__Sequence * input,
  deep_orange_msgs__msg__JoystickCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__JoystickCommand);
    deep_orange_msgs__msg__JoystickCommand * data =
      (deep_orange_msgs__msg__JoystickCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__JoystickCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__JoystickCommand__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__JoystickCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
