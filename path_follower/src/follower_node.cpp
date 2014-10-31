#include <ros/ros.h>
#include <path_follower/pathfollower.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "path_follower_node");
    ros::NodeHandle nh;

    PathFollower pf(nh);

    pf.spin();

    return 0;
}


