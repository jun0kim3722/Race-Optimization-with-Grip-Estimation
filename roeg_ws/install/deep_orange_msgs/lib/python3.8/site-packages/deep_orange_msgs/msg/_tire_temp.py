# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deep_orange_msgs:msg/TireTemp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TireTemp(type):
    """Metaclass of message 'TireTemp'."""

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
                'deep_orange_msgs.msg.TireTemp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tire_temp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tire_temp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tire_temp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tire_temp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tire_temp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TireTemp(metaclass=Metaclass_TireTemp):
    """Message class 'TireTemp'."""

    __slots__ = [
        '_median',
        '_mean',
        '_min',
        '_max',
    ]

    _fields_and_field_types = {
        'median': 'float',
        'mean': 'float',
        'min': 'float',
        'max': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.median = kwargs.get('median', float())
        self.mean = kwargs.get('mean', float())
        self.min = kwargs.get('min', float())
        self.max = kwargs.get('max', float())

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
        if self.median != other.median:
            return False
        if self.mean != other.mean:
            return False
        if self.min != other.min:
            return False
        if self.max != other.max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def median(self):
        """Message field 'median'."""
        return self._median

    @median.setter
    def median(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'median' field must be of type 'float'"
        self._median = value

    @property
    def mean(self):
        """Message field 'mean'."""
        return self._mean

    @mean.setter
    def mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mean' field must be of type 'float'"
        self._mean = value

    @property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min' field must be of type 'float'"
        self._min = value

    @property  # noqa: A003
    def max(self):  # noqa: A003
        """Message field 'max'."""
        return self._max

    @max.setter  # noqa: A003
    def max(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max' field must be of type 'float'"
        self._max = value
