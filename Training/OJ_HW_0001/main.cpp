#include <iostream>

//����һ���ַ��������ַ����ڵ���ĸת���ɸ���ĸ����һ����ĸ��a����b��z����a��Z����A����aBfת����bCg��
//�ַ����ڵ������ַ����ı䣬������������д���� 
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