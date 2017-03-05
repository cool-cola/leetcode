#include <iostream>
#include <vector>

/* ˼·
* ����������ģ������½��������������ֵݼ����������ֵ�����
* ��˴����½ǿ�ʼ���ң���Ҫ�������ֱ����½����ִ�ʱ������
* Ҫ�������ֱ����½�����Сʱ������
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