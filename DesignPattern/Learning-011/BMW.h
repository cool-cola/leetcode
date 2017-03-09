#pragma once
#include "Car.h"

class CBMW : public CCar
{
public:
	CBMW();
	virtual ~CBMW();

	virtual void driverV() override;
};