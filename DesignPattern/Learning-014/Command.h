#pragma once
#include "TV.h"
#include "AirCondition.h"
#include "Speaker.h"

class CCommand
{
public:
	CCommand() {}
	virtual ~CCommand() {}

	virtual void executeV() = 0;
};

class CWelcomeHomeCommand : public CCommand
{
public:
	CWelcomeHomeCommand(CTV* vTV, CAirCondition* vAirCondition)
	{
		m_pTV = vTV;
		m_pAirCondition = vAirCondition;
	}
	virtual ~CWelcomeHomeCommand() {}

	virtual void executeV() override
	{
		m_pTV->openV();
		m_pAirCondition->openV();
	}

protected:
	CTV* m_pTV;
	CAirCondition* m_pAirCondition;
};

class CWelcomeHomeCommandWithSpeaker : public CWelcomeHomeCommand
{
public:
	CWelcomeHomeCommandWithSpeaker(CTV* vTV, CAirCondition* vAirCondition, 
		CSpeaker* vSpeaker) : CWelcomeHomeCommand(vTV, vAirCondition), m_pSpeaker(vSpeaker) {}
	virtual ~CWelcomeHomeCommandWithSpeaker() {}

	virtual void executeV() override
	{
		CWelcomeHomeCommand::executeV();
		m_pSpeaker->openV();
	}

protected:
	CSpeaker* m_pSpeaker;
};

class CWelcomeHomeCommandWithSpeaker1 : public CWelcomeHomeCommandWithSpeaker
{
public:
	CWelcomeHomeCommandWithSpeaker1(CTV* vTV, CAirCondition* vAirCondition, 
		CSpeaker* vSpeaker) : CWelcomeHomeCommandWithSpeaker(vTV, vAirCondition, vSpeaker) {}
	virtual ~CWelcomeHomeCommandWithSpeaker1() {}

	virtual void executeV() override
	{
		CWelcomeHomeCommandWithSpeaker::executeV();
		m_pTV->switch2Channel();
		m_pAirCondition->change2Mode();
	}
};