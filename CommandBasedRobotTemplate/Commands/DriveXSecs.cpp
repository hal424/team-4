#include "DriveXSecs.h"

DriveXSecs::DriveXSecs(float t) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(tankDrive);
	time = t;
}

// Called just before this Command runs the first time
void DriveXSecs::Initialize() {
	SetTimeout(time);
}

// Called repeatedly when this Command is scheduled to run
void DriveXSecs::Execute() {
	tankDrive->tankDrive(-0.3,-0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveXSecs::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void DriveXSecs::End() {
	tankDrive->tankDrive(0,0);
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveXSecs::Interrupted() {
}
