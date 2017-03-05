#include <iostream>

class CShape
{
public:
	CShape() {}
	virtual ~CShape() {}

	enum ShapeColor { Red, Green, Blue };
	virtual void draw(ShapeColor vColor = Red) const = 0;
};

class CRectangle : public CShape
{
public:
	CRectangle() {}
	virtual ~CRectangle() {}

	virtual void draw(ShapeColor vColor = Green) const override
	{
		std::cout << "Rectangle'color is " << vColor << "..." << std::endl;
	}
};

class CCircle : public CShape
{
public:
	CCircle() {}
	virtual ~CCircle() {}

	//注意：，这么写则当客户以对象调用此函数，一定要指定函数参数值
	//因为静态绑定下这个函数并不从其base继承缺省参数值
	//但若以指针（或reference）调用此函数，可以不指定参数值
	//因为动态绑定下这个函数会从其base继承缺省参数值。
	virtual void draw(ShapeColor vColor) const override
	{
		std::cout << "Circle'color is " << vColor << "..." << std::endl;
	}
};

int main()
{
	CShape* ps;
	CShape* pc = new CRectangle;
	CShape* pr = new CCircle;  //ps,pc,pr都被声明为pointer-to-shape类型，所以它们都以它为静态类型。注意，不论他们真正指向什么，他们的静态类型都是CShape类型
	//pc的动态类型为 CCircle*，pr的动态类型为CRectangle*；ps没有动态类型，因为它尚未指向任何对象

	pc->draw();
	pr->draw();

	CCircle Circle;
	Circle.draw(CShape::Green);

	CRectangle Rectangle;
	Rectangle.draw();

	return 0;
}