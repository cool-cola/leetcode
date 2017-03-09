#pragma once
#include <iostream>
#include <vector>

class CDrawlmp
{
public:
	CDrawlmp() {}
	virtual ~CDrawlmp() {}

	virtual void drawV(const std::vector<std::pair<int, int>>& vPixelSet) = 0;
};