#include <iostream>
#include <algorithm>
#include <vector>

int findValue(const std::vector<int>& vVec, int vLen, int vValue)
{
	int Count = 0;
	for (int i=0; i<vLen; i++)
		if (vVec[i] == vValue)
			Count++;
	return Count;
}

//�ȶ������������Ȼ��������ֵ�����С��ֵ�顣
//����ֵ�϶���������β��������֮�䣬����ע�⵽������ͬ���֣���������ֵ����������С���ĸ���*������ĸ���
//��С��ֵ����������������֮�䣬������Ҫ���ǲ�ֵ��СΪ0�������
//�����ֵΪ0��������ȵ����ĸ���n������n*(n-1)/2��
//��Ϊ0�Ļ���ֱ���ۼӼ��ɡ�
int main()
{
	int N;
	while (std::cin >> N)
	{
		std::vector<int> Temp(N, 0);
		for (int i=0; i<N; i++)
			std::cin >> Temp[i];

		std::sort(Temp.begin(), Temp.end());
		int Min      = INT_MAX;
		int minCount = 0;
		int maxCount = 0;
		int aCount = findValue(Temp, N, Temp[0]);
		int bCount = findValue(Temp, N, Temp[N-1]);
		maxCount = aCount * bCount;
		for (int i=0; i<N-1; i++)
			if (Temp[i+1]-Temp[i] <= Min)
				Min = Temp[i+1] - Temp[i];

		aCount = 1;
		if (Min == 0)
		{
			for (int i=0; i<N-1; i++)
			{
				if (Temp[i] == Temp[i+1])
					aCount++;
				else
				{
					minCount += aCount*(aCount-1)/2;
					aCount = 1;
				}
			}
			if (aCount > 1)
				minCount += aCount*(aCount-1)/2;
		}
		else
		{
			aCount = 0;
			for (int i=0; i<N-1; i++)
				if (Temp[i+1]-Temp[i] == Min)
					aCount++;
			minCount += aCount;
		}
		std::cout << minCount << " " << maxCount << std::endl;
	}

	return 0;
}