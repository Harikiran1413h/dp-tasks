#include "kinematics.hpp"
#include <cmath>

AckermannModel2D::AckermannModel2D(double wheelbase) : L(wheelbase) {}
Pose2D AckermannModel2D::update(Pose2D current_pos, double velocity, double steering_angle, double dt) {
	Pose2D next_pos = current_pos;
	next_pos.x += velocity*std::cos(next_pos.theta)*dt;
	next_pos.y += velocity*std::sin(next_pos.theta)*dt;
	next_pos.theta += (velocity / L)*std::tan(steering_angle)*dt;
	return next_pos;
}

	
