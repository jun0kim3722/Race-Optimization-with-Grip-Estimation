# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_pdu_msgs:msg/RelayStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelayStatus(type):
    """Metaclass of message 'RelayStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'RELAY_COIL_OPEN': 1,
        'RELAY_COIL_SHORTED': 2,
        'NORM_OPEN_RELAY_OPEN': 3,
        'NORM_CLOSED_RELAY_OPEN': 4,
        'COIL_NOT_POWERED': 5,
        'NORM_OPEN_RELAY_SHORTED': 6,
        'NORM_CLOSED_RELAY_SHORTED': 7,
        'RESERVED_01': 8,
        'RESERVED_02': 9,
        'RESERVED_03': 10,
        'HIGH_SIDE_FAULT': 11,
        'HIGH_SIDE_OPEN_LOAD': 12,
        'HIGH_SIDE_OVER_VOLTAGE': 13,
        'RESERVED_04': 14,
        'RELAY_LOCATION_NOT_USED': 15,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raptor_pdu_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_pdu_msgs.msg.RelayStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__relay_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__relay_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__relay_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__relay_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__relay_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'RELAY_COIL_OPEN': cls.__constants['RELAY_COIL_OPEN'],
            'RELAY_COIL_SHORTED': cls.__constants['RELAY_COIL_SHORTED'],
            'NORM_OPEN_RELAY_OPEN': cls.__constants['NORM_OPEN_RELAY_OPEN'],
            'NORM_CLOSED_RELAY_OPEN': cls.__constants['NORM_CLOSED_RELAY_OPEN'],
            'COIL_NOT_POWERED': cls.__constants['COIL_NOT_POWERED'],
            'NORM_OPEN_RELAY_SHORTED': cls.__constants['NORM_OPEN_RELAY_SHORTED'],
            'NORM_CLOSED_RELAY_SHORTED': cls.__constants['NORM_CLOSED_RELAY_SHORTED'],
            'RESERVED_01': cls.__constants['RESERVED_01'],
            'RESERVED_02': cls.__constants['RESERVED_02'],
            'RESERVED_03': cls.__constants['RESERVED_03'],
            'HIGH_SIDE_FAULT': cls.__constants['HIGH_SIDE_FAULT'],
            'HIGH_SIDE_OPEN_LOAD': cls.__constants['HIGH_SIDE_OPEN_LOAD'],
            'HIGH_SIDE_OVER_VOLTAGE': cls.__constants['HIGH_SIDE_OVER_VOLTAGE'],
            'RESERVED_04': cls.__constants['RESERVED_04'],
            'RELAY_LOCATION_NOT_USED': cls.__constants['RELAY_LOCATION_NOT_USED'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_RelayStatus.__constants['OK']

    @property
    def RELAY_COIL_OPEN(self):
        """Message constant 'RELAY_COIL_OPEN'."""
        return Metaclass_RelayStatus.__constants['RELAY_COIL_OPEN']

    @property
    def RELAY_COIL_SHORTED(self):
        """Message constant 'RELAY_COIL_SHORTED'."""
        return Metaclass_RelayStatus.__constants['RELAY_COIL_SHORTED']

    @property
    def NORM_OPEN_RELAY_OPEN(self):
        """Message constant 'NORM_OPEN_RELAY_OPEN'."""
        return Metaclass_RelayStatus.__constants['NORM_OPEN_RELAY_OPEN']

    @property
    def NORM_CLOSED_RELAY_OPEN(self):
        """Message constant 'NORM_CLOSED_RELAY_OPEN'."""
        return Metaclass_RelayStatus.__constants['NORM_CLOSED_RELAY_OPEN']

    @property
    def COIL_NOT_POWERED(self):
        """Message constant 'COIL_NOT_POWERED'."""
        return Metaclass_RelayStatus.__constants['COIL_NOT_POWERED']

    @property
    def NORM_OPEN_RELAY_SHORTED(self):
        """Message constant 'NORM_OPEN_RELAY_SHORTED'."""
        return Metaclass_RelayStatus.__constants['NORM_OPEN_RELAY_SHORTED']

    @property
    def NORM_CLOSED_RELAY_SHORTED(self):
        """Message constant 'NORM_CLOSED_RELAY_SHORTED'."""
        return Metaclass_RelayStatus.__constants['NORM_CLOSED_RELAY_SHORTED']

    @property
    def RESERVED_01(self):
        """Message constant 'RESERVED_01'."""
        return Metaclass_RelayStatus.__constants['RESERVED_01']

    @property
    def RESERVED_02(self):
        """Message constant 'RESERVED_02'."""
        return Metaclass_RelayStatus.__constants['RESERVED_02']

    @property
    def RESERVED_03(self):
        """Message constant 'RESERVED_03'."""
        return Metaclass_RelayStatus.__constants['RESERVED_03']

    @property
    def HIGH_SIDE_FAULT(self):
        """Message constant 'HIGH_SIDE_FAULT'."""
        return Metaclass_RelayStatus.__constants['HIGH_SIDE_FAULT']

    @property
    def HIGH_SIDE_OPEN_LOAD(self):
        """Message constant 'HIGH_SIDE_OPEN_LOAD'."""
        return Metaclass_RelayStatus.__constants['HIGH_SIDE_OPEN_LOAD']

    @property
    def HIGH_SIDE_OVER_VOLTAGE(self):
        """Message constant 'HIGH_SIDE_OVER_VOLTAGE'."""
        return Metaclass_RelayStatus.__constants['HIGH_SIDE_OVER_VOLTAGE']

    @property
    def RESERVED_04(self):
        """Message constant 'RESERVED_04'."""
        return Metaclass_RelayStatus.__constants['RESERVED_04']

    @property
    def RELAY_LOCATION_NOT_USED(self):
        """Message constant 'RELAY_LOCATION_NOT_USED'."""
        return Metaclass_RelayStatus.__constants['RELAY_LOCATION_NOT_USED']


class RelayStatus(metaclass=Metaclass_RelayStatus):
    """
    Message class 'RelayStatus'.

    Constants:
      OK
      RELAY_COIL_OPEN
      RELAY_COIL_SHORTED
      NORM_OPEN_RELAY_OPEN
      NORM_CLOSED_RELAY_OPEN
      COIL_NOT_POWERED
      NORM_OPEN_RELAY_SHORTED
      NORM_CLOSED_RELAY_SHORTED
      RESERVED_01
      RESERVED_02
      RESERVED_03
      HIGH_SIDE_FAULT
      HIGH_SIDE_OPEN_LOAD
      HIGH_SIDE_OVER_VOLTAGE
      RESERVED_04
      RELAY_LOCATION_NOT_USED
    """

    __slots__ = [
        '_header',
        '_value',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
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
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
