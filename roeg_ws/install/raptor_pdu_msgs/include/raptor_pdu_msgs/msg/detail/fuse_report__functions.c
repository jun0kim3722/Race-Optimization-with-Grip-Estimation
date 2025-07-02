// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_pdu_msgs:msg/FuseReport.idl
// generated code does not contain a copyright notice
#include "raptor_pdu_msgs/msg/detail/fuse_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fuse_1`
// Member `fuse_2`
// Member `fuse_3`
// Member `fuse_4`
// Member `fuse_5`
// Member `fuse_6`
// Member `fuse_7`
// Member `fuse_8`
// Member `fuse_9`
// Member `fuse_10`
// Member `fuse_11`
// Member `fuse_12`
// Member `fuse_13`
// Member `fuse_14`
// Member `fuse_15`
// Member `fuse_16`
#include "raptor_pdu_msgs/msg/detail/fuse_status__functions.h"

bool
raptor_pdu_msgs__msg__FuseReport__init(raptor_pdu_msgs__msg__FuseReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // grid_address
  // fuse_1
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_1)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_2
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_2)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_3
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_3)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_4
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_4)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_5
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_5)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_6
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_6)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_7
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_7)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_8
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_8)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_9
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_9)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_10
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_10)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_11
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_11)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_12
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_12)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_13
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_13)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_14
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_14)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_15
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_15)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  // fuse_16
  if (!raptor_pdu_msgs__msg__FuseStatus__init(&msg->fuse_16)) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
    return false;
  }
  return true;
}

void
raptor_pdu_msgs__msg__FuseReport__fini(raptor_pdu_msgs__msg__FuseReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // grid_address
  // fuse_1
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_1);
  // fuse_2
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_2);
  // fuse_3
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_3);
  // fuse_4
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_4);
  // fuse_5
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_5);
  // fuse_6
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_6);
  // fuse_7
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_7);
  // fuse_8
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_8);
  // fuse_9
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_9);
  // fuse_10
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_10);
  // fuse_11
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_11);
  // fuse_12
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_12);
  // fuse_13
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_13);
  // fuse_14
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_14);
  // fuse_15
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_15);
  // fuse_16
  raptor_pdu_msgs__msg__FuseStatus__fini(&msg->fuse_16);
}

bool
raptor_pdu_msgs__msg__FuseReport__are_equal(const raptor_pdu_msgs__msg__FuseReport * lhs, const raptor_pdu_msgs__msg__FuseReport * rhs)
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
  // grid_address
  if (lhs->grid_address != rhs->grid_address) {
    return false;
  }
  // fuse_1
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_1), &(rhs->fuse_1)))
  {
    return false;
  }
  // fuse_2
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_2), &(rhs->fuse_2)))
  {
    return false;
  }
  // fuse_3
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_3), &(rhs->fuse_3)))
  {
    return false;
  }
  // fuse_4
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_4), &(rhs->fuse_4)))
  {
    return false;
  }
  // fuse_5
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_5), &(rhs->fuse_5)))
  {
    return false;
  }
  // fuse_6
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_6), &(rhs->fuse_6)))
  {
    return false;
  }
  // fuse_7
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_7), &(rhs->fuse_7)))
  {
    return false;
  }
  // fuse_8
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_8), &(rhs->fuse_8)))
  {
    return false;
  }
  // fuse_9
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_9), &(rhs->fuse_9)))
  {
    return false;
  }
  // fuse_10
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_10), &(rhs->fuse_10)))
  {
    return false;
  }
  // fuse_11
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_11), &(rhs->fuse_11)))
  {
    return false;
  }
  // fuse_12
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_12), &(rhs->fuse_12)))
  {
    return false;
  }
  // fuse_13
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_13), &(rhs->fuse_13)))
  {
    return false;
  }
  // fuse_14
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_14), &(rhs->fuse_14)))
  {
    return false;
  }
  // fuse_15
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_15), &(rhs->fuse_15)))
  {
    return false;
  }
  // fuse_16
  if (!raptor_pdu_msgs__msg__FuseStatus__are_equal(
      &(lhs->fuse_16), &(rhs->fuse_16)))
  {
    return false;
  }
  return true;
}

