#include "SquareUp.h"

SquareUp::SquareUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(tankDrive);
}

// Called just before this Command runs the first time
void SquareUp::Initialize() {
	//SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void SquareUp::Execute() {
	while (tankDrive->getIRVoltage() <= 0.7 && tankDrive->getRightIRVoltage() <= 0.7)
		tankDrive->tankDrive(0.5,0.5);
	while (tankDrive->getIRVoltage() < tankDrive->getRightIRVoltage())
		tankDrive->tankDrive(0.3,0);
	while (tankDrive->getIRVoltage() > tankDrive->getRightIRVoltage())
		tankDrive->tankDrive(0,0.3);
}

/*void SquareUp::Execute() {
	while (tankDrive->getRightIRVoltage() <= 0.7)
		tankDrive->tankDrive(0.5,0.5);
}*/

// Make this return true when this Command no longer needs to run execute()
bool SquareUp::IsFinished() {
	if (tankDrive->getIRVoltage() == tankDrive->getRightIRVoltage() && tankDrive->getIRVoltage() >= 0.7)
		return true;
	return IsTimedOut();
}

// Called once after isFinished returns true
void SquareUp::End() {
	tankDrive->tankDrive(0,0);
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SquareUp::Interrupted() {
}
