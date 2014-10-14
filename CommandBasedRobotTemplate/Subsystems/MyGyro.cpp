#include "MyGyro.h"
#include "../Robotmap.h"
#include <Gyro.h>

MyGyro::MyGyro() : Subsystem("MyGyro") {
	gyro = new Gyro(new AnalogChannel(2,1));
}
    
void MyGyro::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

float MyGyro::getAngle(){
	return gyro->GetAngle();
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
