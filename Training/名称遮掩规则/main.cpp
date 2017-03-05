#include <iostream>

class Base
{
public:
	//virtual void mf1()=0;
	virtual void mf1(int) { std::cout << "Base mf1..." << std::endl; }
	virtual void mf2() { std::cout << "Base mf2..." << std::endl; }
	void mf3() { std::cout << "Base mf3..." << std::endl; }
	void mf3(double) { std::cout << "Derived mf3(double)..." << std::endl; }

private:
	int x;
};

class Derived : public Base
{
public:
	using Base::mf1;
	using Base::mf3;  //使用using改变了c++缺省遮掩行为

	virtual void mf1() { std::cout << "Derived mf1..." << std::endl; }
	void mf3() { std::cout << "Derived mf3..." << std::endl; }
	void mf4() { std::cout << "Derived mf4..." << std::endl; }
};

class DerivedSec : private Base
{
public:
	virtual void mf1(int x) //转交函数
	{
		Base::mf1(x);
	}
};

int main()
{
	int x = 1;
	
	DerivedSec obj;
	obj.mf1(x);

	Derived d;

	d.mf1();
	d.mf1(x);  //
	d.mf2();
	d.mf3();
	d.mf3(x);  //

	return 0;
}