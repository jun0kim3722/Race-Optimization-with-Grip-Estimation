// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_pdu_msgs:msg/RelayReport.idl
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
#include "raptor_pdu_msgs/msg/detail/relay_report__struct.h"
#include "raptor_pdu_msgs/msg/detail/relay_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);
bool raptor_pdu_msgs__msg__relay_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_pdu_msgs__msg__relay_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_pdu_msgs__msg__relay_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("raptor_pdu_msgs.msg._relay_report.RelayReport", full_classname_dest, 45) == 0);
  }
  raptor_pdu_msgs__msg__RelayReport * ros_message = _ros_message;
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
  {  // grid_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "grid_address");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grid_address = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relay_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_1");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_2");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_3");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_4");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_5");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_6");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_6)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_7");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_7)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relay_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay_8");
    if (!field) {
      return false;
    }
    if (!raptor_pdu_msgs__msg__relay_status__convert_from_py(field, &ros_message->relay_8)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_pdu_msgs__msg__relay_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RelayReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_pdu_msgs.msg._relay_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RelayReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_pdu_msgs__msg__RelayReport * ros_message = (raptor_pdu_msgs__msg__RelayReport *)raw_ros_message;
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
  {  // grid_address
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->grid_address);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grid_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_1
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_2
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_3
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_4
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_5
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_6
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_6);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_7
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_7);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay_8
    PyObject * field = NULL;
    field = raptor_pdu_msgs__msg__relay_status__convert_to_py(&ros_message->relay_8);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
