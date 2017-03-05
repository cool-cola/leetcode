#include <iostream>

class Animal
{
public:
	Animal(int height, int Weight)
	{
		std::cout << "animal construct..." << std::endl;
	}
};

class Fish : public Animal
{
public:
	Fish() : Animal(300, 400), a(1)
	{
		std::cout << "Fish construct..." << std::endl;
	}

private:
	int a;
};

int main()
{
	Fish fish;

	return 0;
}