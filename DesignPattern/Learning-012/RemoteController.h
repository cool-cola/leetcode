#pragma once
#include "Room.h"

class CRemoteController
{
public:
	CRemoteController() {}
	~CRemoteController() {}

	void onWelcomeHomeClicked(CRoom* vRoom)
	{
		vRoom->onEnterRoom();
	}
};