// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/MotorsOrder.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/motors_order__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/motors_order__struct.h"
#include "interfaces/msg/detail/motors_order__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotorsOrder__ros_msg_type = interfaces__msg__MotorsOrder;

static bool _MotorsOrder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsOrder__ros_msg_type * ros_message = static_cast<const _MotorsOrder__ros_msg_type *>(untyped_ros_message);
  // Field name: right_rear_pwm
  {
    cdr << ros_message->right_rear_pwm;
  }

  // Field name: left_rear_pwm
  {
    cdr << ros_message->left_rear_pwm;
  }

  // Field name: steering_pwm
  {
    cdr << ros_message->steering_pwm;
  }

  return true;
}

static bool _MotorsOrder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsOrder__ros_msg_type * ros_message = static_cast<_MotorsOrder__ros_msg_type *>(untyped_ros_message);
  // Field name: right_rear_pwm
  {
    cdr >> ros_message->right_rear_pwm;
  }

  // Field name: left_rear_pwm
  {
    cdr >> ros_message->left_rear_pwm;
  }

  // Field name: steering_pwm
  {
    cdr >> ros_message->steering_pwm;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__MotorsOrder(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsOrder__ros_msg_type * ros_message = static_cast<const _MotorsOrder__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name right_rear_pwm
  {
    size_t item_size = sizeof(ros_message->right_rear_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_rear_pwm
  {
    size_t item_size = sizeof(ros_message->left_rear_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_pwm
  {
    size_t item_size = sizeof(ros_message->steering_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsOrder__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__MotorsOrder(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__MotorsOrder(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: right_rear_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_rear_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorsOrder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__MotorsOrder(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorsOrder = {
  "interfaces::msg",
  "MotorsOrder",
  _MotorsOrder__cdr_serialize,
  _MotorsOrder__cdr_deserialize,
  _MotorsOrder__get_serialized_size,
  _MotorsOrder__max_serialized_size
};

static rosidl_message_type_support_t _MotorsOrder__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsOrder,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, MotorsOrder)() {
  return &_MotorsOrder__type_support;
}

#if defined(__cplusplus)
}
#endif