#pragma once
#include "Book.h"

class CMother
{
public:
	void read(CBook *vBook)
	{
		std::cout << "Mother is reading: ";
		vBook->getContent();
	}
};