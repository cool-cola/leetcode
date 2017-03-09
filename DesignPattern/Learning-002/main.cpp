#include "Shape.h"

void drawAllShape(CShape** vShape, unsigned int vNumShape)
{
	for (unsigned int i=0; i<vNumShape; i++)
	{
		vShape[i]->drawV();
	}
}

int main()
{
	CShape *ppShape[3];

	ppShape[0] = new CCircle;
	ppShape[1] = new CTrangle;
	ppShape[2] = new CSquare;

	drawAllShape(ppShape, 3);

	return 0;
}