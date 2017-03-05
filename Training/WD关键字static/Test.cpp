#include "Test.h"
#include <string>

//1.static有隐藏作用（但这儿貌似没有体现出来）
void test01()
{
	std::cout << ch << std::endl;
	printChar();
}

//2.static默认初始化为0
std::string String01[10];
static std::string String02[10];
static int INum01[10];

//3.static有保持局部变量内容的持久，有作用域限制

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