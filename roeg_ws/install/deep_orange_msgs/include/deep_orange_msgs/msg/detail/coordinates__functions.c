// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/Coordinates.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__Coordinates__init(deep_orange_msgs__msg__Coordinates * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__Coordinates__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // heading
  // heading_real
  // heading_imag
  return true;
}

void
deep_orange_msgs__msg__Coordinates__fini(deep_orange_msgs__msg__Coordinates * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // x
  // y
  // z
  // heading
  // heading_real
  // heading_imag
}

bool
deep_orange_msgs__msg__Coordinates__are_equal(const deep_orange_msgs__msg__Coordinates * lhs, const deep_orange_msgs__msg__Coordinates * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_real
  if (lhs->heading_real != rhs->heading_real) {
    return false;
  }
  // heading_imag
  if (lhs->heading_imag != rhs->heading_imag) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__Coordinates__copy(
  const deep_orange_msgs__msg__Coordinates * input,
  deep_orange_msgs__msg__Coordinates * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // heading
  output->heading = input->heading;
  // heading_real
  output->heading_real = input->heading_real;
  // heading_imag
  output->heading_imag = input->heading_imag;
  return true;
}

deep_orange_msgs__msg__Coordinates *
deep_orange_msgs__msg__Coordinates__create()
{
  deep_orange_msgs__msg__Coordinates * msg = (deep_orange_msgs__msg__Coordinates *)malloc(sizeof(deep_orange_msgs__msg__Coordinates));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__Coordinates));
  bool success = deep_orange_msgs__msg__Coordinates__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__Coordinates__destroy(deep_orange_msgs__msg__Coordinates * msg)
{
  if (msg) {
    deep_orange_msgs__msg__Coordinates__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__Coordinates__Sequence__init(deep_orange_msgs__msg__Coordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__Coordinates * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__Coordinates *)calloc(size, sizeof(deep_orange_msgs__msg__Coordinates));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__Coordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__Coordinates__fini(&data[i - 1]);
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
deep_orange_msgs__msg__Coordinates__Sequence__fini(deep_orange_msgs__msg__Coordinates__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__Coordinates__fini(&array->data[i]);
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

deep_orange_msgs__msg__Coordinates__Sequence *
deep_orange_msgs__msg__Coordinates__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__Coordinates__Sequence * array = (deep_orange_msgs__msg__Coordinates__Sequence *)malloc(sizeof(deep_orange_msgs__msg__Coordinates__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__Coordinates__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__Coordinates__Sequence__destroy(deep_orange_msgs__msg__Coordinates__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__Coordinates__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__Coordinates__Sequence__are_equal(const deep_orange_msgs__msg__Coordinates__Sequence * lhs, const deep_orange_msgs__msg__Coordinates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__Coordinates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__Coordinates__Sequence__copy(
  const deep_orange_msgs__msg__Coordinates__Sequence * input,
  deep_orange_msgs__msg__Coordinates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__Coordinates);
    deep_orange_msgs__msg__Coordinates * data =
      (deep_orange_msgs__msg__Coordinates *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__Coordinates__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__Coordinates__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__Coordinates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
