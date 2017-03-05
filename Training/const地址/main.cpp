#include <iostream>

int main()
{
	const char str1[] = "abc";
	const char str2[] = "abc";
	const char *p1    = "abc";
	const char *p2    = "abc";
	char *p = "abc";

	//printf("%s\n", p);
	std::cout << &str1 << std::endl << &str2 << std::endl;
	std::cout << &p1 << std::endl << &p2 << std::endl;

	return 0;
}