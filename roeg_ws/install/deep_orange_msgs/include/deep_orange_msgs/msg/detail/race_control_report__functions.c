// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deep_orange_msgs:msg/RaceControlReport.idl
// generated code does not contain a copyright notice
#include "deep_orange_msgs/msg/detail/race_control_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
deep_orange_msgs__msg__RaceControlReport__init(deep_orange_msgs__msg__RaceControlReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    deep_orange_msgs__msg__RaceControlReport__fini(msg);
    return false;
  }
  // base_to_car_heartbeat
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
  // round_target_speed
  // marelli_track_flag
  // marelli_vehicle_flag
  // marelli_sector_flag
  // lte_modem_lte_rssi
  // lte_sync_ok
  return true;
}

void
deep_orange_msgs__msg__RaceControlReport__fini(deep_orange_msgs__msg__RaceControlReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // base_to_car_heartbeat
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
  // round_target_speed
  // marelli_track_flag
  // marelli_vehicle_flag
  // marelli_sector_flag
  // lte_modem_lte_rssi
  // lte_sync_ok
}

bool
deep_orange_msgs__msg__RaceControlReport__are_equal(const deep_orange_msgs__msg__RaceControlReport * lhs, const deep_orange_msgs__msg__RaceControlReport * rhs)
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
  // base_to_car_heartbeat
  if (lhs->base_to_car_heartbeat != rhs->base_to_car_heartbeat) {
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
  // round_target_speed
  if (lhs->round_target_speed != rhs->round_target_speed) {
    return false;
  }
  // marelli_track_flag
  if (lhs->marelli_track_flag != rhs->marelli_track_flag) {
    return false;
  }
  // marelli_vehicle_flag
  if (lhs->marelli_vehicle_flag != rhs->marelli_vehicle_flag) {
    return false;
  }
  // marelli_sector_flag
  if (lhs->marelli_sector_flag != rhs->marelli_sector_flag) {
    return false;
  }
  // lte_modem_lte_rssi
  if (lhs->lte_modem_lte_rssi != rhs->lte_modem_lte_rssi) {
    return false;
  }
  // lte_sync_ok
  if (lhs->lte_sync_ok != rhs->lte_sync_ok) {
    return false;
  }
  return true;
}

bool
deep_orange_msgs__msg__RaceControlReport__copy(
  const deep_orange_msgs__msg__RaceControlReport * input,
  deep_orange_msgs__msg__RaceControlReport * output)
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
  // base_to_car_heartbeat
  output->base_to_car_heartbeat = input->base_to_car_heartbeat;
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
  // round_target_speed
  output->round_target_speed = input->round_target_speed;
  // marelli_track_flag
  output->marelli_track_flag = input->marelli_track_flag;
  // marelli_vehicle_flag
  output->marelli_vehicle_flag = input->marelli_vehicle_flag;
  // marelli_sector_flag
  output->marelli_sector_flag = input->marelli_sector_flag;
  // lte_modem_lte_rssi
  output->lte_modem_lte_rssi = input->lte_modem_lte_rssi;
  // lte_sync_ok
  output->lte_sync_ok = input->lte_sync_ok;
  return true;
}

deep_orange_msgs__msg__RaceControlReport *
deep_orange_msgs__msg__RaceControlReport__create()
{
  deep_orange_msgs__msg__RaceControlReport * msg = (deep_orange_msgs__msg__RaceControlReport *)malloc(sizeof(deep_orange_msgs__msg__RaceControlReport));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deep_orange_msgs__msg__RaceControlReport));
  bool success = deep_orange_msgs__msg__RaceControlReport__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deep_orange_msgs__msg__RaceControlReport__destroy(deep_orange_msgs__msg__RaceControlReport * msg)
{
  if (msg) {
    deep_orange_msgs__msg__RaceControlReport__fini(msg);
  }
  free(msg);
}


bool
deep_orange_msgs__msg__RaceControlReport__Sequence__init(deep_orange_msgs__msg__RaceControlReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deep_orange_msgs__msg__RaceControlReport * data = NULL;
  if (size) {
    data = (deep_orange_msgs__msg__RaceControlReport *)calloc(size, sizeof(deep_orange_msgs__msg__RaceControlReport));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deep_orange_msgs__msg__RaceControlReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deep_orange_msgs__msg__RaceControlReport__fini(&data[i - 1]);
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
deep_orange_msgs__msg__RaceControlReport__Sequence__fini(deep_orange_msgs__msg__RaceControlReport__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deep_orange_msgs__msg__RaceControlReport__fini(&array->data[i]);
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

deep_orange_msgs__msg__RaceControlReport__Sequence *
deep_orange_msgs__msg__RaceControlReport__Sequence__create(size_t size)
{
  deep_orange_msgs__msg__RaceControlReport__Sequence * array = (deep_orange_msgs__msg__RaceControlReport__Sequence *)malloc(sizeof(deep_orange_msgs__msg__RaceControlReport__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deep_orange_msgs__msg__RaceControlReport__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deep_orange_msgs__msg__RaceControlReport__Sequence__destroy(deep_orange_msgs__msg__RaceControlReport__Sequence * array)
{
  if (array) {
    deep_orange_msgs__msg__RaceControlReport__Sequence__fini(array);
  }
  free(array);
}

bool
deep_orange_msgs__msg__RaceControlReport__Sequence__are_equal(const deep_orange_msgs__msg__RaceControlReport__Sequence * lhs, const deep_orange_msgs__msg__RaceControlReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deep_orange_msgs__msg__RaceControlReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deep_orange_msgs__msg__RaceControlReport__Sequence__copy(
  const deep_orange_msgs__msg__RaceControlReport__Sequence * input,
  deep_orange_msgs__msg__RaceControlReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deep_orange_msgs__msg__RaceControlReport);
    deep_orange_msgs__msg__RaceControlReport * data =
      (deep_orange_msgs__msg__RaceControlReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deep_orange_msgs__msg__RaceControlReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          deep_orange_msgs__msg__RaceControlReport__fini(&data[i]);
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
    if (!deep_orange_msgs__msg__RaceControlReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
