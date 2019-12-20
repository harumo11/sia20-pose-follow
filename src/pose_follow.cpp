#include <ros/ros.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>

int main(int argc, char* argv[])
{
	ros::init(argc, argv, "pose_follow_node");
	ros::NodeHandle node_handler;

	// コントローラのスイッチが押されたら{local_controller_frame},{local_hand_frame}を作成する．
	// {local_controller_frame} : viveコントローラの初期位置の座標
	// {local_hand_frame} : 


	return 0;
}
