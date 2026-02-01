// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from palletrone_interfaces:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__palletrone_interfaces__msg__Cmd __attribute__((deprecated))
#else
# define DEPRECATED__palletrone_interfaces__msg__Cmd __declspec(deprecated)
#endif

namespace palletrone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cmd_
{
  using Type = Cmd_<ContainerAllocator>;

  explicit Cmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pos_cmd.begin(), this->pos_cmd.end(), 0.0f);
    }
  }

  explicit Cmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pos_cmd.begin(), this->pos_cmd.end(), 0.0f);
    }
  }

  // field types and members
  using _pos_cmd_type =
    std::array<float, 3>;
  _pos_cmd_type pos_cmd;

  // setters for named parameter idiom
  Type & set__pos_cmd(
    const std::array<float, 3> & _arg)
  {
    this->pos_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    palletrone_interfaces::msg::Cmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const palletrone_interfaces::msg::Cmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Cmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Cmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__palletrone_interfaces__msg__Cmd
    std::shared_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__palletrone_interfaces__msg__Cmd
    std::shared_ptr<palletrone_interfaces::msg::Cmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cmd_ & other) const
  {
    if (this->pos_cmd != other.pos_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cmd_

// alias to use template instance with default allocator
using Cmd =
  palletrone_interfaces::msg::Cmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__CMD__STRUCT_HPP_
