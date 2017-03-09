#pragma once
#include <iostream>
#include "Car.h"

class CAudi : public CCar
{
public:
	CAudi() {}
	virtual ~CAudi() {}

	virtual void driverV() override
	{
		std::cout << "Driving BMW..." << std::endl;
	}
};