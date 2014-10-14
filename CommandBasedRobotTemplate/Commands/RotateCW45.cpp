#include "RotateCW45.h"

RotateCW45::RotateCW45() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(tankDrive);
	Requires(gyro);
}

// Called just before this Command runs the first time
void RotateCW45::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RotateCW45::Execute() {
	tankDrive->tankDrive(0.3,-0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool RotateCW45::IsFinished() {
	return gyro->getAngle() > 45;
}

// Called once after isFinished returns true
void RotateCW45::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateCW45::Interrupted() {
}
