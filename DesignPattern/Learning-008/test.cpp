#include "Shape.h"
#include "CircleUnix.h"
#include "CircleWin.h"
#include "RectangleWin.h"
#include "RectangleUnix.h"

int main()
{
	CShape *Shape;

	CCircleUnix    CirUnix;
	CCircleWin     CirWin;
	CRectangleUnix RecUnix;
	CRectangleWin  RecWin;

	Shape = &CirUnix;
	Shape->drawShape();

	Shape = &CirWin;
	Shape->drawShape();

	Shape = &RecUnix;
	Shape->drawShape();

	Shape = &RecWin;
	Shape->drawShape();

	return 0;
}