#pragma once
#include <iostream>
//#include "Car.h"

class CCar;

class CBMW : public CCar
{
public:
	CBMW() {}
	virtual ~CBMW() {}

	virtual void driverV() override
	{
		std::cout << "Driving BMW..." << std::endl;
	}
};