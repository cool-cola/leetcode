#pragma once
#include "GameCharacter.h"

class CGameCharacter;

class CHealthCalcFunc
{
public:
	virtual int calc(const CGameCharacter& gc) const 
	{
		int retVal = 1;

		return retVal;
	}
};