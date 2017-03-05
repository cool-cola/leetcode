#include <iostream>
#include <vector>

class Solution {
public:
	void reOrderArray(std::vector<int> &array) {
		if (array.empty()) return;
		
		unsigned int OddIndex = 0;
		unsigned int Size     = array.size();

		for (unsigned int i=0; i<Size; ++i)
		{
			if ((i>0) && (array[i]&1==1))
			{
				int Temp = array[i];
				for (unsigned int k=i; k>OddIndex; --k)
				{
					array[k] = array[k-1];
				}
				array[OddIndex] = Temp; 
				OddIndex++;
			}
			else if(array[i]&1 == 1)
			{
				OddIndex++;
			}
		}
	}
};

int main()
{
	int a[] = {11, 3, 5, 6, 7, 8, 9};

	std::vector<int> ve;
	ve.assign(a, a+7);

	Solution obj;
	obj.reOrderArray(ve);

	return 0;
}