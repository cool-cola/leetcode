#pragma once
#include "Command.h"

class CRemoteController
{
public:
	CRemoteController() {}
	~CRemoteController() {}

	void onWelcomeHomeClicked()
	{
		m_pWelcomeHomeCommand->executeV();
	}

	void setWelcomeHomeCommand(CCommand* vCommand)
	{
		m_pWelcomeHomeCommand = vCommand;
	}

private:
	CCommand* m_pWelcomeHomeCommand;
};