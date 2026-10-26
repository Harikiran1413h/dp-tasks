#pragma once

struct Pose2D {
	double x;
	double y;
	double theta;
};

class AckermannModel2D {
	private:
		double L;
	
	public:
		AckermannModel2D(double wheelbase);
		Pose2D update(Pose2D current_pos, double velocity, double steering_angle, double dt);
};



