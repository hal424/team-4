#include "Drive.h"
#include "math.h"

Drive::Drive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(tankDrive);
}

// Called just before this Command runs the first time
void Drive::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
	float leftY;
	leftY = oi->getLeftY();
	float rightY;
	rightY = oi->getRightY();
	float activate_val = 0.1;
	float a = 0.6;
	float b = 0.3;
	
	leftY = oi->getLeftY();
		rightY = oi->getRightY();
		
		// leftYCode
		double x = leftY;
		if(x >= activate_val)
		{
			leftY = b + (1-b)*(a * (pow(x,3)) + (1-a)*x);
		}
		
		else if(x <= activate_val)
		{
			leftY = -b + (1-b)*(a*(pow(x,3)) + (1-a)*x);
		}
		
		else {
			leftY = 0;
		}
		
		// rightYCode
		x = rightY;
		if(x >= activate_val)
			{
				rightY = b + (1-b)*(a * (pow(x,3)) + (1-a)*x);
			}
			
			else if(x <= activate_val)
			{
				rightY = -b + (1-b)*(a*(pow(x,3)) + (1-a)*x);
			}
			
			else {
				rightY = 0;
			}
		
		// execution
		tankDrive->tankDrive(leftY, rightY);

	SmartDashboard::PutNumber("Left Joystick Value", leftY);
	SmartDashboard::PutNumber("Right Joystick Value", rightY);
}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Drive::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {
}
