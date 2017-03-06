#include <iostream>

//求一个整型数字中有没有相同的部分，例如12386123这个整型数字中相同的部分是123，相同的部分至少应该是2位数，
//如果有相同部分返回1，如果没有则返回0。方法是先将整型数字转换到数组中，再判断
int same(int num)
{
	if (num < 10 && num > -10) return 0;

	if (num < 0) num = -num;
	
	int Num[20];
	unsigned int i = 0;
	while (num)
	{
		Num[i++] = num % 10;
		num /= 10;
	}

	for (unsigned int j=0; j<i; ++j)
	{
		int Temp = Num[j];
		for (unsigned int k=j+1; k<i; ++k)
		{
			if (Temp == Num[k]) return 1;
		}
	}

	return 0;
}

int main()
{
	std::cout << same(-12386123) << std::endl;

	return 0;
}