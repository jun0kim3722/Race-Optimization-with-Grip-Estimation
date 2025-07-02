# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/ExitReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExitReport(type):
    """Metaclass of message 'ExitReport'."""

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
            module = import_type_support('raptor_dbw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_dbw_msgs.msg.ExitReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__exit_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__exit_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__exit_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__exit_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__exit_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExitReport(metaclass=Metaclass_ExitReport):
    """Message class 'ExitReport'."""

    __slots__ = [
        '_header',
        '_akit_disable',
        '_driver_in_control',
        '_idx_auton_disable_no_brakes',
        '_idx_auton_disable_apply_brakes',
        '_auton_counter',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'akit_disable': 'boolean',
        'driver_in_control': 'boolean',
        'idx_auton_disable_no_brakes': 'uint16',
        'idx_auton_disable_apply_brakes': 'uint16',
        'auton_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.akit_disable = kwargs.get('akit_disable', bool())
        self.driver_in_control = kwargs.get('driver_in_control', bool())
        self.idx_auton_disable_no_brakes = kwargs.get('idx_auton_disable_no_brakes', int())
        self.idx_auton_disable_apply_brakes = kwargs.get('idx_auton_disable_apply_brakes', int())
        self.auton_counter = kwargs.get('auton_counter', int())

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
        if self.header != other.header:
            return False
        if self.akit_disable != other.akit_disable:
            return False
        if self.driver_in_control != other.driver_in_control:
            return False
        if self.idx_auton_disable_no_brakes != other.idx_auton_disable_no_brakes:
            return False
        if self.idx_auton_disable_apply_brakes != other.idx_auton_disable_apply_brakes:
            return False
        if self.auton_counter != other.auton_counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def akit_disable(self):
        """Message field 'akit_disable'."""
        return self._akit_disable

    @akit_disable.setter
    def akit_disable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'akit_disable' field must be of type 'bool'"
        self._akit_disable = value

    @property
    def driver_in_control(self):
        """Message field 'driver_in_control'."""
        return self._driver_in_control

    @driver_in_control.setter
    def driver_in_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'driver_in_control' field must be of type 'bool'"
        self._driver_in_control = value

    @property
    def idx_auton_disable_no_brakes(self):
        """Message field 'idx_auton_disable_no_brakes'."""
        return self._idx_auton_disable_no_brakes

    @idx_auton_disable_no_brakes.setter
    def idx_auton_disable_no_brakes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idx_auton_disable_no_brakes' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'idx_auton_disable_no_brakes' field must be an unsigned integer in [0, 65535]"
        self._idx_auton_disable_no_brakes = value

    @property
    def idx_auton_disable_apply_brakes(self):
        """Message field 'idx_auton_disable_apply_brakes'."""
        return self._idx_auton_disable_apply_brakes

    @idx_auton_disable_apply_brakes.setter
    def idx_auton_disable_apply_brakes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'idx_auton_disable_apply_brakes' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'idx_auton_disable_apply_brakes' field must be an unsigned integer in [0, 65535]"
        self._idx_auton_disable_apply_brakes = value

    @property
    def auton_counter(self):
        """Message field 'auton_counter'."""
        return self._auton_counter

    @auton_counter.setter
    def auton_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auton_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auton_counter' field must be an unsigned integer in [0, 255]"
        self._auton_counter = value
