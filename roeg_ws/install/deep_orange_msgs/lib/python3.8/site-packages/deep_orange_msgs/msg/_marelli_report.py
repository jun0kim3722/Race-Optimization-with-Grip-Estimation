# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deep_orange_msgs:msg/MarelliReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MarelliReport(type):
    """Metaclass of message 'MarelliReport'."""

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
                'deep_orange_msgs.msg.MarelliReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__marelli_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__marelli_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__marelli_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__marelli_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__marelli_report

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


class MarelliReport(metaclass=Metaclass_MarelliReport):
    """Message class 'MarelliReport'."""

    __slots__ = [
        '_stamp',
        '_lat',
        '_lon',
        '_lte_modem_lte_rssi',
        '_lte_sync_ok',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'lat': 'float',
        'lon': 'float',
        'lte_modem_lte_rssi': 'int8',
        'lte_sync_ok': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.lte_modem_lte_rssi = kwargs.get('lte_modem_lte_rssi', int())
        self.lte_sync_ok = kwargs.get('lte_sync_ok', bool())

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
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.lte_modem_lte_rssi != other.lte_modem_lte_rssi:
            return False
        if self.lte_sync_ok != other.lte_sync_ok:
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
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
        self._lat = value

    @property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
        self._lon = value

    @property
    def lte_modem_lte_rssi(self):
        """Message field 'lte_modem_lte_rssi'."""
        return self._lte_modem_lte_rssi

    @lte_modem_lte_rssi.setter
    def lte_modem_lte_rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lte_modem_lte_rssi' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lte_modem_lte_rssi' field must be an integer in [-128, 127]"
        self._lte_modem_lte_rssi = value

    @property
    def lte_sync_ok(self):
        """Message field 'lte_sync_ok'."""
        return self._lte_sync_ok

    @lte_sync_ok.setter
    def lte_sync_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lte_sync_ok' field must be of type 'bool'"
        self._lte_sync_ok = value
