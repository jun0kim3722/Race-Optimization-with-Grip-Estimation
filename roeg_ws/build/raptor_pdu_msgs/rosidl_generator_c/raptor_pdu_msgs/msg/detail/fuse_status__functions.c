// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_pdu_msgs:msg/FuseStatus.idl
// generated code does not contain a copyright notice
#include "raptor_pdu_msgs/msg/detail/fuse_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_pdu_msgs__msg__FuseStatus__init(raptor_pdu_msgs__msg__FuseStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_pdu_msgs__msg__FuseStatus__fini(msg);
    return false;
  }
  // value
  return true;
}

void
raptor_pdu_msgs__msg__FuseStatus__fini(raptor_pdu_msgs__msg__FuseStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
}

bool
raptor_pdu_msgs__msg__FuseStatus__are_equal(const raptor_pdu_msgs__msg__FuseStatus * lhs, const raptor_pdu_msgs__msg__FuseStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
raptor_pdu_msgs__msg__FuseStatus__copy(
  const raptor_pdu_msgs__msg__FuseStatus * input,
  raptor_pdu_msgs__msg__FuseStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

raptor_pdu_msgs__msg__FuseStatus *
raptor_pdu_msgs__msg__FuseStatus__create()
{
  raptor_pdu_msgs__msg__FuseStatus * msg = (raptor_pdu_msgs__msg__FuseStatus *)malloc(sizeof(raptor_pdu_msgs__msg__FuseStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_pdu_msgs__msg__FuseStatus));
  bool success = raptor_pdu_msgs__msg__FuseStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_pdu_msgs__msg__FuseStatus__destroy(raptor_pdu_msgs__msg__FuseStatus * msg)
{
  if (msg) {
    raptor_pdu_msgs__msg__FuseStatus__fini(msg);
  }
  free(msg);
}


bool
raptor_pdu_msgs__msg__FuseStatus__Sequence__init(raptor_pdu_msgs__msg__FuseStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_pdu_msgs__msg__FuseStatus * data = NULL;
  if (size) {
    data = (raptor_pdu_msgs__msg__FuseStatus *)calloc(size, sizeof(raptor_pdu_msgs__msg__FuseStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_pdu_msgs__msg__FuseStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_pdu_msgs__msg__FuseStatus__fini(&data[i - 1]);
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
raptor_pdu_msgs__msg__FuseStatus__Sequence__fini(raptor_pdu_msgs__msg__FuseStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_pdu_msgs__msg__FuseStatus__fini(&array->data[i]);
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

raptor_pdu_msgs__msg__FuseStatus__Sequence *
raptor_pdu_msgs__msg__FuseStatus__Sequence__create(size_t size)
{
  raptor_pdu_msgs__msg__FuseStatus__Sequence * array = (raptor_pdu_msgs__msg__FuseStatus__Sequence *)malloc(sizeof(raptor_pdu_msgs__msg__FuseStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_pdu_msgs__msg__FuseStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_pdu_msgs__msg__FuseStatus__Sequence__destroy(raptor_pdu_msgs__msg__FuseStatus__Sequence * array)
{
  if (array) {
    raptor_pdu_msgs__msg__FuseStatus__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_pdu_msgs__msg__FuseStatus__Sequence__are_equal(const raptor_pdu_msgs__msg__FuseStatus__Sequence * lhs, const raptor_pdu_msgs__msg__FuseStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_pdu_msgs__msg__FuseStatus__Sequence__copy(
  const raptor_pdu_msgs__msg__FuseStatus__Sequence * input,
  raptor_pdu_msgs__msg__FuseStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_pdu_msgs__msg__FuseStatus);
    raptor_pdu_msgs__msg__FuseStatus * data =
      (raptor_pdu_msgs__msg__FuseStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_pdu_msgs__msg__FuseStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_pdu_msgs__msg__FuseStatus__fini(&data[i]);
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
    if (!raptor_pdu_msgs__msg__FuseStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
