#ifndef SQUAREUP_H
#define SQUAREUP_H

#include "../CommandBase.h"

class SquareUp: public CommandBase {
public:
	SquareUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
