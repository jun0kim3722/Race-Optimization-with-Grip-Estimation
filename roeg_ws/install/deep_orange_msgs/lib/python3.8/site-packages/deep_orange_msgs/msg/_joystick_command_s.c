// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deep_orange_msgs:msg/JoystickCommand.idl
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
#include "deep_orange_msgs/msg/detail/joystick_command__struct.h"
#include "deep_orange_msgs/msg/detail/joystick_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deep_orange_msgs__msg__joystick_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("deep_orange_msgs.msg._joystick_command.JoystickCommand", full_classname_dest, 54) == 0);
  }
  deep_orange_msgs__msg__JoystickCommand * ros_message = _ros_message;
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
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emergency_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coordinated_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinated_stop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordinated_stop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // joy_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "joy_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->joy_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steering_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerator_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerator_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerator_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joystick_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "joystick_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joystick_healthy = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deep_orange_msgs__msg__joystick_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JoystickCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deep_orange_msgs.msg._joystick_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JoystickCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deep_orange_msgs__msg__JoystickCommand * ros_message = (deep_orange_msgs__msg__JoystickCommand *)raw_ros_message;
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
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emergency_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinated_stop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coordinated_stop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinated_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joy_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->joy_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joy_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerator_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerator_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerator_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joystick_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joystick_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joystick_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
