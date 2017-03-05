#include <iostream>
#include <vector>

class Solution {
public:
	int minNumberInRotateArray(std::vector<int> rotateArray) {
		if (rotateArray.empty())
		{
			return 0;
		}

		int Index;
		for (unsigned int i=0; i<rotateArray.size()-1; i++)
		{
			if (rotateArray[i] > rotateArray[i+1])
			{
				Index = i+1;
				break;
			}
		}

		for (unsigned int i=Index, n=0; i<rotateArray.size(); i++, n++)
		{
			int Temp = rotateArray[Index];
			for (int k=Index; k>n; k--)
			{
				rotateArray[k] = rotateArray[k-1];
			}
			rotateArray[n] = Temp;
		}

		return rotateArray[0];
	}
};

int main()
{
	int a[5] = {3,4,5,1,2};
	std::vector<int> ve;
	ve.assign(a, a+5);

	Solution obj;
	std::cout << obj.minNumberInRotateArray(ve) << std::endl;

	return 0;
}