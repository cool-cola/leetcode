#pragma once
#include "ShapeWithComments.h"

class CShapeWithGraphicsComments : public CShapeWithComments
{
public:
	CShapeWithGraphicsComments() {}
	virtual ~CShapeWithGraphicsComments() {}

	virtual void generatePixelsOnShapeV() override
	{
		CShapeWithComments::generatePixelsOnShapeV();
		__addGraphicsComments();
	}

private:
	void __addGraphicsComments()
	{
		std::cout << "Add some graphics comments..." << std::endl;
	}
};