// Generated by gencpp from file delta_coords/SendCoordsActionGoal.msg
// DO NOT EDIT!


#ifndef DELTA_COORDS_MESSAGE_SENDCOORDSACTIONGOAL_H
#define DELTA_COORDS_MESSAGE_SENDCOORDSACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <delta_coords/SendCoordsGoal.h>

namespace delta_coords
{
template <class ContainerAllocator>
struct SendCoordsActionGoal_
{
  typedef SendCoordsActionGoal_<ContainerAllocator> Type;

  SendCoordsActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  SendCoordsActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::delta_coords::SendCoordsGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SendCoordsActionGoal_

typedef ::delta_coords::SendCoordsActionGoal_<std::allocator<void> > SendCoordsActionGoal;

typedef boost::shared_ptr< ::delta_coords::SendCoordsActionGoal > SendCoordsActionGoalPtr;
typedef boost::shared_ptr< ::delta_coords::SendCoordsActionGoal const> SendCoordsActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator1> & lhs, const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator1> & lhs, const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace delta_coords

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "356eebcc1c6e0c81602c1d617a12a4a5";
  }

  static const char* value(const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x356eebcc1c6e0c81ULL;
  static const uint64_t static_value2 = 0x602c1d617a12a4a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delta_coords/SendCoordsActionGoal";
  }

  static const char* value(const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"SendCoordsGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: delta_coords/SendCoordsGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"geometry_msgs/Point[] frontal_coord  \n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendCoordsActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delta_coords::SendCoordsActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delta_coords::SendCoordsActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::delta_coords::SendCoordsGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELTA_COORDS_MESSAGE_SENDCOORDSACTIONGOAL_H
