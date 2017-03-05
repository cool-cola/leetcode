#include <iostream>

//ע����virtual ʱ������������������û��ʱ����������û��ʱ������ڴ�й©
class Base
{
public:
	Base() { std::cout << "���๹�캯��" << std::endl; }
    virtual ~Base() { std::cout << "������������" << std::endl; }

	virtual void findall() = 0;
};

class Derive : public Base
{
public:
	Derive() { std::cout << "�����๹�캯��" << std::endl; }
	virtual ~Derive() { std::cout << "��������������" << std::endl; }

	virtual void findall() override { std::cout << "do something!" << std::endl; }
};

int main()
{
	Base * p = new Derive;
	p->findall();

	delete p;

	return 0;
}