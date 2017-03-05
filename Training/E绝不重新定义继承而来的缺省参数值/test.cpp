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

	//ע�⣺����ôд�򵱿ͻ��Զ�����ô˺�����һ��Ҫָ����������ֵ
	//��Ϊ��̬�������������������base�̳�ȱʡ����ֵ
	//������ָ�루��reference�����ô˺��������Բ�ָ������ֵ
	//��Ϊ��̬����������������base�̳�ȱʡ����ֵ��
	virtual void draw(ShapeColor vColor) const override
	{
		std::cout << "Circle'color is " << vColor << "..." << std::endl;
	}
};

int main()
{
	CShape* ps;
	CShape* pc = new CRectangle;
	CShape* pr = new CCircle;  //ps,pc,pr��������Ϊpointer-to-shape���ͣ��������Ƕ�����Ϊ��̬���͡�ע�⣬������������ָ��ʲô�����ǵľ�̬���Ͷ���CShape����
	//pc�Ķ�̬����Ϊ CCircle*��pr�Ķ�̬����ΪCRectangle*��psû�ж�̬���ͣ���Ϊ����δָ���κζ���

	pc->draw();
	pr->draw();

	CCircle Circle;
	Circle.draw(CShape::Green);

	CRectangle Rectangle;
	Rectangle.draw();

	return 0;
}