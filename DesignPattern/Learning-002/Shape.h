#pragma once
#include <iostream>

class CShape
{
public:
	virtual void drawV()=0;
};

class CCircle : public CShape
{
public:
	virtual void drawV() override
	{
		std::cout << "Drawing Circle..." << std::endl;
	}
};

class CSquare : public CShape
{
public:
	virtual void drawV() override
	{
		std::cout << "Drawing Square..." << std::endl;
	}
};

class CTrangle : public CShape
{
public:
	virtual void drawV() override
	{
		std::cout << "Drawing Trangle..." << std::endl;
	}
};