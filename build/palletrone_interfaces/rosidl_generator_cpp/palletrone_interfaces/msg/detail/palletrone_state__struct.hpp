// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from palletrone_interfaces:msg/PalletroneState.idl
// generated code does not contain a copyright notice

#ifndef PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_HPP_
#define PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__palletrone_interfaces__msg__PalletroneState __attribute__((deprecated))
#else
# define DEPRECATED__palletrone_interfaces__msg__PalletroneState __declspec(deprecated)
#endif

namespace palletrone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PalletroneState_
{
  using Type = PalletroneState_<ContainerAllocator>;

  explicit PalletroneState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel.begin(), this->vel.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->acc.begin(), this->acc.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->rpy.begin(), this->rpy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->w_rpy.begin(), this->w_rpy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->a_rpy.begin(), this->a_rpy.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->servo.begin(), this->servo.end(), 0.0);
    }
  }

  explicit PalletroneState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc),
    vel(_alloc),
    acc(_alloc),
    rpy(_alloc),
    w_rpy(_alloc),
    a_rpy(_alloc),
    servo(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel.begin(), this->vel.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->acc.begin(), this->acc.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->rpy.begin(), this->rpy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->w_rpy.begin(), this->w_rpy.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->a_rpy.begin(), this->a_rpy.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->servo.begin(), this->servo.end(), 0.0);
    }
  }

  // field types and members
  using _pos_type =
    std::array<double, 3>;
  _pos_type pos;
  using _vel_type =
    std::array<double, 3>;
  _vel_type vel;
  using _acc_type =
    std::array<double, 3>;
  _acc_type acc;
  using _rpy_type =
    std::array<double, 3>;
  _rpy_type rpy;
  using _w_rpy_type =
    std::array<double, 3>;
  _w_rpy_type w_rpy;
  using _a_rpy_type =
    std::array<double, 3>;
  _a_rpy_type a_rpy;
  using _servo_type =
    std::array<double, 4>;
  _servo_type servo;

  // setters for named parameter idiom
  Type & set__pos(
    const std::array<double, 3> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const std::array<double, 3> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__acc(
    const std::array<double, 3> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::array<double, 3> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__w_rpy(
    const std::array<double, 3> & _arg)
  {
    this->w_rpy = _arg;
    return *this;
  }
  Type & set__a_rpy(
    const std::array<double, 3> & _arg)
  {
    this->a_rpy = _arg;
    return *this;
  }
  Type & set__servo(
    const std::array<double, 4> & _arg)
  {
    this->servo = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> *;
  using ConstRawPtr =
    const palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__palletrone_interfaces__msg__PalletroneState
    std::shared_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__palletrone_interfaces__msg__PalletroneState
    std::shared_ptr<palletrone_interfaces::msg::PalletroneState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PalletroneState_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->w_rpy != other.w_rpy) {
      return false;
    }
    if (this->a_rpy != other.a_rpy) {
      return false;
    }
    if (this->servo != other.servo) {
      return false;
    }
    return true;
  }
  bool operator!=(const PalletroneState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PalletroneState_

// alias to use template instance with default allocator
using PalletroneState =
  palletrone_interfaces::msg::PalletroneState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace palletrone_interfaces

#endif  // PALLETRONE_INTERFACES__MSG__DETAIL__PALLETRONE_STATE__STRUCT_HPP_
