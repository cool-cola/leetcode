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

//先对数组进行排序，然后求最大差值组和最小差值组。
//最大差值肯定发生在首尾两个数字之间，不过注意到存在相同数字，所以最大差值组数等于最小数的个数*最大数的个数
//最小差值出现在相邻两个数之间，这里需要考虑差值最小为0的情况。
//如果差值为0，计算相等的数的个数n，则共有n*(n-1)/2组
//不为0的话，直接累加即可。
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