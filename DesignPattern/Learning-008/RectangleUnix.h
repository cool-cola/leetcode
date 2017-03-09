#pragma once
#include <iostream>
#include "Shape.h"

class CRectangleUnix : public CShape
{
public:
	CRectangleUnix() {}
	virtual ~CRectangleUnix() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on rectangle..." << std::endl;
	}

protected:
	virtual void _drawShapeV() override
	{
		std::cout << "Drawing pixels in Unix..." << std::endl;
	}
};