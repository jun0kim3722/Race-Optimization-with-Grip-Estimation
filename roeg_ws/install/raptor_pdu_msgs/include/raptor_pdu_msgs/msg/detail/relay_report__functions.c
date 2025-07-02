// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_pdu_msgs:msg/RelayReport.idl
// generated code does not contain a copyright notice
#include "raptor_pdu_msgs/msg/detail/relay_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `relay_1`
// Member `relay_2`
// Member `relay_3`
// Member `relay_4`
// Member `relay_5`
// Member `relay_6`
// Member `relay_7`
// Member `relay_8`
#include "raptor_pdu_msgs/msg/detail/relay_status__functions.h"

bool
raptor_pdu_msgs__msg__RelayReport__init(raptor_pdu_msgs__msg__RelayReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // grid_address
  // relay_1
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_1)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_2
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_2)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_3
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_3)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_4
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_4)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_5
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_5)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_6
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_6)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_7
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_7)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  // relay_8
  if (!raptor_pdu_msgs__msg__RelayStatus__init(&msg->relay_8)) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
    return false;
  }
  return true;
}

void
raptor_pdu_msgs__msg__RelayReport__fini(raptor_pdu_msgs__msg__RelayReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // grid_address
  // relay_1
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_1);
  // relay_2
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_2);
  // relay_3
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_3);
  // relay_4
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_4);
  // relay_5
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_5);
  // relay_6
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_6);
  // relay_7
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_7);
  // relay_8
  raptor_pdu_msgs__msg__RelayStatus__fini(&msg->relay_8);
}

bool
raptor_pdu_msgs__msg__RelayReport__are_equal(const raptor_pdu_msgs__msg__RelayReport * lhs, const raptor_pdu_msgs__msg__RelayReport * rhs)
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
  // relay_1
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_1), &(rhs->relay_1)))
  {
    return false;
  }
  // relay_2
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_2), &(rhs->relay_2)))
  {
    return false;
  }
  // relay_3
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_3), &(rhs->relay_3)))
  {
    return false;
  }
  // relay_4
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_4), &(rhs->relay_4)))
  {
    return false;
  }
  // relay_5
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_5), &(rhs->relay_5)))
  {
    return false;
  }
  // relay_6
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_6), &(rhs->relay_6)))
  {
    return false;
  }
  // relay_7
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_7), &(rhs->relay_7)))
  {
    return false;
  }
  // relay_8
  if (!raptor_pdu_msgs__msg__RelayStatus__are_equal(
      &(lhs->relay_8), &(rhs->relay_8)))
  {
    return false;
  }
  return true;
}

bool
raptor_pdu_msgs__msg__RelayReport__copy(
  const raptor_pdu_msgs__msg__RelayReport * input,
  raptor_pdu_msgs__msg__RelayReport * output)
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
  // relay_1
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_1), &(output->relay_1)))
  {
    return false;
  }
  // relay_2
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_2), &(output->relay_2)))
  {
    return false;
  }
  // relay_3
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_3), &(output->relay_3)))
  {
    return false;
  }
  // relay_4
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_4), &(output->relay_4)))
  {
    return false;
  }
  // relay_5
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_5), &(output->relay_5)))
  {
    return false;
  }
  // relay_6
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_6), &(output->relay_6)))
  {
    return false;
  }
  // relay_7
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_7), &(output->relay_7)))
  {
    return false;
  }
  // relay_8
  if (!raptor_pdu_msgs__msg__RelayStatus__copy(
      &(input->relay_8), &(output->relay_8)))
  {
    return false;
  }
  return true;
}

raptor_pdu_msgs__msg__RelayReport *
raptor_pdu_msgs__msg__RelayReport__create()
{
  raptor_pdu_msgs__msg__RelayReport * msg = (raptor_pdu_msgs__msg__RelayReport *)malloc(sizeof(raptor_pdu_msgs__msg__RelayReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_pdu_msgs__msg__RelayReport));
  bool success = raptor_pdu_msgs__msg__RelayReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_pdu_msgs__msg__RelayReport__destroy(raptor_pdu_msgs__msg__RelayReport * msg)
{
  if (msg) {
    raptor_pdu_msgs__msg__RelayReport__fini(msg);
  }
  free(msg);
}


bool
raptor_pdu_msgs__msg__RelayReport__Sequence__init(raptor_pdu_msgs__msg__RelayReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_pdu_msgs__msg__RelayReport * data = NULL;
  if (size) {
    data = (raptor_pdu_msgs__msg__RelayReport *)calloc(size, sizeof(raptor_pdu_msgs__msg__RelayReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_pdu_msgs__msg__RelayReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_pdu_msgs__msg__RelayReport__fini(&data[i - 1]);
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
raptor_pdu_msgs__msg__RelayReport__Sequence__fini(raptor_pdu_msgs__msg__RelayReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_pdu_msgs__msg__RelayReport__fini(&array->data[i]);
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

raptor_pdu_msgs__msg__RelayReport__Sequence *
raptor_pdu_msgs__msg__RelayReport__Sequence__create(size_t size)
{
  raptor_pdu_msgs__msg__RelayReport__Sequence * array = (raptor_pdu_msgs__msg__RelayReport__Sequence *)malloc(sizeof(raptor_pdu_msgs__msg__RelayReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_pdu_msgs__msg__RelayReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_pdu_msgs__msg__RelayReport__Sequence__destroy(raptor_pdu_msgs__msg__RelayReport__Sequence * array)
{
  if (array) {
    raptor_pdu_msgs__msg__RelayReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_pdu_msgs__msg__RelayReport__Sequence__are_equal(const raptor_pdu_msgs__msg__RelayReport__Sequence * lhs, const raptor_pdu_msgs__msg__RelayReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_pdu_msgs__msg__RelayReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_pdu_msgs__msg__RelayReport__Sequence__copy(
  const raptor_pdu_msgs__msg__RelayReport__Sequence * input,
  raptor_pdu_msgs__msg__RelayReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_pdu_msgs__msg__RelayReport);
    raptor_pdu_msgs__msg__RelayReport * data =
      (raptor_pdu_msgs__msg__RelayReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_pdu_msgs__msg__RelayReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_pdu_msgs__msg__RelayReport__fini(&data[i]);
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
    if (!raptor_pdu_msgs__msg__RelayReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
