// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from palletrone_interfaces:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__palletrone_interfaces__msg__Wrench __attribute__((deprecated))
#else
# define DEPRECATED__palletrone_interfaces__msg__Wrench __declspec(deprecated)
#endif

namespace palletrone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wrench_
{
  using Type = Wrench_<ContainerAllocator>;

  explicit Wrench_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->moment.begin(), this->moment.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->force.begin(), this->force.end(), 0.0f);
    }
  }

  explicit Wrench_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : moment(_alloc),
    force(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->moment.begin(), this->moment.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->force.begin(), this->force.end(), 0.0f);
    }
  }

  // field types and members
  using _moment_type =
    std::array<float, 3>;
  _moment_type moment;
  using _force_type =
    std::array<float, 3>;
  _force_type force;

  // setters for named parameter idiom
  Type & set__moment(
    const std::array<float, 3> & _arg)
  {
    this->moment = _arg;
    return *this;
  }
  Type & set__force(
    const std::array<float, 3> & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    palletrone_interfaces::msg::Wrench_<ContainerAllocator> *;
  using ConstRawPtr =
    const palletrone_interfaces::msg::Wrench_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Wrench_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::Wrench_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__palletrone_interfaces__msg__Wrench
    std::shared_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__palletrone_interfaces__msg__Wrench
    std::shared_ptr<palletrone_interfaces::msg::Wrench_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wrench_ & other) const
  {
    if (this->moment != other.moment) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wrench_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wrench_

// alias to use template instance with default allocator
using Wrench =
  palletrone_interfaces::msg::Wrench_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__WRENCH__STRUCT_HPP_
