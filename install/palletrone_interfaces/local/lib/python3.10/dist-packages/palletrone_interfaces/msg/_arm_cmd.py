# generated from rosidl_generator_py/resource/_idl.py.em
# with input from palletrone_interfaces:msg/ArmCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmCmd(type):
    """Metaclass of message 'ArmCmd'."""

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
            module = import_type_support('palletrone_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'palletrone_interfaces.msg.ArmCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmCmd(metaclass=Metaclass_ArmCmd):
    """Message class 'ArmCmd'."""

    __slots__ = [
        '_joint1',
        '_joint2',
        '_joint3',
        '_joint5_l',
        '_joint5_r',
        '_thruster_left',
        '_thruster_right',
        '_enable',
    ]

    _fields_and_field_types = {
        'joint1': 'double',
        'joint2': 'double',
        'joint3': 'double',
        'joint5_l': 'double',
        'joint5_r': 'double',
        'thruster_left': 'double',
        'thruster_right': 'double',
        'enable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint1 = kwargs.get('joint1', float())
        self.joint2 = kwargs.get('joint2', float())
        self.joint3 = kwargs.get('joint3', float())
        self.joint5_l = kwargs.get('joint5_l', float())
        self.joint5_r = kwargs.get('joint5_r', float())
        self.thruster_left = kwargs.get('thruster_left', float())
        self.thruster_right = kwargs.get('thruster_right', float())
        self.enable = kwargs.get('enable', bool())

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
        if self.joint1 != other.joint1:
            return False
        if self.joint2 != other.joint2:
            return False
        if self.joint3 != other.joint3:
            return False
        if self.joint5_l != other.joint5_l:
            return False
        if self.joint5_r != other.joint5_r:
            return False
        if self.thruster_left != other.thruster_left:
            return False
        if self.thruster_right != other.thruster_right:
            return False
        if self.enable != other.enable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint1(self):
        """Message field 'joint1'."""
        return self._joint1

    @joint1.setter
    def joint1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint1 = value

    @builtins.property
    def joint2(self):
        """Message field 'joint2'."""
        return self._joint2

    @joint2.setter
    def joint2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint2 = value

    @builtins.property
    def joint3(self):
        """Message field 'joint3'."""
        return self._joint3

    @joint3.setter
    def joint3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint3 = value

    @builtins.property
    def joint5_l(self):
        """Message field 'joint5_l'."""
        return self._joint5_l

    @joint5_l.setter
    def joint5_l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint5_l' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint5_l' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint5_l = value

    @builtins.property
    def joint5_r(self):
        """Message field 'joint5_r'."""
        return self._joint5_r

    @joint5_r.setter
    def joint5_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint5_r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint5_r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint5_r = value

    @builtins.property
    def thruster_left(self):
        """Message field 'thruster_left'."""
        return self._thruster_left

    @thruster_left.setter
    def thruster_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thruster_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thruster_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thruster_left = value

    @builtins.property
    def thruster_right(self):
        """Message field 'thruster_right'."""
        return self._thruster_right

    @thruster_right.setter
    def thruster_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thruster_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thruster_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thruster_right = value

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value
