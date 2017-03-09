#pragma once
#include <iostream>
#include "Car.h"

class CBenz : public CCar
{
public:
	CBenz() {}
	virtual ~CBenz() {}

	virtual void driverV() override
	{
		std::cout << "Driving Benz..." << std::endl;
	} 
};