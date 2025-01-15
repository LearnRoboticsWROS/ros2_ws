// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interface/srv/detail/reset_counter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Request_reset_value
{
public:
  Init_ResetCounter_Request_reset_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::ResetCounter_Request reset_value(::custom_interface::srv::ResetCounter_Request::_reset_value_type arg)
  {
    msg_.reset_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::ResetCounter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::ResetCounter_Request>()
{
  return custom_interface::srv::builder::Init_ResetCounter_Request_reset_value();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Response_success
{
public:
  Init_ResetCounter_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::ResetCounter_Response success(::custom_interface::srv::ResetCounter_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::ResetCounter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::ResetCounter_Response>()
{
  return custom_interface::srv::builder::Init_ResetCounter_Response_success();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_
