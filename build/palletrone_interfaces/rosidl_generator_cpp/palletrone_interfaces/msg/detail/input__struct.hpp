// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from palletrone_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__palletrone_interfaces__msg__Input __attribute__((deprecated))
#else
# define DEPRECATED__palletrone_interfaces__msg__Input __declspec(deprecated)
#endif

namespace palletrone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Input_
{
  using Type = Input_<ContainerAllocator>;

  explicit Input_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 8>::iterator, double>(this->u.begin(), this->u.end(), 0.0);
    }
  }

  explicit Input_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : u(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 8>::iterator, double>(this->u.begin(), this->u.end(), 0.0);
    }
  }

  // field types and members
  using _u_type =
    std::array<double, 8>;
  _u_type u;

  // setters for named parameter idiom
  Type & set__u(
    const std::array<double, 8> & _arg)
  {
    this->u = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    palletrone_interfaces::msg::Input_<ContainerAllocator> *;
  using ConstRawPtr =
    const palletrone_interfaces::msg::Input_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Input_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Input_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__palletrone_interfaces__msg__Input
    std::shared_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__palletrone_interfaces__msg__Input
    std::shared_ptr<palletrone_interfaces::msg::Input_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Input_ & other) const
  {
    if (this->u != other.u) {
      return false;
    }
    return true;
  }
  bool operator!=(const Input_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Input_

// alias to use template instance with default allocator
using Input =
  palletrone_interfaces::msg::Input_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
