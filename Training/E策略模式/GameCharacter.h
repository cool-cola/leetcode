#pragma once
#include "HealthCalcFunc.h"

CHealthCalcFunc defaultHealthCalc;

class CGameCharacter
{
public:
	CGameCharacter(CHealthCalcFunc* pHcf = &defaultHealthCalc) : m_pHealthCalc(pHcf) {} 

	int healthValue() const
	{
		return m_pHealthCalc->calc(*this);
	}

private:
	CHealthCalcFunc* m_pHealthCalc;
};