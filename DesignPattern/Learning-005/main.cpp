#include <cassert>
#include "Geometry.h"

//不满足LSP，Rectangle类默认长度和宽度的改变互不影响，而Square类
//不满足这个假设
void f(CRectangle& r)
{
	r.setWidth(5);
	r.setHeight(4);
	std::cout << "Width = " << r.getWidth() << std::endl;
	std::cout << "Height = " << r.getHeight() << std::endl;

    assert(r.area() == 20);
}

int main()
{
	CSquare Square;
	CRectangle Rectangle;

	f(Square);
	f(Rectangle);

	return 0;
}