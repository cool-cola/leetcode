#include "RemoteController.h"

int main()
{
	CRemoteController* pRemoterController = new CRemoteController;

	CCommand* pCommand = new CWelcomeHomeCommandWithSpeaker1(new CTV, new CAirCondition, new CSpeaker);
	pRemoterController->setWelcomeHomeCommand(pCommand);

	pRemoterController->onWelcomeHomeClicked();

	return 0;
}