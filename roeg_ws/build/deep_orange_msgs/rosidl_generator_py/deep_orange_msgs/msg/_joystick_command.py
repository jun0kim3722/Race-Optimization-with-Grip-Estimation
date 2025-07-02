# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deep_orange_msgs:msg/JoystickCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JoystickCommand(type):
    """Metaclass of message 'JoystickCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deep_orange_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deep_orange_msgs.msg.JoystickCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joystick_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joystick_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joystick_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joystick_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joystick_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JoystickCommand(metaclass=Metaclass_JoystickCommand):
    """Message class 'JoystickCommand'."""

    __slots__ = [
        '_stamp',
        '_counter',
        '_emergency_stop',
        '_coordinated_stop',
        '_joy_enable',
        '_steering_cmd',
        '_brake_cmd',
        '_accelerator_cmd',
        '_gear_cmd',
        '_joystick_healthy',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'counter': 'uint8',
        'emergency_stop': 'uint8',
        'coordinated_stop': 'uint8',
        'joy_enable': 'uint8',
        'steering_cmd': 'float',
        'brake_cmd': 'float',
        'accelerator_cmd': 'float',
        'gear_cmd': 'float',
        'joystick_healthy': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.counter = kwargs.get('counter', int())
        self.emergency_stop = kwargs.get('emergency_stop', int())
        self.coordinated_stop = kwargs.get('coordinated_stop', int())
        self.joy_enable = kwargs.get('joy_enable', int())
        self.steering_cmd = kwargs.get('steering_cmd', float())
        self.brake_cmd = kwargs.get('brake_cmd', float())
        self.accelerator_cmd = kwargs.get('accelerator_cmd', float())
        self.gear_cmd = kwargs.get('gear_cmd', float())
        self.joystick_healthy = kwargs.get('joystick_healthy', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.counter != other.counter:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.coordinated_stop != other.coordinated_stop:
            return False
        if self.joy_enable != other.joy_enable:
            return False
        if self.steering_cmd != other.steering_cmd:
            return False
        if self.brake_cmd != other.brake_cmd:
            return False
        if self.accelerator_cmd != other.accelerator_cmd:
            return False
        if self.gear_cmd != other.gear_cmd:
            return False
        if self.joystick_healthy != other.joystick_healthy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'counter' field must be an unsigned integer in [0, 255]"
        self._counter = value

    @property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emergency_stop' field must be an unsigned integer in [0, 255]"
        self._emergency_stop = value

    @property
    def coordinated_stop(self):
        """Message field 'coordinated_stop'."""
        return self._coordinated_stop

    @coordinated_stop.setter
    def coordinated_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coordinated_stop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'coordinated_stop' field must be an unsigned integer in [0, 255]"
        self._coordinated_stop = value

    @property
    def joy_enable(self):
        """Message field 'joy_enable'."""
        return self._joy_enable

    @joy_enable.setter
    def joy_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'joy_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'joy_enable' field must be an unsigned integer in [0, 255]"
        self._joy_enable = value

    @property
    def steering_cmd(self):
        """Message field 'steering_cmd'."""
        return self._steering_cmd

    @steering_cmd.setter
    def steering_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_cmd' field must be of type 'float'"
        self._steering_cmd = value

    @property
    def brake_cmd(self):
        """Message field 'brake_cmd'."""
        return self._brake_cmd

    @brake_cmd.setter
    def brake_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_cmd' field must be of type 'float'"
        self._brake_cmd = value

    @property
    def accelerator_cmd(self):
        """Message field 'accelerator_cmd'."""
        return self._accelerator_cmd

    @accelerator_cmd.setter
    def accelerator_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerator_cmd' field must be of type 'float'"
        self._accelerator_cmd = value

    @property
    def gear_cmd(self):
        """Message field 'gear_cmd'."""
        return self._gear_cmd

    @gear_cmd.setter
    def gear_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gear_cmd' field must be of type 'float'"
        self._gear_cmd = value

    @property
    def joystick_healthy(self):
        """Message field 'joystick_healthy'."""
        return self._joystick_healthy

    @joystick_healthy.setter
    def joystick_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'joystick_healthy' field must be of type 'bool'"
        self._joystick_healthy = value
