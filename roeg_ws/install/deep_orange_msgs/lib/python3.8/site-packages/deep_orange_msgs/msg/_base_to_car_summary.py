# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deep_orange_msgs:msg/BaseToCarSummary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseToCarSummary(type):
    """Metaclass of message 'BaseToCarSummary'."""

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
                'deep_orange_msgs.msg.BaseToCarSummary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_to_car_summary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_to_car_summary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_to_car_summary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_to_car_summary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_to_car_summary

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


class BaseToCarSummary(metaclass=Metaclass_BaseToCarSummary):
    """Message class 'BaseToCarSummary'."""

    __slots__ = [
        '_stamp',
        '_base_to_car_heartbeat',
        '_track_flag',
        '_veh_flag',
        '_veh_rank',
        '_lap_status_whole',
        '_lap_status_fraction',
        '_round_target_speed',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'base_to_car_heartbeat': 'uint8',
        'track_flag': 'uint8',
        'veh_flag': 'uint8',
        'veh_rank': 'uint8',
        'lap_status_whole': 'float',
        'lap_status_fraction': 'float',
        'round_target_speed': 'float',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.base_to_car_heartbeat = kwargs.get('base_to_car_heartbeat', int())
        self.track_flag = kwargs.get('track_flag', int())
        self.veh_flag = kwargs.get('veh_flag', int())
        self.veh_rank = kwargs.get('veh_rank', int())
        self.lap_status_whole = kwargs.get('lap_status_whole', float())
        self.lap_status_fraction = kwargs.get('lap_status_fraction', float())
        self.round_target_speed = kwargs.get('round_target_speed', float())

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
        if self.base_to_car_heartbeat != other.base_to_car_heartbeat:
            return False
        if self.track_flag != other.track_flag:
            return False
        if self.veh_flag != other.veh_flag:
            return False
        if self.veh_rank != other.veh_rank:
            return False
        if self.lap_status_whole != other.lap_status_whole:
            return False
        if self.lap_status_fraction != other.lap_status_fraction:
            return False
        if self.round_target_speed != other.round_target_speed:
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
    def base_to_car_heartbeat(self):
        """Message field 'base_to_car_heartbeat'."""
        return self._base_to_car_heartbeat

    @base_to_car_heartbeat.setter
    def base_to_car_heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_to_car_heartbeat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'base_to_car_heartbeat' field must be an unsigned integer in [0, 255]"
        self._base_to_car_heartbeat = value

    @property
    def track_flag(self):
        """Message field 'track_flag'."""
        return self._track_flag

    @track_flag.setter
    def track_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'track_flag' field must be an unsigned integer in [0, 255]"
        self._track_flag = value

    @property
    def veh_flag(self):
        """Message field 'veh_flag'."""
        return self._veh_flag

    @veh_flag.setter
    def veh_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_flag' field must be an unsigned integer in [0, 255]"
        self._veh_flag = value

    @property
    def veh_rank(self):
        """Message field 'veh_rank'."""
        return self._veh_rank

    @veh_rank.setter
    def veh_rank(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_rank' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_rank' field must be an unsigned integer in [0, 255]"
        self._veh_rank = value

    @property
    def lap_status_whole(self):
        """Message field 'lap_status_whole'."""
        return self._lap_status_whole

    @lap_status_whole.setter
    def lap_status_whole(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lap_status_whole' field must be of type 'float'"
        self._lap_status_whole = value

    @property
    def lap_status_fraction(self):
        """Message field 'lap_status_fraction'."""
        return self._lap_status_fraction

    @lap_status_fraction.setter
    def lap_status_fraction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lap_status_fraction' field must be of type 'float'"
        self._lap_status_fraction = value

    @property
    def round_target_speed(self):
        """Message field 'round_target_speed'."""
        return self._round_target_speed

    @round_target_speed.setter
    def round_target_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'round_target_speed' field must be of type 'float'"
        self._round_target_speed = value
