#include "GyroCommand.h"

GyroCommand::GyroCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(gyro);
}

// Called just before this Command runs the first time
void GyroCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void GyroCommand::Execute() {
	
	SmartDashboard::PutNumber("Gyro Angle", gyro->getAngle(););
}

// Make this return true when this Command no longer needs to run execute()
bool GyroCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void GyroCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GyroCommand::Interrupted() {
}
