// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/rc_to_ct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__RcToCt__init(deep_orange_msgs__msg__RcToCt * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__RcToCt__fini(msg);
    return false;
  }
  // rolling_counter
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
  return true;
}

void
deep_orange_msgs__msg__RcToCt__fini(deep_orange_msgs__msg__RcToCt * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // rolling_counter
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
}

bool
deep_orange_msgs__msg__RcToCt__are_equal(const deep_orange_msgs__msg__RcToCt * lhs, const deep_orange_msgs__msg__RcToCt * rhs)
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
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // track_flag
  if (lhs->track_flag != rhs->track_flag) {
    return false;
  }
  // veh_flag
  if (lhs->veh_flag != rhs->veh_flag) {
    return false;
  }
  // veh_rank
  if (lhs->veh_rank != rhs->veh_rank) {
    return false;
  }
  // lap_count
  if (lhs->lap_count != rhs->lap_count) {
    return false;
  }
  // lap_distance
  if (lhs->lap_distance != rhs->lap_distance) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__RcToCt__copy(
  const deep_orange_msgs__msg__RcToCt * input,
  deep_orange_msgs__msg__RcToCt * output)
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
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // track_flag
  output->track_flag = input->track_flag;
  // veh_flag
  output->veh_flag = input->veh_flag;
  // veh_rank
  output->veh_rank = input->veh_rank;
  // lap_count
  output->lap_count = input->lap_count;
  // lap_distance
  output->lap_distance = input->lap_distance;
  return true;
}

deep_orange_msgs__msg__RcToCt *
deep_orange_msgs__msg__RcToCt__create()
{
  deep_orange_msgs__msg__RcToCt * msg = (deep_orange_msgs__msg__RcToCt *)malloc(sizeof(deep_orange_msgs__msg__RcToCt));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__RcToCt));
  bool success = deep_orange_msgs__msg__RcToCt__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__RcToCt__destroy(deep_orange_msgs__msg__RcToCt * msg)
{
  if (msg) {
    deep_orange_msgs__msg__RcToCt__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__RcToCt__Sequence__init(deep_orange_msgs__msg__RcToCt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__RcToCt * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__RcToCt *)calloc(size, sizeof(deep_orange_msgs__msg__RcToCt));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__RcToCt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__RcToCt__fini(&data[i - 1]);
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
deep_orange_msgs__msg__RcToCt__Sequence__fini(deep_orange_msgs__msg__RcToCt__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__RcToCt__fini(&array->data[i]);
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

deep_orange_msgs__msg__RcToCt__Sequence *
deep_orange_msgs__msg__RcToCt__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__RcToCt__Sequence * array = (deep_orange_msgs__msg__RcToCt__Sequence *)malloc(sizeof(deep_orange_msgs__msg__RcToCt__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__RcToCt__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__RcToCt__Sequence__destroy(deep_orange_msgs__msg__RcToCt__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__RcToCt__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__RcToCt__Sequence__are_equal(const deep_orange_msgs__msg__RcToCt__Sequence * lhs, const deep_orange_msgs__msg__RcToCt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__RcToCt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__RcToCt__Sequence__copy(
  const deep_orange_msgs__msg__RcToCt__Sequence * input,
  deep_orange_msgs__msg__RcToCt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__RcToCt);
    deep_orange_msgs__msg__RcToCt * data =
      (deep_orange_msgs__msg__RcToCt *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__RcToCt__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__RcToCt__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__RcToCt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
