#pragma once
#include <iostream>
#include "Shape.h"

class CCircleWin : public CShape
{
public:
	CCircleWin() {}
	virtual ~CCircleWin() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on circle..." << std::endl;
	}

protected:
	virtual void _drawShapeV() override
	{
		std::cout << "Drawing pixels in Windows..." << std::endl;
	}
};