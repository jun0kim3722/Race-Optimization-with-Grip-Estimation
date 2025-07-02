# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_pdu_msgs:msg/FuseReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FuseReport(type):
    """Metaclass of message 'FuseReport'."""

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
            module = import_type_support('raptor_pdu_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raptor_pdu_msgs.msg.FuseReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fuse_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fuse_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fuse_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fuse_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fuse_report

            from raptor_pdu_msgs.msg import FuseStatus
            if FuseStatus.__class__._TYPE_SUPPORT is None:
                FuseStatus.__class__.__import_type_support__()

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


class FuseReport(metaclass=Metaclass_FuseReport):
    """Message class 'FuseReport'."""

    __slots__ = [
        '_header',
        '_grid_address',
        '_fuse_1',
        '_fuse_2',
        '_fuse_3',
        '_fuse_4',
        '_fuse_5',
        '_fuse_6',
        '_fuse_7',
        '_fuse_8',
        '_fuse_9',
        '_fuse_10',
        '_fuse_11',
        '_fuse_12',
        '_fuse_13',
        '_fuse_14',
        '_fuse_15',
        '_fuse_16',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'grid_address': 'uint8',
        'fuse_1': 'raptor_pdu_msgs/FuseStatus',
        'fuse_2': 'raptor_pdu_msgs/FuseStatus',
        'fuse_3': 'raptor_pdu_msgs/FuseStatus',
        'fuse_4': 'raptor_pdu_msgs/FuseStatus',
        'fuse_5': 'raptor_pdu_msgs/FuseStatus',
        'fuse_6': 'raptor_pdu_msgs/FuseStatus',
        'fuse_7': 'raptor_pdu_msgs/FuseStatus',
        'fuse_8': 'raptor_pdu_msgs/FuseStatus',
        'fuse_9': 'raptor_pdu_msgs/FuseStatus',
        'fuse_10': 'raptor_pdu_msgs/FuseStatus',
        'fuse_11': 'raptor_pdu_msgs/FuseStatus',
        'fuse_12': 'raptor_pdu_msgs/FuseStatus',
        'fuse_13': 'raptor_pdu_msgs/FuseStatus',
        'fuse_14': 'raptor_pdu_msgs/FuseStatus',
        'fuse_15': 'raptor_pdu_msgs/FuseStatus',
        'fuse_16': 'raptor_pdu_msgs/FuseStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'FuseStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.grid_address = kwargs.get('grid_address', int())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_1 = kwargs.get('fuse_1', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_2 = kwargs.get('fuse_2', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_3 = kwargs.get('fuse_3', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_4 = kwargs.get('fuse_4', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_5 = kwargs.get('fuse_5', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_6 = kwargs.get('fuse_6', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_7 = kwargs.get('fuse_7', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_8 = kwargs.get('fuse_8', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_9 = kwargs.get('fuse_9', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_10 = kwargs.get('fuse_10', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_11 = kwargs.get('fuse_11', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_12 = kwargs.get('fuse_12', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_13 = kwargs.get('fuse_13', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_14 = kwargs.get('fuse_14', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_15 = kwargs.get('fuse_15', FuseStatus())
        from raptor_pdu_msgs.msg import FuseStatus
        self.fuse_16 = kwargs.get('fuse_16', FuseStatus())

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
        if self.grid_address != other.grid_address:
            return False
        if self.fuse_1 != other.fuse_1:
            return False
        if self.fuse_2 != other.fuse_2:
            return False
        if self.fuse_3 != other.fuse_3:
            return False
        if self.fuse_4 != other.fuse_4:
            return False
        if self.fuse_5 != other.fuse_5:
            return False
        if self.fuse_6 != other.fuse_6:
            return False
        if self.fuse_7 != other.fuse_7:
            return False
        if self.fuse_8 != other.fuse_8:
            return False
        if self.fuse_9 != other.fuse_9:
            return False
        if self.fuse_10 != other.fuse_10:
            return False
        if self.fuse_11 != other.fuse_11:
            return False
        if self.fuse_12 != other.fuse_12:
            return False
        if self.fuse_13 != other.fuse_13:
            return False
        if self.fuse_14 != other.fuse_14:
            return False
        if self.fuse_15 != other.fuse_15:
            return False
        if self.fuse_16 != other.fuse_16:
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
    def grid_address(self):
        """Message field 'grid_address'."""
        return self._grid_address

    @grid_address.setter
    def grid_address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grid_address' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'grid_address' field must be an unsigned integer in [0, 255]"
        self._grid_address = value

    @property
    def fuse_1(self):
        """Message field 'fuse_1'."""
        return self._fuse_1

    @fuse_1.setter
    def fuse_1(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_1' field must be a sub message of type 'FuseStatus'"
        self._fuse_1 = value

    @property
    def fuse_2(self):
        """Message field 'fuse_2'."""
        return self._fuse_2

    @fuse_2.setter
    def fuse_2(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_2' field must be a sub message of type 'FuseStatus'"
        self._fuse_2 = value

    @property
    def fuse_3(self):
        """Message field 'fuse_3'."""
        return self._fuse_3

    @fuse_3.setter
    def fuse_3(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_3' field must be a sub message of type 'FuseStatus'"
        self._fuse_3 = value

    @property
    def fuse_4(self):
        """Message field 'fuse_4'."""
        return self._fuse_4

    @fuse_4.setter
    def fuse_4(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_4' field must be a sub message of type 'FuseStatus'"
        self._fuse_4 = value

    @property
    def fuse_5(self):
        """Message field 'fuse_5'."""
        return self._fuse_5

    @fuse_5.setter
    def fuse_5(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_5' field must be a sub message of type 'FuseStatus'"
        self._fuse_5 = value

    @property
    def fuse_6(self):
        """Message field 'fuse_6'."""
        return self._fuse_6

    @fuse_6.setter
    def fuse_6(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_6' field must be a sub message of type 'FuseStatus'"
        self._fuse_6 = value

    @property
    def fuse_7(self):
        """Message field 'fuse_7'."""
        return self._fuse_7

    @fuse_7.setter
    def fuse_7(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_7' field must be a sub message of type 'FuseStatus'"
        self._fuse_7 = value

    @property
    def fuse_8(self):
        """Message field 'fuse_8'."""
        return self._fuse_8

    @fuse_8.setter
    def fuse_8(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_8' field must be a sub message of type 'FuseStatus'"
        self._fuse_8 = value

    @property
    def fuse_9(self):
        """Message field 'fuse_9'."""
        return self._fuse_9

    @fuse_9.setter
    def fuse_9(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_9' field must be a sub message of type 'FuseStatus'"
        self._fuse_9 = value

    @property
    def fuse_10(self):
        """Message field 'fuse_10'."""
        return self._fuse_10

    @fuse_10.setter
    def fuse_10(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_10' field must be a sub message of type 'FuseStatus'"
        self._fuse_10 = value

    @property
    def fuse_11(self):
        """Message field 'fuse_11'."""
        return self._fuse_11

    @fuse_11.setter
    def fuse_11(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_11' field must be a sub message of type 'FuseStatus'"
        self._fuse_11 = value

    @property
    def fuse_12(self):
        """Message field 'fuse_12'."""
        return self._fuse_12

    @fuse_12.setter
    def fuse_12(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_12' field must be a sub message of type 'FuseStatus'"
        self._fuse_12 = value

    @property
    def fuse_13(self):
        """Message field 'fuse_13'."""
        return self._fuse_13

    @fuse_13.setter
    def fuse_13(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_13' field must be a sub message of type 'FuseStatus'"
        self._fuse_13 = value

    @property
    def fuse_14(self):
        """Message field 'fuse_14'."""
        return self._fuse_14

    @fuse_14.setter
    def fuse_14(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_14' field must be a sub message of type 'FuseStatus'"
        self._fuse_14 = value

    @property
    def fuse_15(self):
        """Message field 'fuse_15'."""
        return self._fuse_15

    @fuse_15.setter
    def fuse_15(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_15' field must be a sub message of type 'FuseStatus'"
        self._fuse_15 = value

    @property
    def fuse_16(self):
        """Message field 'fuse_16'."""
        return self._fuse_16

    @fuse_16.setter
    def fuse_16(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import FuseStatus
            assert \
                isinstance(value, FuseStatus), \
                "The 'fuse_16' field must be a sub message of type 'FuseStatus'"
        self._fuse_16 = value
