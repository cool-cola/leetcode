
#include <iostream>

void change1(int n)
{
	std::cout << "值传递--函数操作地址" << &n << std::endl;
	n++;
}

void change2(int & n)
{
	std::cout << "引用传递--函数操作地址" << &n << std::endl;
	n++;
}

void change3(int *n)
{
	std::cout << "指针传递--函数操作地址" << n << std::endl;
	*n = *n + 1;
}

int main()
{
	int n = 10;
	std::cout << "实参的地址" << &n << std::endl;
	change1(n);
	std::cout << "after change1() n = " << n << std::endl;
	change2(n);
	std::cout << "after change2() n = " << n << std::endl;
	change3(&n);
	std::cout << "after change3() n = " << n << std::endl;

	return 0;
}