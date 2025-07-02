// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/hmi_global_enable_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__init(raptor_dbw_msgs__msg__HmiGlobalEnableReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(msg);
    return false;
  }
  // enable_request
  // disable_request
  // checksum
  // ecu_build_number
  // rolling_counter
  return true;
}

void
raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(raptor_dbw_msgs__msg__HmiGlobalEnableReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // enable_request
  // disable_request
  // checksum
  // ecu_build_number
  // rolling_counter
}

bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__are_equal(const raptor_dbw_msgs__msg__HmiGlobalEnableReport * lhs, const raptor_dbw_msgs__msg__HmiGlobalEnableReport * rhs)
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
  // enable_request
  if (lhs->enable_request != rhs->enable_request) {
    return false;
  }
  // disable_request
  if (lhs->disable_request != rhs->disable_request) {
    return false;
  }
  // checksum
  if (lhs->checksum != rhs->checksum) {
    return false;
  }
  // ecu_build_number
  if (lhs->ecu_build_number != rhs->ecu_build_number) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__copy(
  const raptor_dbw_msgs__msg__HmiGlobalEnableReport * input,
  raptor_dbw_msgs__msg__HmiGlobalEnableReport * output)
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
  // enable_request
  output->enable_request = input->enable_request;
  // disable_request
  output->disable_request = input->disable_request;
  // checksum
  output->checksum = input->checksum;
  // ecu_build_number
  output->ecu_build_number = input->ecu_build_number;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  return true;
}

raptor_dbw_msgs__msg__HmiGlobalEnableReport *
raptor_dbw_msgs__msg__HmiGlobalEnableReport__create()
{
  raptor_dbw_msgs__msg__HmiGlobalEnableReport * msg = (raptor_dbw_msgs__msg__HmiGlobalEnableReport *)malloc(sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport));
  bool success = raptor_dbw_msgs__msg__HmiGlobalEnableReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__HmiGlobalEnableReport__destroy(raptor_dbw_msgs__msg__HmiGlobalEnableReport * msg)
{
  if (msg) {
    raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(msg);
  }
  free(msg);
}


bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__init(raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  raptor_dbw_msgs__msg__HmiGlobalEnableReport * data = NULL;
  if (size) {
    data = (raptor_dbw_msgs__msg__HmiGlobalEnableReport *)calloc(size, sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__HmiGlobalEnableReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__fini(raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence *
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__create(size_t size)
{
  raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * array = (raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence *)malloc(sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__destroy(raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * array)
{
  if (array) {
    raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__fini(array);
  }
  free(array);
}

bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__are_equal(const raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * lhs, const raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__HmiGlobalEnableReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence__copy(
  const raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * input,
  raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__HmiGlobalEnableReport);
    raptor_dbw_msgs__msg__HmiGlobalEnableReport * data =
      (raptor_dbw_msgs__msg__HmiGlobalEnableReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__HmiGlobalEnableReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__HmiGlobalEnableReport__fini(&data[i]);
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
    if (!raptor_dbw_msgs__msg__HmiGlobalEnableReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
