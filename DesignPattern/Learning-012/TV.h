#pragma once
#include "Device.h"

class CTV : public CDevice
{
public:
	CTV() {}
	virtual ~CTV() {}

	virtual void openV() override
	{
		std::cout << "The TV is turned on.\n" << std::endl;
	}
};