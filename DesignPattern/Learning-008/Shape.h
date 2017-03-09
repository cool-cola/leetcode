#pragma once
#include <vector>

class CShape
{
public:
	CShape() {}
	virtual ~CShape() {}

	void drawShape()
	{
		generatePixelsOnShapeV();
		_drawShapeV();
	}

	virtual void generatePixelsOnShapeV() = 0;

protected:
	virtual void _drawShapeV() = 0;

private:
	std::vector<std::pair<int, int>> m_PixelSet;
};