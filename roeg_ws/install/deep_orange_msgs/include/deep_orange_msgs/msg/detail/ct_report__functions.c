// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/ct_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__CtReport__init(deep_orange_msgs__msg__CtReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__CtReport__fini(msg);
    return false;
  }
  // track_cond_ack
  // veh_sig_ack
  // ct_state
  // rolling_counter
  // veh_num
  return true;
}

void
deep_orange_msgs__msg__CtReport__fini(deep_orange_msgs__msg__CtReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // track_cond_ack
  // veh_sig_ack
  // ct_state
  // rolling_counter
  // veh_num
}

bool
deep_orange_msgs__msg__CtReport__are_equal(const deep_orange_msgs__msg__CtReport * lhs, const deep_orange_msgs__msg__CtReport * rhs)
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
  // track_cond_ack
  if (lhs->track_cond_ack != rhs->track_cond_ack) {
    return false;
  }
  // veh_sig_ack
  if (lhs->veh_sig_ack != rhs->veh_sig_ack) {
    return false;
  }
  // ct_state
  if (lhs->ct_state != rhs->ct_state) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // veh_num
  if (lhs->veh_num != rhs->veh_num) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__CtReport__copy(
  const deep_orange_msgs__msg__CtReport * input,
  deep_orange_msgs__msg__CtReport * output)
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
  // track_cond_ack
  output->track_cond_ack = input->track_cond_ack;
  // veh_sig_ack
  output->veh_sig_ack = input->veh_sig_ack;
  // ct_state
  output->ct_state = input->ct_state;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // veh_num
  output->veh_num = input->veh_num;
  return true;
}

deep_orange_msgs__msg__CtReport *
deep_orange_msgs__msg__CtReport__create()
{
  deep_orange_msgs__msg__CtReport * msg = (deep_orange_msgs__msg__CtReport *)malloc(sizeof(deep_orange_msgs__msg__CtReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__CtReport));
  bool success = deep_orange_msgs__msg__CtReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__CtReport__destroy(deep_orange_msgs__msg__CtReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__CtReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__CtReport__Sequence__init(deep_orange_msgs__msg__CtReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__CtReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__CtReport *)calloc(size, sizeof(deep_orange_msgs__msg__CtReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__CtReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__CtReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__CtReport__Sequence__fini(deep_orange_msgs__msg__CtReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__CtReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__CtReport__Sequence *
deep_orange_msgs__msg__CtReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__CtReport__Sequence * array = (deep_orange_msgs__msg__CtReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__CtReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__CtReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__CtReport__Sequence__destroy(deep_orange_msgs__msg__CtReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__CtReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__CtReport__Sequence__are_equal(const deep_orange_msgs__msg__CtReport__Sequence * lhs, const deep_orange_msgs__msg__CtReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__CtReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__CtReport__Sequence__copy(
  const deep_orange_msgs__msg__CtReport__Sequence * input,
  deep_orange_msgs__msg__CtReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__CtReport);
    deep_orange_msgs__msg__CtReport * data =
      (deep_orange_msgs__msg__CtReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__CtReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__CtReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__CtReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
