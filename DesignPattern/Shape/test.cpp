#include "Shape.h"
#include "Drawlmp.h"
#include "Rectangle.h"
#include "Circle.h"
#include "DrawUnxilmp.h"
#include "DrawWinlmp.h"
#include "ShapeWithComments.h"
#include "ShapeWithGraphicsComments.h"
#include "ShapeWithTextComments.h"
#include "CompositeShape.h"

int main()
{
	CRectangle Rect;
	CCircle Circle;

	Rect.setDrawlmp(new CDrawWinlmp);
	Rect.drawShape();

	Circle.setDrawlmp(new CDrawUnxilmp);
	Circle.drawShape();

	CShapeWithGraphicsComments ShapeWithGraphicsComments;
	CShapeWithTextComments ShapeWithTextComments;

	ShapeWithGraphicsComments.setCommentedShape(&Rect);
	ShapeWithGraphicsComments.setDrawlmp(new CDrawUnxilmp);
	ShapeWithGraphicsComments.drawShape();

	ShapeWithGraphicsComments.setCommentedShape(&Circle);
	ShapeWithTextComments.setCommentedShape(&ShapeWithGraphicsComments);
	ShapeWithTextComments.setDrawlmp(new CDrawWinlmp);
	ShapeWithTextComments.drawShape();

	CCompositeShape CompositeShape;
	CompositeShape.addChildShape(new CRectangle);
	ShapeWithGraphicsComments.setCommentedShape(&Circle);
	CompositeShape.addChildShape(&ShapeWithGraphicsComments);
	CompositeShape.addChildShape(new CCircle);
	CompositeShape.setDrawlmp(new CDrawUnxilmp);
	CompositeShape.drawShape();

	return 0;
}