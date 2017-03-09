#pragma once
#include <iostream>
#include "Shape.h"

class CCircleUnix : public CShape
{
public:
	CCircleUnix() {}
	virtual ~CCircleUnix() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on circle..." << std::endl;
	}

protected:
	virtual void _drawShapeV() override
	{
		std::cout << "Drawing pixels in Unix..." << std::endl;
	}
};