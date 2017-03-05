
#include <iostream>

//对成员函数指针的调用
//1.指向公有非静态的成员函数，调用时必须创建一个对象

class CMyClass
{
public:
	CMyClass(int i = 0) { std::cout << i << std::endl; }
	CMyClass(const CMyClass& x) { std::cout << 2 << std::endl; }
	CMyClass& operator =(const CMyClass& x) { std::cout << 3 << std::endl; return *this; }
	~CMyClass() { /*delete this;*/ }
	
	void fun1(int) { std::cout << "Function1111!" << std::endl; }
	static void fun2(int) { std::cout << "Function2222!" << std::endl; }
};

int main()
{
	void (CMyClass::*p)(int);
	p = &CMyClass::fun1;
	CMyClass obj;
	(obj.*p)(1);

	void (*p1)(int);
	p1 = &CMyClass::fun2;
	p1(1);

	return 0;
}