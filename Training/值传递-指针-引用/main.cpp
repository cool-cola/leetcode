
#include <iostream>

void change1(int n)
{
	std::cout << "ֵ����--����������ַ" << &n << std::endl;
	n++;
}

void change2(int & n)
{
	std::cout << "���ô���--����������ַ" << &n << std::endl;
	n++;
}

void change3(int *n)
{
	std::cout << "ָ�봫��--����������ַ" << n << std::endl;
	*n = *n + 1;
}

int main()
{
	int n = 10;
	std::cout << "ʵ�εĵ�ַ" << &n << std::endl;
	change1(n);
	std::cout << "after change1() n = " << n << std::endl;
	change2(n);
	std::cout << "after change2() n = " << n << std::endl;
	change3(&n);
	std::cout << "after change3() n = " << n << std::endl;

	return 0;
}