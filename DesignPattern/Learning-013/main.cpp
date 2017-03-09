#include "RemoteController.h"
#include "TV.h"
#include "AirCondition.h"
#include "WelcomeHomeCommand.h"

int main()
{
	CTV* pTV                     = new CTV;
	CAirCondition* pAirCondition = new CAirCondition;

    CRemoteController RemoteController;
	RemoteController.setWelcomeHomeCommand(new CWelcomeHomeCommand(pTV, pAirCondition));
	RemoteController.onWelcomeHomeClicked();

	return 0;
}