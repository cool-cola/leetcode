#include <iostream>
#include <vector>

/* 思路
* 矩阵是有序的，从左下角来看，向上数字递减，向右数字递增，
* 因此从左下角开始查找，当要查找数字比左下角数字大时。右移
* 要查找数字比左下角数字小时，上移
*/
class Solution {
public:
	bool Find(int target, std::vector<std::vector<int> > array) {
		int Row = array.size();
		int Col = array[0].size();
		for (int i=Row-1, k=0; i>=0 && k<Col;)
		{
			if (array[i][k] == target)
			{
				return true;
			}
			else if (array[i][k] < target)
			{
				k++;
				continue;
			}
			else
			{
				i--;
				continue;
			}
		}

		return false;
	}
};