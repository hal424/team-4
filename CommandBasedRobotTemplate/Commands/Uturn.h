#ifndef UTURN_H
#define UTURN_H

#include "Commands/CommandGroup.h"

/**
 *
 *
 * @author Marga
 */
class Uturn: public CommandGroup {
public:	
	Uturn();
private:
	float time;		//first and last part
	float time2;	//middle part
};

#endif
