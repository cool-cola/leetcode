#include <iostream>

class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0) return -1;

		return (int)pow(2, number-1);
	}
};

int main()
{
	Solution obj;
	std::cout << obj.jumpFloorII(2) << std::endl;

	return 0;
}