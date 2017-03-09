#pragma once
#include "Drawlmp.h"

class CDrawWinlmp : public CDrawlmp
{
public:
	CDrawWinlmp() {}
	virtual ~CDrawWinlmp() {}

	virtual void drawV(const std::vector<std::pair<int, int>>& vPixelSet) override
	{
		std::cout << "Drawing pixels in Windows..." << std::endl;
	}
};