#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
	CShape *Shape;
	
	CRectangle Rectangle;
	CCircle Circle;

	Shape = &Rectangle;
	Shape->drawShape();
	Shape = &Circle;
	Shape->drawShape();

	return 0;
}