#ifndef DRIVEXSECS_H
#define DRIVEXSECS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author prath_000
 */
class DriveXSecs: public CommandBase {
public:
	DriveXSecs(float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private :
	float time; //Number of seconds it'll drive forward
};

#endif