bool
raptor_pdu_msgs__msg__FuseReport__copy(
  const raptor_pdu_msgs__msg__FuseReport * input,
  raptor_pdu_msgs__msg__FuseReport * output)
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
  // grid_address
  output->grid_address = input->grid_address;
  // fuse_1
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_1), &(output->fuse_1)))
  {
    return false;
  }
  // fuse_2
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_2), &(output->fuse_2)))
  {
    return false;
  }
  // fuse_3
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_3), &(output->fuse_3)))
  {
    return false;
  }
  // fuse_4
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_4), &(output->fuse_4)))
  {
    return false;
  }
  // fuse_5
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_5), &(output->fuse_5)))
  {
    return false;
  }
  // fuse_6
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_6), &(output->fuse_6)))
  {
    return false;
  }
  // fuse_7
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_7), &(output->fuse_7)))
  {
    return false;
  }
  // fuse_8
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_8), &(output->fuse_8)))
  {
    return false;
  }
  // fuse_9
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_9), &(output->fuse_9)))
  {
    return false;
  }
  // fuse_10
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_10), &(output->fuse_10)))
  {
    return false;
  }
  // fuse_11
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_11), &(output->fuse_11)))
  {
    return false;
  }
  // fuse_12
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_12), &(output->fuse_12)))
  {
    return false;
  }
  // fuse_13
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_13), &(output->fuse_13)))
  {
    return false;
  }
  // fuse_14
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_14), &(output->fuse_14)))
  {
    return false;
  }
  // fuse_15
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_15), &(output->fuse_15)))
  {
    return false;
  }
  // fuse_16
  if (!raptor_pdu_msgs__msg__FuseStatus__copy(
      &(input->fuse_16), &(output->fuse_16)))
  {
    return false;
  }
  return true;
}

raptor_pdu_msgs__msg__FuseReport *
raptor_pdu_msgs__msg__FuseReport__create()
{
  raptor_pdu_msgs__msg__FuseReport * msg = (raptor_pdu_msgs__msg__FuseReport *)malloc(sizeof(raptor_pdu_msgs__msg__FuseReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_pdu_msgs__msg__FuseReport));
  bool success = raptor_pdu_msgs__msg__FuseReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_pdu_msgs__msg__FuseReport__destroy(raptor_pdu_msgs__msg__FuseReport * msg)
{
  if (msg) {
    raptor_pdu_msgs__msg__FuseReport__fini(msg);
  }
  free(msg);
}


bool
raptor_pdu_msgs__msg__FuseReport__Sequence__init(raptor_pdu_msgs__msg__FuseReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_pdu_msgs__msg__FuseReport * data = NULL;
  if (size) {
    data = (raptor_pdu_msgs__msg__FuseReport *)calloc(size, sizeof(raptor_pdu_msgs__msg__FuseReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_pdu_msgs__msg__FuseReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_pdu_msgs__msg__FuseReport__fini(&data[i - 1]);
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
raptor_pdu_msgs__msg__FuseReport__Sequence__fini(raptor_pdu_msgs__msg__FuseReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_pdu_msgs__msg__FuseReport__fini(&array->data[i]);
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

raptor_pdu_msgs__msg__FuseReport__Sequence *
raptor_pdu_msgs__msg__FuseReport__Sequence__create(size_t size)
{
  raptor_pdu_msgs__msg__FuseReport__Sequence * array = (raptor_pdu_msgs__msg__FuseReport__Sequence *)malloc(sizeof(raptor_pdu_msgs__msg__FuseReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_pdu_msgs__msg__FuseReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_pdu_msgs__msg__FuseReport__Sequence__destroy(raptor_pdu_msgs__msg__FuseReport__Sequence * array)
{
  if (array) {
    raptor_pdu_msgs__msg__FuseReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_pdu_msgs__msg__FuseReport__Sequence__are_equal(const raptor_pdu_msgs__msg__FuseReport__Sequence * lhs, const raptor_pdu_msgs__msg__FuseReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_pdu_msgs__msg__FuseReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_pdu_msgs__msg__FuseReport__Sequence__copy(
  const raptor_pdu_msgs__msg__FuseReport__Sequence * input,
  raptor_pdu_msgs__msg__FuseReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_pdu_msgs__msg__FuseReport);
    raptor_pdu_msgs__msg__FuseReport * data =
      (raptor_pdu_msgs__msg__FuseReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_pdu_msgs__msg__FuseReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_pdu_msgs__msg__FuseReport__fini(&data[i]);
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
    if (!raptor_pdu_msgs__msg__FuseReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
