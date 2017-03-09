#include <iostream>
#include "Shape.h"

void drawSquare(Square *vSquare)
{
	std::cout << "Drawing square..." << std::endl;
}

void drawCircle(Circle *vCircle)
{
	std::cout << "Drawing circle..." << std::endl;
}

void drawAllShapes(Shape** vShape, unsigned int vNumShape)
{
	for (unsigned int i=0; i<vNumShape; i++)
	{
		Shape *pShape = vShape[i];

		switch (pShape->ShapeType)
		{
		case SQUARE:
			drawSquare((Square*)pShape);
			break;
		case CIRCLE:
			drawCircle((Circle*)pShape);
			break;
		}
	}
}

int main()
{
	Shape **ppShape = new Shape *[3];

	ppShape[0] = (Shape*) new Square;
	ppShape[1] = (Shape*) new Circle;
	ppShape[2] = (Shape*) new Circle;

	drawAllShapes(ppShape, 3);

	return 0;
}