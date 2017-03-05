#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

void printRandomNumber(unsigned int vUpper)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < vUpper; ++i)
	{
		std::cout << rand()%100 << " " << rand()%100 << "\t";
	}
	std::cout << std::endl;
}

int main()
{
	unsigned int Size = 2;
	for (unsigned int i = 0; i < Size; ++i)
	{
		printRandomNumber(10);
		Sleep(1000);
	}

	return 0;
}