#include "CommandBase.h"
#include "Subsystems/TankDrive.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
TankDrive* CommandBase::tankDrive = NULL;
IRSensor* CommandBase::irSensor = NULL;
OI* CommandBase::oi = NULL;
ServoArm* CommandBase::servoArm = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	tankDrive = new TankDrive();
	irSensor = new IRSensor();
	servoArm = new ServoArm();
	oi = new OI();
}
