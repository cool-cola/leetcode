
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int getNum(std::vector<int>& vMoney, int vLength)
{
	if (vLength <= 0) return 0; 

	sort(vMoney.begin(), vMoney.end());
	std::map<int, int> Map;
	for (int i=0; i<vLength; i++)
	{
		Map[vMoney[i]]++;
	}

	bool flag = true;
	for (auto It=Map.begin(); It!=Map.end(); It++)
	{
		if (It->second > vLength/2) 
		{
			flag = false;
			return It->first;
		}
	}

	if (!flag) return 0;
}

int main()
{
	int Length;
	while (std::cin >> Length)
	{
		std::vector<int> Money;
		for (int i=0; i<Length; i++)
		{
			int value;
			std::cin >> value;
			Money.push_back(value);
		}

		std::cout << getNum(Money, Length) << std::endl;
	}

	return 0;
}