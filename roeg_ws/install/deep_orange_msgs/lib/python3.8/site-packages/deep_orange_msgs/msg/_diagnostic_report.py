# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deep_orange_msgs:msg/DiagnosticReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticReport(type):
    """Metaclass of message 'DiagnosticReport'."""

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
                'deep_orange_msgs.msg.DiagnosticReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_report

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


class DiagnosticReport(metaclass=Metaclass_DiagnosticReport):
    """Message class 'DiagnosticReport'."""

    __slots__ = [
        '_stamp',
        '_sd_system_warning',
        '_sd_system_failure',
        '_motec_warning',
        '_sd_brake_warning1',
        '_sd_brake_warning2',
        '_sd_brake_warning3',
        '_sd_steer_warning1',
        '_sd_steer_warning2',
        '_sd_steer_warning3',
        '_est1_oos_front_brk',
        '_est2_oos_rear_brk',
        '_est3_low_eng_speed',
        '_est4_sd_comms_loss',
        '_est5_motec_comms_loss',
        '_est6_sd_ebrake',
        '_adlink_hb_lost',
        '_rc_lost',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'sd_system_warning': 'boolean',
        'sd_system_failure': 'boolean',
        'motec_warning': 'int32',
        'sd_brake_warning1': 'boolean',
        'sd_brake_warning2': 'boolean',
        'sd_brake_warning3': 'boolean',
        'sd_steer_warning1': 'boolean',
        'sd_steer_warning2': 'boolean',
        'sd_steer_warning3': 'boolean',
        'est1_oos_front_brk': 'boolean',
        'est2_oos_rear_brk': 'boolean',
        'est3_low_eng_speed': 'boolean',
        'est4_sd_comms_loss': 'boolean',
        'est5_motec_comms_loss': 'boolean',
        'est6_sd_ebrake': 'boolean',
        'adlink_hb_lost': 'boolean',
        'rc_lost': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.sd_system_warning = kwargs.get('sd_system_warning', bool())
        self.sd_system_failure = kwargs.get('sd_system_failure', bool())
        self.motec_warning = kwargs.get('motec_warning', int())
        self.sd_brake_warning1 = kwargs.get('sd_brake_warning1', bool())
        self.sd_brake_warning2 = kwargs.get('sd_brake_warning2', bool())
        self.sd_brake_warning3 = kwargs.get('sd_brake_warning3', bool())
        self.sd_steer_warning1 = kwargs.get('sd_steer_warning1', bool())
        self.sd_steer_warning2 = kwargs.get('sd_steer_warning2', bool())
        self.sd_steer_warning3 = kwargs.get('sd_steer_warning3', bool())
        self.est1_oos_front_brk = kwargs.get('est1_oos_front_brk', bool())
        self.est2_oos_rear_brk = kwargs.get('est2_oos_rear_brk', bool())
        self.est3_low_eng_speed = kwargs.get('est3_low_eng_speed', bool())
        self.est4_sd_comms_loss = kwargs.get('est4_sd_comms_loss', bool())
        self.est5_motec_comms_loss = kwargs.get('est5_motec_comms_loss', bool())
        self.est6_sd_ebrake = kwargs.get('est6_sd_ebrake', bool())
        self.adlink_hb_lost = kwargs.get('adlink_hb_lost', bool())
        self.rc_lost = kwargs.get('rc_lost', bool())

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
        if self.sd_system_warning != other.sd_system_warning:
            return False
        if self.sd_system_failure != other.sd_system_failure:
            return False
        if self.motec_warning != other.motec_warning:
            return False
        if self.sd_brake_warning1 != other.sd_brake_warning1:
            return False
        if self.sd_brake_warning2 != other.sd_brake_warning2:
            return False
        if self.sd_brake_warning3 != other.sd_brake_warning3:
            return False
        if self.sd_steer_warning1 != other.sd_steer_warning1:
            return False
        if self.sd_steer_warning2 != other.sd_steer_warning2:
            return False
        if self.sd_steer_warning3 != other.sd_steer_warning3:
            return False
        if self.est1_oos_front_brk != other.est1_oos_front_brk:
            return False
        if self.est2_oos_rear_brk != other.est2_oos_rear_brk:
            return False
        if self.est3_low_eng_speed != other.est3_low_eng_speed:
            return False
        if self.est4_sd_comms_loss != other.est4_sd_comms_loss:
            return False
        if self.est5_motec_comms_loss != other.est5_motec_comms_loss:
            return False
        if self.est6_sd_ebrake != other.est6_sd_ebrake:
            return False
        if self.adlink_hb_lost != other.adlink_hb_lost:
            return False
        if self.rc_lost != other.rc_lost:
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
    def sd_system_warning(self):
        """Message field 'sd_system_warning'."""
        return self._sd_system_warning

    @sd_system_warning.setter
    def sd_system_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_system_warning' field must be of type 'bool'"
        self._sd_system_warning = value

    @property
    def sd_system_failure(self):
        """Message field 'sd_system_failure'."""
        return self._sd_system_failure

    @sd_system_failure.setter
    def sd_system_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_system_failure' field must be of type 'bool'"
        self._sd_system_failure = value

    @property
    def motec_warning(self):
        """Message field 'motec_warning'."""
        return self._motec_warning

    @motec_warning.setter
    def motec_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motec_warning' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motec_warning' field must be an integer in [-2147483648, 2147483647]"
        self._motec_warning = value

    @property
    def sd_brake_warning1(self):
        """Message field 'sd_brake_warning1'."""
        return self._sd_brake_warning1

    @sd_brake_warning1.setter
    def sd_brake_warning1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_brake_warning1' field must be of type 'bool'"
        self._sd_brake_warning1 = value

    @property
    def sd_brake_warning2(self):
        """Message field 'sd_brake_warning2'."""
        return self._sd_brake_warning2

    @sd_brake_warning2.setter
    def sd_brake_warning2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_brake_warning2' field must be of type 'bool'"
        self._sd_brake_warning2 = value

    @property
    def sd_brake_warning3(self):
        """Message field 'sd_brake_warning3'."""
        return self._sd_brake_warning3

    @sd_brake_warning3.setter
    def sd_brake_warning3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_brake_warning3' field must be of type 'bool'"
        self._sd_brake_warning3 = value

    @property
    def sd_steer_warning1(self):
        """Message field 'sd_steer_warning1'."""
        return self._sd_steer_warning1

    @sd_steer_warning1.setter
    def sd_steer_warning1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_steer_warning1' field must be of type 'bool'"
        self._sd_steer_warning1 = value

    @property
    def sd_steer_warning2(self):
        """Message field 'sd_steer_warning2'."""
        return self._sd_steer_warning2

    @sd_steer_warning2.setter
    def sd_steer_warning2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_steer_warning2' field must be of type 'bool'"
        self._sd_steer_warning2 = value

    @property
    def sd_steer_warning3(self):
        """Message field 'sd_steer_warning3'."""
        return self._sd_steer_warning3

    @sd_steer_warning3.setter
    def sd_steer_warning3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_steer_warning3' field must be of type 'bool'"
        self._sd_steer_warning3 = value

    @property
    def est1_oos_front_brk(self):
        """Message field 'est1_oos_front_brk'."""
        return self._est1_oos_front_brk

    @est1_oos_front_brk.setter
    def est1_oos_front_brk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est1_oos_front_brk' field must be of type 'bool'"
        self._est1_oos_front_brk = value

    @property
    def est2_oos_rear_brk(self):
        """Message field 'est2_oos_rear_brk'."""
        return self._est2_oos_rear_brk

    @est2_oos_rear_brk.setter
    def est2_oos_rear_brk(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est2_oos_rear_brk' field must be of type 'bool'"
        self._est2_oos_rear_brk = value

    @property
    def est3_low_eng_speed(self):
        """Message field 'est3_low_eng_speed'."""
        return self._est3_low_eng_speed

    @est3_low_eng_speed.setter
    def est3_low_eng_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est3_low_eng_speed' field must be of type 'bool'"
        self._est3_low_eng_speed = value

    @property
    def est4_sd_comms_loss(self):
        """Message field 'est4_sd_comms_loss'."""
        return self._est4_sd_comms_loss

    @est4_sd_comms_loss.setter
    def est4_sd_comms_loss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est4_sd_comms_loss' field must be of type 'bool'"
        self._est4_sd_comms_loss = value

    @property
    def est5_motec_comms_loss(self):
        """Message field 'est5_motec_comms_loss'."""
        return self._est5_motec_comms_loss

    @est5_motec_comms_loss.setter
    def est5_motec_comms_loss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est5_motec_comms_loss' field must be of type 'bool'"
        self._est5_motec_comms_loss = value

    @property
    def est6_sd_ebrake(self):
        """Message field 'est6_sd_ebrake'."""
        return self._est6_sd_ebrake

    @est6_sd_ebrake.setter
    def est6_sd_ebrake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'est6_sd_ebrake' field must be of type 'bool'"
        self._est6_sd_ebrake = value

    @property
    def adlink_hb_lost(self):
        """Message field 'adlink_hb_lost'."""
        return self._adlink_hb_lost

    @adlink_hb_lost.setter
    def adlink_hb_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'adlink_hb_lost' field must be of type 'bool'"
        self._adlink_hb_lost = value

    @property
    def rc_lost(self):
        """Message field 'rc_lost'."""
        return self._rc_lost

    @rc_lost.setter
    def rc_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_lost' field must be of type 'bool'"
        self._rc_lost = value
