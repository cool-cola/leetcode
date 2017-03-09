#pragma once
#include <iostream>
#include "Shape.h"

class CCircle : public CShape
{
public:
	CCircle() {}
	virtual ~CCircle() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on circle..." << std::endl;
	}
};