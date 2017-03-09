#pragma once
#include <string>
#include "Shape.h"

class CShapeWithComments : public CShape
{
public:
	CShapeWithComments() {}
	virtual ~CShapeWithComments() {}

	void setCommentedShape(CShape *vShape) { m_pCommentedShape = vShape; }

	const std::string& getCommentedShapeName();

protected:
	virtual void generatePixelsOnShapeV() override
	{
		m_pCommentedShape->generatePixelsOnShapeV();
	}

private:
	CShape *m_pCommentedShape;
};