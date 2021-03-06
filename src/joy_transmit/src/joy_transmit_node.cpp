/*
 * Author: Derek Workman
 * Email: derek.workman@aggiemail.usu.edu
 *
 * This ROS node Subscribes to the /joy messages which correspond
 * to navigation and manipulation controls for the ARES rover.
 * These messages are condenced for transmission, and then 
 * transmitted over the PPM interface of the RFD 900x.
 * The option is also available to send the condensed message as a
 * ROS toppic.
 *
 * March 3, 2019
 */

#include "ros/ros.h"
#include "joy/joy.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "joy_transmit"); //initialize the ROS node
    ros::NodeHandle n; //node handle needed for message handling

    ros::Publisher pub = n.advertise<std_msgs::Uint8MultiArray>("motor_pos", 1);
    ros::Rate loop_rate(10); //advertise at 10 Hz

    while(ros::ok()) {
        std_msgs::Uint8MultiArray motor_pos; //create the message object
    }
}
