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

	void change2Mode()
	{
		std::cout << "The mode of air condition is changed.\n";
	}
};