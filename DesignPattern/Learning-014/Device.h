#pragma once
#include <iostream>

class CDevice
{
public:
	CDevice() {}
	virtual ~CDevice() {}

	virtual void openV() = 0;
};