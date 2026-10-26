#include "kinematics.hpp"
#include <iostream>

int main() {
	AckermannModel2D trajectory(2.5);
	Pose2D pose = {0.0,0.0,0.0};
	double dt = 0.1;
	int number_of_steps = 10;
	double total_time = dt*number_of_steps;
	
	std::cout << "Starting simulation \n";
	
	for(int i=1; i <= number_of_steps; i++) {
		pose = trajectory.update(pose, 1.0, 0.2, dt);
		std::cout << "Step " << i << ":"
			  << "	X: " << pose.x
			  << "	Y: " << pose.y
			  << "	Theta:" << pose.theta << "\n";
	}
	
	std::cout << "\n Final Result of the Simulation \n"
		  << "Total Time: " << total_time << " seconds\n"
		  << "Final X: " << pose.x << "\n"
		  << "Final Y: " << pose.y << "\n"
		  << "Final Theta: " << pose.theta << "\n";
		  
	
	return 0;
}


