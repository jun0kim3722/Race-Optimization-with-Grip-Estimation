// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/TireTemp.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/tire_temp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
deep_orange_msgs__msg__TireTemp__init(deep_orange_msgs__msg__TireTemp * msg)
{
  if (!msg) {
    return false;
  }
  // median
  // mean
  // min
  // max
  return true;
}

void
deep_orange_msgs__msg__TireTemp__fini(deep_orange_msgs__msg__TireTemp * msg)
{
  if (!msg) {
    return;
  }
  // median
  // mean
  // min
  // max
}

bool
deep_orange_msgs__msg__TireTemp__are_equal(const deep_orange_msgs__msg__TireTemp * lhs, const deep_orange_msgs__msg__TireTemp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // median
  if (lhs->median != rhs->median) {
    return false;
  }
  // mean
  if (lhs->mean != rhs->mean) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__TireTemp__copy(
  const deep_orange_msgs__msg__TireTemp * input,
  deep_orange_msgs__msg__TireTemp * output)
{
  if (!input || !output) {
    return false;
  }
  // median
  output->median = input->median;
  // mean
  output->mean = input->mean;
  // min
  output->min = input->min;
  // max
  output->max = input->max;
  return true;
}

deep_orange_msgs__msg__TireTemp *
deep_orange_msgs__msg__TireTemp__create()
{
  deep_orange_msgs__msg__TireTemp * msg = (deep_orange_msgs__msg__TireTemp *)malloc(sizeof(deep_orange_msgs__msg__TireTemp));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__TireTemp));
  bool success = deep_orange_msgs__msg__TireTemp__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__TireTemp__destroy(deep_orange_msgs__msg__TireTemp * msg)
{
  if (msg) {
    deep_orange_msgs__msg__TireTemp__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__TireTemp__Sequence__init(deep_orange_msgs__msg__TireTemp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__TireTemp * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__TireTemp *)calloc(size, sizeof(deep_orange_msgs__msg__TireTemp));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__TireTemp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__TireTemp__fini(&data[i - 1]);
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
deep_orange_msgs__msg__TireTemp__Sequence__fini(deep_orange_msgs__msg__TireTemp__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__TireTemp__fini(&array->data[i]);
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

deep_orange_msgs__msg__TireTemp__Sequence *
deep_orange_msgs__msg__TireTemp__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__TireTemp__Sequence * array = (deep_orange_msgs__msg__TireTemp__Sequence *)malloc(sizeof(deep_orange_msgs__msg__TireTemp__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__TireTemp__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__TireTemp__Sequence__destroy(deep_orange_msgs__msg__TireTemp__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__TireTemp__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__TireTemp__Sequence__are_equal(const deep_orange_msgs__msg__TireTemp__Sequence * lhs, const deep_orange_msgs__msg__TireTemp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__TireTemp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__TireTemp__Sequence__copy(
  const deep_orange_msgs__msg__TireTemp__Sequence * input,
  deep_orange_msgs__msg__TireTemp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__TireTemp);
    deep_orange_msgs__msg__TireTemp * data =
      (deep_orange_msgs__msg__TireTemp *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__TireTemp__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__TireTemp__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__TireTemp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
