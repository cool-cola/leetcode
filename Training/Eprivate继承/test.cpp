#include <iostream>

class CEmpty {};

class CHoldsAnInt
{
private:
	int x;
	CEmpty e;
};

int main()
{
	CEmpty Ce;
	CHoldsAnInt obj;

	std::cout << sizeof(obj) << ":" << sizeof(Ce) << ":" << sizeof(int) << std::endl;

	return 0;
}