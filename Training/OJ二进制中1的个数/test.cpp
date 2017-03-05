#include <iostream>

class Solution {
public:
	int  NumberOf1(int n) {
		if (n == 0) return 0;
		
		int Result = 0, Count = 0;
		while (Count<sizeof(int)*8)
		{
			Result += n&1;
			n = n>>1;
			Count++;
		}

		return Result;
	}

	int NumberOf2(int n)
	{
		int count = 0;
		while (n != 0)
		{
			count++;
			n = n & (n-1);
		}
		return count;
	}
};

int main()
{
	Solution obj;
	std::cout << obj.NumberOf1(8) << std::endl;
	std::cout << obj.NumberOf2(8) << std::endl;

	return 0;
}