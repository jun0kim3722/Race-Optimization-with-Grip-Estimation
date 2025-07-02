// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deep_orange_msgs:msg/BaseToCarSummary.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "deep_orange_msgs/msg/detail/base_to_car_summary__struct.h"
#include "deep_orange_msgs/msg/detail/base_to_car_summary__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deep_orange_msgs__msg__base_to_car_summary__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("deep_orange_msgs.msg._base_to_car_summary.BaseToCarSummary", full_classname_dest, 58) == 0);
  }
  deep_orange_msgs__msg__BaseToCarSummary * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // base_to_car_heartbeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_to_car_heartbeat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_to_car_heartbeat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_rank
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_rank");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_rank = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lap_status_whole
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_status_whole");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lap_status_whole = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lap_status_fraction
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap_status_fraction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lap_status_fraction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // round_target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "round_target_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->round_target_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deep_orange_msgs__msg__base_to_car_summary__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BaseToCarSummary */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deep_orange_msgs.msg._base_to_car_summary");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BaseToCarSummary");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deep_orange_msgs__msg__BaseToCarSummary * ros_message = (deep_orange_msgs__msg__BaseToCarSummary *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_to_car_heartbeat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->base_to_car_heartbeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_to_car_heartbeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_rank
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_rank);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_rank", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap_status_whole
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lap_status_whole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_status_whole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap_status_fraction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lap_status_fraction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap_status_fraction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // round_target_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->round_target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "round_target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
