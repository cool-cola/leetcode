#include "Test.h"
#include <string>

//1.static���������ã������ò��û�����ֳ�����
void test01()
{
	std::cout << ch << std::endl;
	printChar();
}

//2.staticĬ�ϳ�ʼ��Ϊ0
std::string String01[10];
static std::string String02[10];
static int INum01[10];

//3.static�б��־ֲ��������ݵĳ־ã�������������

int main()
{
	test01();

	//2.
	static int INum02[10];
	std::string String03[10];
	int INum03[10];

// 	std::cout << String01[0] << std::endl;
// 	std::cout << String02[0] << std::endl;
	std::cout << String03[0] << std::endl;
	std::cout << INum01[0] << std::endl;
	std::cout << INum02[0] << std::endl;
	std::cout << INum03[0] << std::endl;

	return 0;
}