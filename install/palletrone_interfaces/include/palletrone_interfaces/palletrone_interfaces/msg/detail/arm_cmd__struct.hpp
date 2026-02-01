// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from palletrone_interfaces:msg/ArmCmd.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__palletrone_interfaces__msg__ArmCmd __attribute__((deprecated))
#else
# define DEPRECATED__palletrone_interfaces__msg__ArmCmd __declspec(deprecated)
#endif

namespace palletrone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmCmd_
{
  using Type = ArmCmd_<ContainerAllocator>;

  explicit ArmCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint5_l = 0.0;
      this->joint5_r = 0.0;
      this->thruster_left = 0.0;
      this->thruster_right = 0.0;
      this->enable = false;
    }
  }

  explicit ArmCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0.0;
      this->joint2 = 0.0;
      this->joint3 = 0.0;
      this->joint5_l = 0.0;
      this->joint5_r = 0.0;
      this->thruster_left = 0.0;
      this->thruster_right = 0.0;
      this->enable = false;
    }
  }

  // field types and members
  using _joint1_type =
    double;
  _joint1_type joint1;
  using _joint2_type =
    double;
  _joint2_type joint2;
  using _joint3_type =
    double;
  _joint3_type joint3;
  using _joint5_l_type =
    double;
  _joint5_l_type joint5_l;
  using _joint5_r_type =
    double;
  _joint5_r_type joint5_r;
  using _thruster_left_type =
    double;
  _thruster_left_type thruster_left;
  using _thruster_right_type =
    double;
  _thruster_right_type thruster_right;
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__joint1(
    const double & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const double & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const double & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint5_l(
    const double & _arg)
  {
    this->joint5_l = _arg;
    return *this;
  }
  Type & set__joint5_r(
    const double & _arg)
  {
    this->joint5_r = _arg;
    return *this;
  }
  Type & set__thruster_left(
    const double & _arg)
  {
    this->thruster_left = _arg;
    return *this;
  }
  Type & set__thruster_right(
    const double & _arg)
  {
    this->thruster_right = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__palletrone_interfaces__msg__ArmCmd
    std::shared_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__palletrone_interfaces__msg__ArmCmd
    std::shared_ptr<palletrone_interfaces::msg::ArmCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCmd_ & other) const
  {
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint5_l != other.joint5_l) {
      return false;
    }
    if (this->joint5_r != other.joint5_r) {
      return false;
    }
    if (this->thruster_left != other.thruster_left) {
      return false;
    }
    if (this->thruster_right != other.thruster_right) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCmd_

// alias to use template instance with default allocator
using ArmCmd =
  palletrone_interfaces::msg::ArmCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__ARM_CMD__STRUCT_HPP_
