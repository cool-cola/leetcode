#include <iostream>

//��һ��������������û����ͬ�Ĳ��֣�����12386123���������������ͬ�Ĳ�����123����ͬ�Ĳ�������Ӧ����2λ����
//�������ͬ���ַ���1�����û���򷵻�0���������Ƚ���������ת���������У����ж�
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