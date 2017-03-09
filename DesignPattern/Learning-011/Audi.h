#pragma once
#include "Car.h"

class CAudi : public CCar
{
public:
	CAudi();
	virtual ~CAudi();

	virtual void driverV() override;
};