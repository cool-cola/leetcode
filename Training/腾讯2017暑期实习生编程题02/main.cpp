
#include <iostream>

const int MAXN = 1010;
char s[MAXN];

//如果碰到大写，就插入到字符串的最后面
int main()
{
	 while (std::cin >> s)
	 {
		 int len = strlen(s);
		 int end = len-1;
		 for (int i=0; i<=end; )
		 {
			 if (s[i]>='A' && s[i]<='Z')
			 {
				 char ch = s[i];
				 for (int k=i+1; k<len; ++k)
				 {
					 s[k-1] = s[k];
				 }
				 s[len-1] = ch;
				 end--;
			 }
			 else ++i;
		 }
		 std::cout << s << std::endl;
	 }

	return 0;
}