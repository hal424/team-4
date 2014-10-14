#ifndef ROTATECW45_H
#define ROTATECW45_H

#include "../CommandBase.h"

/**
 *
 *
 * @author kadiyala
 */
class RotateCW45: public CommandBase {
public:
	RotateCW45();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
