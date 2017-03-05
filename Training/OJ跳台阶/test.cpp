#include <iostream>

class Solution {
public:
	int jumpFloor(int number) {
		if (number == 1) return 1;
		if (number == 2) return 2;

		return jumpFloor(number-1) + jumpFloor(number-2);
	}
};

int main()
{
	Solution obj;
	std::cout << obj.jumpFloor(4) << std::endl;

	return 0;
}