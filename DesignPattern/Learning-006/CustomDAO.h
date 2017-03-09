#pragma once
#include "DBUtility.h"

class CCustomDAO
{
public:
	void setDBUtility(CDBUtility *vDBUtility) { m_pDBUtility = vDBUtility; }
	void doSomething()
	{
		m_pDBUtility->buildConnection();
	}

private:
	CDBUtility *m_pDBUtility;
};