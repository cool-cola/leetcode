#pragma once
#include "Command.h"

class CRemoteController
{
public:
	CRemoteController() {}
	~CRemoteController() {}

	void onWelcomeHomeClicked()
	{
		m_pCommand->executeV();
	}

	void setWelcomeHomeCommand(CCommand* vCommand)
	{
		m_pCommand = vCommand;
	}

private:
	CCommand* m_pCommand;
};