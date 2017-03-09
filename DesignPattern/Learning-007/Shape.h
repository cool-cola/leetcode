#pragma once
#include <iostream>
#include <vector>

class CShape
{
public:
	CShape() {}
	virtual ~CShape() {}

	void drawShape()
	{
		generatePixelsOnShapeV();
		std::cout << "Drawing pixels on window..." << std::endl;
	}

	virtual void generatePixelsOnShapeV() = 0;

private:
	std::vector<std::pair<int, int>> m_PixelSet;
};