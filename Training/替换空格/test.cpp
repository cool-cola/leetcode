#include <iostream>
#include <cstring>

class Solution {
public:
	void replaceSpace(char *str,int length) {
		if (str==NULL || length<0)
		{
			return;
		}

		for (int i=length; i>=0; i--)
		{
			if (str[i] == ' ')
			{
				for (int k=strlen(str); k>i; k--)
				{
					str[k+2] = str[k];
				}
				str[i]   = '%';
				str[i+1] = '2';
				str[i+2] = '0';
			}
		}
	}
};

int main()
{
	char str[100] = "we are happy. we are happy.";
	printf("%d\n", str[strlen(str)]);
	Solution obj;
	obj.replaceSpace(str, strlen(str));

	std::cout << str << std::endl;

	return 0;
}