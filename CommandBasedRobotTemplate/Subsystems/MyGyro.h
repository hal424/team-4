#ifndef MYGYRO_H
#define MYGYRO_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include <Gyro.h>

/**
 *
 *
 * @author kadiyala
 */
class MyGyro: public Subsystem {
private:
	Gyro* gyro;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	MyGyro();
	void InitDefaultCommand();
	float getAngle();
};

#endif
