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
	static void func2() const; //error--��Ա��������Ϊconst���ǳ�ŵ�����޸ĸú��������Ķ��󣬶�static��Ա�����������κζ���
	static void func3() volatile; //error
};