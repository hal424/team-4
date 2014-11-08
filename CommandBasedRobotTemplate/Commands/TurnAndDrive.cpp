#include "TurnAndDrive.h"
#include "RotateCW90.h"
#include "Drive2Secs.h"

TurnAndDrive::TurnAndDrive() {
		AddSequential(new RotateCW90());
        AddSequential(new Drive2Secs());

}
