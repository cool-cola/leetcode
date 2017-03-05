
#include <iostream>
#include <cassert>

//public继承方式，表示每一个类型为Derived的对象同时也是一个类型为Base的对象，反之不成立。即Base比Derived表现出更一般化
//的概念，而Derived比Base表现出更特殊化的概念。主张“Base对象可派上用场的任何地方，Derived对象一样可以派上用场”（此即：Liskov替换
//原则），因为每一个Derived对象都是一种（是一个）Base对象。反之如果你需要一个Derived对象，Base对象无法效劳，因为虽然每个
//Derived对象都是一个Base对象，反之并不成立。
class Base
{
public:
	Base() {}
	virtual ~Base() {}

};

class Derived : public Base
{
public:
	Derived() {}
	virtual ~Derived() {}

};


class CRectangle
{
public:
	CRectangle() : m_Height(0), m_Width(0) {}
	virtual ~CRectangle() {}

	virtual void setHeight(int vNewHeight) { m_Height = vNewHeight; }
	virtual void setWidth(int vNewWidth) { m_Width = vNewWidth; }
	virtual int getHeight() const { return m_Height; }
	virtual int getWidth() const { return m_Width; }

private:
	int m_Height;
	int m_Width;
};

class CSquare : public CRectangle
{
public:
	CSquare() {}
	virtual ~CSquare() {}

	
};

void makeBigger(CRectangle& r)
{
	int oldHeight = r.getHeight();
	r.setWidth(r.getWidth() + 10);
	assert(r.getHeight() == oldHeight);
}

int main()
{
	CSquare s;


	return 0;
}