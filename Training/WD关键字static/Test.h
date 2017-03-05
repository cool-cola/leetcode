#pragma once
#include <iostream>

static char ch = 'A'; //global variable

static void printChar()
{
	std::cout << ch << std::endl;
}

class base
{
	virtual static void func1(); //error
	static void func2() const; //error--成员函数声明为const就是承诺不会修改该函数所属的对象，而static成员函数不属于任何对象
	static void func3() volatile; //error
};