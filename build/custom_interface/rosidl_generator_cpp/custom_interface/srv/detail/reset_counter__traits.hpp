// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__TRAITS_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interface/srv/detail/reset_counter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetCounter_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset_value
  {
    out << "reset_value: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetCounter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_value: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetCounter_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interface::srv::ResetCounter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interface::srv::ResetCounter_Request & msg)
{
  return custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interface::srv::ResetCounter_Request>()
{
  return "custom_interface::srv::ResetCounter_Request";
}

template<>
inline const char * name<custom_interface::srv::ResetCounter_Request>()
{
  return "custom_interface/srv/ResetCounter_Request";
}

template<>
struct has_fixed_size<custom_interface::srv::ResetCounter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface::srv::ResetCounter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface::srv::ResetCounter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetCounter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetCounter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetCounter_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interface::srv::ResetCounter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interface::srv::ResetCounter_Response & msg)
{
  return custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interface::srv::ResetCounter_Response>()
{
  return "custom_interface::srv::ResetCounter_Response";
}

template<>
inline const char * name<custom_interface::srv::ResetCounter_Response>()
{
  return "custom_interface/srv/ResetCounter_Response";
}

template<>
struct has_fixed_size<custom_interface::srv::ResetCounter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface::srv::ResetCounter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface::srv::ResetCounter_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::srv::ResetCounter>()
{
  return "custom_interface::srv::ResetCounter";
}

template<>
inline const char * name<custom_interface::srv::ResetCounter>()
{
  return "custom_interface/srv/ResetCounter";
}

template<>
struct has_fixed_size<custom_interface::srv::ResetCounter>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interface::srv::ResetCounter_Request>::value &&
    has_fixed_size<custom_interface::srv::ResetCounter_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interface::srv::ResetCounter>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interface::srv::ResetCounter_Request>::value &&
    has_bounded_size<custom_interface::srv::ResetCounter_Response>::value
  >
{
};

template<>
struct is_service<custom_interface::srv::ResetCounter>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interface::srv::ResetCounter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interface::srv::ResetCounter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__TRAITS_HPP_
