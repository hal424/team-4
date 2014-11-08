#include "WPILib.h"
#include "Robot.hpp"
Robot::Robot()
{
	drive = new RobotDrive(new Victor(1), new Victor(2));
	j1 = new Joystick(1);
}

Robot::~Robot(){
	delete drive;
	delete j1;
}

void Robot::TeleopPeriodic(){
	drive->ArcadeDrive(j1->GetY(), -j1->GetZ());
}
