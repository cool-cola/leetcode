#include <iostream>

//给定一个字符串，把字符串内的字母转换成该字母的下一个字母，a换成b，z换成a，Z换成A，如aBf转换成bCg，
//字符串内的其他字符不改变，给定函数，编写函数 
void Stringchang(const char *input, char *output)
{
	if (input == NULL) exit(EXIT_FAILURE);

	strcpy(output, input);

	for (unsigned int i = 0; output[i] != '\0'; ++i)
	{
		if (output[i] >= 'a' && output[i] <= 'z')
		{
			output[i] = (output[i] - 'a' + 1) % 26 + 'a';
		}
		else if (output[i] >= 'A' && output[i] <= 'Z')
		{
			output[i] = (output[i] - 'A' + 1) % 26 + 'A';
		}
	}
}

int main()
{
	char Input[] = "12ab12BBSSZ2Z";
	char Output[100];

	Stringchang(Input, Output);

	return 0;
}