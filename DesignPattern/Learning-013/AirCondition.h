#pragma once
#include "Device.h"

class CAirCondition : public CDevice
{
public:
	CAirCondition() {}
	virtual ~CAirCondition() {}

	virtual void openV() override
	{
		std::cout << "The AirCondition is turned on.\n" << std::endl;
	}
};