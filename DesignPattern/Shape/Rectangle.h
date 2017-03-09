#pragma once
#include <iostream>
#include "Shape.h"

class CRectangle : public CShape
{
public:
	CRectangle() {}
	virtual ~CRectangle() {}

	virtual void generatePixelsOnShapeV() override
	{
		std::cout << "Generating pixels on rectangle..." << std::endl;
	}
};