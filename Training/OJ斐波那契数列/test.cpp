#include <iostream>

class Solution {
public:
	int Fibonacci(int n) {
		int Pre  = 0;
		int Curr = 1;

		while (n--)
		{
			Curr += Pre;
			Pre = Curr - Pre;
		}

		return Pre;
// 		if (n == 0) return 0;
// 		if (n == 1) return 1;
// 
// 		int Pre  = 0;
// 		int Curr = 1;
// 		for (int i=2; i<=n; i++)
// 		{
// 			int Temp = Curr;
// 			Curr = Temp + Pre;
// 			Pre  = Temp;
// 		}
// 
// 		return Curr;

// 		if (n == 0) return 0;
// 		if (n == 1) return 1;
// 
// 		return Fibonacci(n-1) + Fibonacci(n-2);
	}
};

int main()
{
	Solution obj;
	std::cout << obj.Fibonacci(5) << std::endl;

	return 0;
}