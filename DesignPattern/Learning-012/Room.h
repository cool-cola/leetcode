#pragma once
#include "TV.h"
#include "AirCondition.h"

class CRoom
{
public:
	CRoom()
	{
		m_pTV           = new CTV;
		m_pAirCondition = new CAirCondition;
	}

	void onEnterRoom()
	{
		m_pTV->openV();
		m_pAirCondition->openV();
	}

private:
	CTV* m_pTV;
	CAirCondition* m_pAirCondition;
};