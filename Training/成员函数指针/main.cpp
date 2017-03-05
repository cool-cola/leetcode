
#include <iostream>

//�Գ�Ա����ָ��ĵ���
//1.ָ���зǾ�̬�ĳ�Ա����������ʱ���봴��һ������

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