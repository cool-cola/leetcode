
#include <iostream>
#include <cassert>

//public�̳з�ʽ����ʾÿһ������ΪDerived�Ķ���ͬʱҲ��һ������ΪBase�Ķ��󣬷�֮����������Base��Derived���ֳ���һ�㻯
//�ĸ����Derived��Base���ֳ������⻯�ĸ�����š�Base����������ó����κεط���Derived����һ�����������ó������˼���Liskov�滻
//ԭ�򣩣���Ϊÿһ��Derived������һ�֣���һ����Base���󡣷�֮�������Ҫһ��Derived����Base�����޷�Ч�ͣ���Ϊ��Ȼÿ��
//Derived������һ��Base���󣬷�֮����������
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