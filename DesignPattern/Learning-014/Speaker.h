#pragma once
#include "Device.h"

class CSpeaker : public CDevice
{
public:
	CSpeaker() {}
	virtual ~CSpeaker() {}

	virtual void openV() override
	{
		std::cout << "The speaker is turned on.\n";
	}
};