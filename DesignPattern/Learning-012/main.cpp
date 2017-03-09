#include "RemoteController.h"

int main()
{
	CRoom* pRoom = new CRoom;
	CRemoteController RemoteController;

	RemoteController.onWelcomeHomeClicked(pRoom);

	return 0;
}