#pragma once
#include <iostream>
#include "Shape.h"

class CRectangleWin : public CShape
{
public:
	CRectangleWin() {}
	virtual ~CRectangleWin() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on rectangle..." << std::endl;
	}

protected:
	virtual void _drawShapeV() override
	{
		std::cout << "Drawing pixels in Windows..." << std::endl;
	}
};