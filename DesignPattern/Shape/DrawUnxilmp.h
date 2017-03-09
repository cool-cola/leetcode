#pragma once
#include "Drawlmp.h"

class CDrawUnxilmp : public CDrawlmp
{
public:
	CDrawUnxilmp() {}
	virtual ~CDrawUnxilmp() {}

	virtual void drawV(const std::vector<std::pair<int, int>>& vPixelSet) override
	{
		std::cout << "Drawing pixels in Unix..." << std::endl;
	}
};