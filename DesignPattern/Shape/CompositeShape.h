#pragma once
#include <vector>
#include "Shape.h"

class CCompositeShape : public CShape
{
public:
	CCompositeShape() {}
	virtual ~CCompositeShape() {}

	void addChildShape(CShape *vShpae)
	{
		m_ChildShapeSet.push_back(vShpae);
	}

protected:
	virtual void generatePixelsOnShapeV() override
	{
		for (unsigned int i=0; i<m_ChildShapeSet.size(); i++)
		{
			m_ChildShapeSet[i]->generatePixelsOnShapeV();
		}
	}

private:
	std::vector<CShape*> m_ChildShapeSet;
};