#include <cassert>
#include "Geometry.h"

//������LSP��Rectangle��Ĭ�ϳ��ȺͿ�ȵĸı以��Ӱ�죬��Square��
//�������������
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