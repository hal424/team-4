#include "Uturn.h"
#include "RotateCCW90.h"
#include "DriveXSecs.h"
#include "Preferences.h"

Uturn::Uturn() {
	Preferences *pref = Preferences::GetInstance();
	float time = pref->GetFloat("time",0.5);
	float time2 = pref->GetFloat("time2",1.0);
		AddSequential(new DriveXSecs(time));
        AddSequential(new RotateCCW90());
        AddSequential(new DriveXSecs(time2));
        AddSequential(new RotateCCW90());
        AddSequential(new DriveXSecs(time));

}
