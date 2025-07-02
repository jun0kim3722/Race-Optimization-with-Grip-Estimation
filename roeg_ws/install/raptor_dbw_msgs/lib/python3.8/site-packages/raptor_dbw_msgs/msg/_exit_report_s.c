// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/ExitReport.idl
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
#include "raptor_dbw_msgs/msg/detail/exit_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/exit_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__exit_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("raptor_dbw_msgs.msg._exit_report.ExitReport", full_classname_dest, 43) == 0);
  }
  raptor_dbw_msgs__msg__ExitReport * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // akit_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "akit_disable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->akit_disable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // driver_in_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_in_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->driver_in_control = (Py_True == field);
    Py_DECREF(field);
  }
  {  // idx_auton_disable_no_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "idx_auton_disable_no_brakes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idx_auton_disable_no_brakes = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // idx_auton_disable_apply_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "idx_auton_disable_apply_brakes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idx_auton_disable_apply_brakes = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auton_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "auton_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auton_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__exit_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExitReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._exit_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExitReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__ExitReport * ros_message = (raptor_dbw_msgs__msg__ExitReport *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // akit_disable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->akit_disable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "akit_disable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_in_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->driver_in_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_in_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idx_auton_disable_no_brakes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idx_auton_disable_no_brakes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idx_auton_disable_no_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idx_auton_disable_apply_brakes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idx_auton_disable_apply_brakes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idx_auton_disable_apply_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auton_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auton_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auton_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
