#ifndef GYROCOMMAND_H
#define GYROCOMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author kadiyala
 */
class GyroCommand: public CommandBase {
public:
	GyroCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
