#pragma once
#include <iostream>

class CPublication
{
public:
	virtual void getContentV()=0;
};

class CBook : public CPublication
{
public:
	virtual void getContentV() override
	{
		std::cout << "This is a book..." << std::endl;
	}
};

class CNewpaper : public CPublication
{
public:
	virtual void getContentV() override
	{
		std::cout << "This is a newpaper..." << std::endl;
	}
};