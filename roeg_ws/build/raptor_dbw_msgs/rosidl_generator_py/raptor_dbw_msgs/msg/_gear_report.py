# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raptor_dbw_msgs:msg/GearReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GearReport(type):
    """Metaclass of message 'GearReport'."""

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
                'raptor_dbw_msgs.msg.GearReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gear_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gear_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gear_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gear_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gear_report

            from raptor_dbw_msgs.msg import Gear
            if Gear.__class__._TYPE_SUPPORT is None:
                Gear.__class__.__import_type_support__()

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


class GearReport(metaclass=Metaclass_GearReport):
    """Message class 'GearReport'."""

    __slots__ = [
        '_header',
        '_state',
        '_reject',
        '_driver_activity',
        '_enabled',
        '_trans_curr_gear',
        '_gear_select_system_fault',
        '_gear_mismatch_flash',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'state': 'raptor_dbw_msgs/Gear',
        'reject': 'boolean',
        'driver_activity': 'boolean',
        'enabled': 'boolean',
        'trans_curr_gear': 'uint8',
        'gear_select_system_fault': 'boolean',
        'gear_mismatch_flash': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raptor_dbw_msgs', 'msg'], 'Gear'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from raptor_dbw_msgs.msg import Gear
        self.state = kwargs.get('state', Gear())
        self.reject = kwargs.get('reject', bool())
        self.driver_activity = kwargs.get('driver_activity', bool())
        self.enabled = kwargs.get('enabled', bool())
        self.trans_curr_gear = kwargs.get('trans_curr_gear', int())
        self.gear_select_system_fault = kwargs.get('gear_select_system_fault', bool())
        self.gear_mismatch_flash = kwargs.get('gear_mismatch_flash', bool())

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
        if self.state != other.state:
            return False
        if self.reject != other.reject:
            return False
        if self.driver_activity != other.driver_activity:
            return False
        if self.enabled != other.enabled:
            return False
        if self.trans_curr_gear != other.trans_curr_gear:
            return False
        if self.gear_select_system_fault != other.gear_select_system_fault:
            return False
        if self.gear_mismatch_flash != other.gear_mismatch_flash:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from raptor_dbw_msgs.msg import Gear
            assert \
                isinstance(value, Gear), \
                "The 'state' field must be a sub message of type 'Gear'"
        self._state = value

    @property
    def reject(self):
        """Message field 'reject'."""
        return self._reject

    @reject.setter
    def reject(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reject' field must be of type 'bool'"
        self._reject = value

    @property
    def driver_activity(self):
        """Message field 'driver_activity'."""
        return self._driver_activity

    @driver_activity.setter
    def driver_activity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'driver_activity' field must be of type 'bool'"
        self._driver_activity = value

    @property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @property
    def trans_curr_gear(self):
        """Message field 'trans_curr_gear'."""
        return self._trans_curr_gear

    @trans_curr_gear.setter
    def trans_curr_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trans_curr_gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trans_curr_gear' field must be an unsigned integer in [0, 255]"
        self._trans_curr_gear = value

    @property
    def gear_select_system_fault(self):
        """Message field 'gear_select_system_fault'."""
        return self._gear_select_system_fault

    @gear_select_system_fault.setter
    def gear_select_system_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_select_system_fault' field must be of type 'bool'"
        self._gear_select_system_fault = value

    @property
    def gear_mismatch_flash(self):
        """Message field 'gear_mismatch_flash'."""
        return self._gear_mismatch_flash

    @gear_mismatch_flash.setter
    def gear_mismatch_flash(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_mismatch_flash' field must be of type 'bool'"
        self._gear_mismatch_flash = value
