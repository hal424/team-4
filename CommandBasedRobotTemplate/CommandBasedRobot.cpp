#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/Drive.h"
#include "CommandBase.h"
#include "Commands/MoveServoArm.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *driveCommand;
	LiveWindow *lw;
	Command *MoveServoArmCommand;
	
	virtual void RobotInit() {
		CommandBase::init();
		lw = LiveWindow::GetInstance();
		driveCommand = new Drive();
		MoveServoArmCommand = new MoveServoArm();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		driveCommand->Start();
		MoveServoArmCommand->Start();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
		SmartDashboard::PutNumber("IRValue", CommandBase::irSensor->GetIRVoltage());
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

