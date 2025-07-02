# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_pdu_msgs:msg/RelayCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RelayCommand(type):
    """Metaclass of message 'RelayCommand'."""

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
                'raptor_pdu_msgs.msg.RelayCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__relay_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__relay_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__relay_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__relay_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__relay_command

            from raptor_pdu_msgs.msg import RelayState
            if RelayState.__class__._TYPE_SUPPORT is None:
                RelayState.__class__.__import_type_support__()

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


class RelayCommand(metaclass=Metaclass_RelayCommand):
    """Message class 'RelayCommand'."""

    __slots__ = [
        '_header',
        '_relay_1',
        '_relay_2',
        '_relay_3',
        '_relay_4',
        '_relay_5',
        '_relay_6',
        '_relay_7',
        '_relay_8',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'relay_1': 'raptor_pdu_msgs/RelayState',
        'relay_2': 'raptor_pdu_msgs/RelayState',
        'relay_3': 'raptor_pdu_msgs/RelayState',
        'relay_4': 'raptor_pdu_msgs/RelayState',
        'relay_5': 'raptor_pdu_msgs/RelayState',
        'relay_6': 'raptor_pdu_msgs/RelayState',
        'relay_7': 'raptor_pdu_msgs/RelayState',
        'relay_8': 'raptor_pdu_msgs/RelayState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_pdu_msgs', 'msg'], 'RelayState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_1 = kwargs.get('relay_1', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_2 = kwargs.get('relay_2', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_3 = kwargs.get('relay_3', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_4 = kwargs.get('relay_4', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_5 = kwargs.get('relay_5', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_6 = kwargs.get('relay_6', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_7 = kwargs.get('relay_7', RelayState())
        from raptor_pdu_msgs.msg import RelayState
        self.relay_8 = kwargs.get('relay_8', RelayState())

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
        if self.relay_1 != other.relay_1:
            return False
        if self.relay_2 != other.relay_2:
            return False
        if self.relay_3 != other.relay_3:
            return False
        if self.relay_4 != other.relay_4:
            return False
        if self.relay_5 != other.relay_5:
            return False
        if self.relay_6 != other.relay_6:
            return False
        if self.relay_7 != other.relay_7:
            return False
        if self.relay_8 != other.relay_8:
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
    def relay_1(self):
        """Message field 'relay_1'."""
        return self._relay_1

    @relay_1.setter
    def relay_1(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_1' field must be a sub message of type 'RelayState'"
        self._relay_1 = value

    @property
    def relay_2(self):
        """Message field 'relay_2'."""
        return self._relay_2

    @relay_2.setter
    def relay_2(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_2' field must be a sub message of type 'RelayState'"
        self._relay_2 = value

    @property
    def relay_3(self):
        """Message field 'relay_3'."""
        return self._relay_3

    @relay_3.setter
    def relay_3(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_3' field must be a sub message of type 'RelayState'"
        self._relay_3 = value

    @property
    def relay_4(self):
        """Message field 'relay_4'."""
        return self._relay_4

    @relay_4.setter
    def relay_4(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_4' field must be a sub message of type 'RelayState'"
        self._relay_4 = value

    @property
    def relay_5(self):
        """Message field 'relay_5'."""
        return self._relay_5

    @relay_5.setter
    def relay_5(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_5' field must be a sub message of type 'RelayState'"
        self._relay_5 = value

    @property
    def relay_6(self):
        """Message field 'relay_6'."""
        return self._relay_6

    @relay_6.setter
    def relay_6(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_6' field must be a sub message of type 'RelayState'"
        self._relay_6 = value

    @property
    def relay_7(self):
        """Message field 'relay_7'."""
        return self._relay_7

    @relay_7.setter
    def relay_7(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_7' field must be a sub message of type 'RelayState'"
        self._relay_7 = value

    @property
    def relay_8(self):
        """Message field 'relay_8'."""
        return self._relay_8

    @relay_8.setter
    def relay_8(self, value):
        if __debug__:
            from raptor_pdu_msgs.msg import RelayState
            assert \
                isinstance(value, RelayState), \
                "The 'relay_8' field must be a sub message of type 'RelayState'"
        self._relay_8 = value
