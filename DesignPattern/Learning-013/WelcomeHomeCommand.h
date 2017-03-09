#pragma once
#include "Command.h"
#include "TV.h"
#include "AirCondition.h"

class CWelcomeHomeCommand : public CCommand
{
public:
	CWelcomeHomeCommand(CTV* vTV, CAirCondition* vAirCondition) : 
		m_pTV(vTV), m_pAirCondition(vAirCondition) {}
	virtual ~CWelcomeHomeCommand() {}

	virtual void executeV() override
	{
		m_pTV->openV();
		m_pAirCondition->openV();
	}

private:
	CTV* m_pTV;
	CAirCondition *m_pAirCondition;
};