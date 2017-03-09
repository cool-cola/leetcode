#pragma once
#include <vector>
#include "Drawlmp.h"

class CShape
{
public:
	CShape() {}
	virtual ~CShape() {}

	void setDrawlmp(CDrawlmp *vDrawlmp) { m_Drawlmp = vDrawlmp; }

	void drawShape()
	{
		generatePixelsOnShapeV();
		m_Drawlmp->drawV(m_PixelSet);
	}

	virtual void generatePixelsOnShapeV() = 0;

private:
	std::vector<std::pair<int, int>> m_PixelSet;

	CDrawlmp *m_Drawlmp;
};