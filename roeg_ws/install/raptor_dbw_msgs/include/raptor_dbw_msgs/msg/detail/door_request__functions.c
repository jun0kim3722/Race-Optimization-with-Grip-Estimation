// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/door_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
raptor_dbw_msgs__msg__DoorRequest__init(raptor_dbw_msgs__msg__DoorRequest * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
raptor_dbw_msgs__msg__DoorRequest__fini(raptor_dbw_msgs__msg__DoorRequest * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
raptor_dbw_msgs__msg__DoorRequest__are_equal(const raptor_dbw_msgs__msg__DoorRequest * lhs, const raptor_dbw_msgs__msg__DoorRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DoorRequest__copy(
  const raptor_dbw_msgs__msg__DoorRequest * input,
  raptor_dbw_msgs__msg__DoorRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

raptor_dbw_msgs__msg__DoorRequest *
raptor_dbw_msgs__msg__DoorRequest__create()
{
  raptor_dbw_msgs__msg__DoorRequest * msg = (raptor_dbw_msgs__msg__DoorRequest *)malloc(sizeof(raptor_dbw_msgs__msg__DoorRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__DoorRequest));
  bool success = raptor_dbw_msgs__msg__DoorRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__DoorRequest__destroy(raptor_dbw_msgs__msg__DoorRequest * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__DoorRequest__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__DoorRequest__Sequence__init(raptor_dbw_msgs__msg__DoorRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__DoorRequest * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__DoorRequest *)calloc(size, sizeof(raptor_dbw_msgs__msg__DoorRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__DoorRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__DoorRequest__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__DoorRequest__Sequence__fini(raptor_dbw_msgs__msg__DoorRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__DoorRequest__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__DoorRequest__Sequence *
raptor_dbw_msgs__msg__DoorRequest__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__DoorRequest__Sequence * array = (raptor_dbw_msgs__msg__DoorRequest__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__DoorRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__DoorRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__DoorRequest__Sequence__destroy(raptor_dbw_msgs__msg__DoorRequest__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__DoorRequest__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__DoorRequest__Sequence__are_equal(const raptor_dbw_msgs__msg__DoorRequest__Sequence * lhs, const raptor_dbw_msgs__msg__DoorRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__DoorRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DoorRequest__Sequence__copy(
  const raptor_dbw_msgs__msg__DoorRequest__Sequence * input,
  raptor_dbw_msgs__msg__DoorRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__DoorRequest);
    raptor_dbw_msgs__msg__DoorRequest * data =
      (raptor_dbw_msgs__msg__DoorRequest *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__DoorRequest__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__DoorRequest__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__DoorRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
