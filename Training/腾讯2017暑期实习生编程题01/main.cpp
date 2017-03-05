
#include <iostream>
#include <algorithm>
#include <string>

const int MAXN = 1010;
int Temp[MAXN][MAXN];

//����s�ķ���reverse��Ȼ�������ǵ���Ĺ��������У�Ҫɾ�����ַ���������֪��
//ʱ�临�Ӷ�O��N^2��

int getRemoveNumber(const std::string& s1)
{
	std::string s2(s1);
	reverse(s2.begin(), s2.end());
	
	int length = s1.size();
	memset(Temp, 0, sizeof(Temp));
	for (int i=0; i<length; ++i)
	{
		for (int k=0; k<length; ++k)
		{
			if (s1[i] == s2[k]) Temp[i+1][k+1] = Temp[i][k]+1;
			else Temp[i+1][k+1] = std::max(Temp[i][k+1], Temp[i+1][k]);
		}
	}

	return length-Temp[length][length];
}

int main()
{
	std::string s;
	while (std::cin >> s)
	{
		std::cout << getRemoveNumber(s) << std::endl;
	}

	return 0;
}