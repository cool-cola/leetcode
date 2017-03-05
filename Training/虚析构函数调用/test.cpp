#include <iostream>

//注意有virtual 时析构函数的输出情况和没有时的输出情况，没有时会造成内存泄漏
class Base
{
public:
	Base() { std::cout << "基类构造函数" << std::endl; }
    virtual ~Base() { std::cout << "基类析构函数" << std::endl; }

	virtual void findall() = 0;
};

class Derive : public Base
{
public:
	Derive() { std::cout << "派生类构造函数" << std::endl; }
	virtual ~Derive() { std::cout << "派生类析构函数" << std::endl; }

	virtual void findall() override { std::cout << "do something!" << std::endl; }
};

int main()
{
	Base * p = new Derive;
	p->findall();

	delete p;

	return 0;
}