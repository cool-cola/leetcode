#pragma once
#include "ShapeWithComments.h"

class CShapeWithTextComments : public CShapeWithComments
{
public:
	CShapeWithTextComments() {}
	virtual ~CShapeWithTextComments() {}

	virtual void generatePixelsOnShapeV() override
	{
		CShapeWithComments::generatePixelsOnShapeV();
		__addTextComments();
	}

private:
	void __addTextComments()
	{
		std::cout << "Add some text comments..." << std::endl;
	}
};