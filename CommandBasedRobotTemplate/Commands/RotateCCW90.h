#ifndef ROTATECCW90_H
#define ROTATECCW90_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Marga
 */
class RotateCCW90: public CommandBase {
public:
	RotateCCW90();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
