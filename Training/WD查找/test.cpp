#include <iostream>

//��̬���ұ�Ĳ��ҷ����У�˳����ң��۰���ң�ɢ�в��ҵ�
//��̬���ұ�Ĳ��ҷ����У������������Ĳ��ң�ɢ�в��ҵ�
//ƽ�����ҳ����Ǻ��������㷨Ч�ʵ�����Ҫָ��

//*****************************************************************************
//Function:����һ�����������еڶ������
const int MINNUMBERS = -32767;
int find_sec_max(int data[], int count)
{
	int MaxNumber = data[0];
	int SecMax    = MINNUMBERS;
	for (int i = 1; i < count; ++i)
	{
		if (data[i] > MaxNumber)
		{
			SecMax    = MaxNumber;
			MaxNumber = data[i];
		} 
		else
		{
			if (data[i] > SecMax)
			{
				SecMax = data[i];
			}
		}
	}

	return SecMax;
}

void test01()
{
	int Data[6] = { 3, 5, 7, 1, 4, 9 };
	std::cout << find_sec_max(Data, 6) << std::endl;
}

//*****************************************************************************
//Function:���ֲ���--vData��Ҫʱ˳��洢�ṹ��������ʽ�洢�ṹ������
template<class Type>
int Binary_Search(Type vData[], Type vValue, int vCount)
{
	int Low = 0, High = vCount - 1;
	int Mid;
	while (Low <= High)
	{
		Mid = (Low + High) / 2;
		if (vData[Mid] == vValue)
		{
			return Mid;
		}
		else if (vData[Mid] > vValue)
		{
			High = Mid - 1;
		}
		else
		{
			Low = Mid + 1;
		}
	}

	return -1;
}

void test02()
{
	int vData[6] = { 1, 2, 3, 4, 5, 6};
	if (Binary_Search<int>(vData, 2, 6) != -1) 
		std::cout << vData[Binary_Search<int>(vData, 2, 6)] << std::endl;
}

//*****************************************************************************
//Function:���ֲ��ұ仯����
template<class Type>
int Binary_Search_Another(Type vData[], Type vValue, int vCount)
{
	int Low = 0, High = vCount-1, Mid;
	for (int i = 0; i < vCount; ++i)
	{
		;
	}
}

void test03()
{
	int Data[10] = {7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
	if (Binary_Search_Another<int>(Data, 8, 10) != -1)
		std::cout << Data[Binary_Search_Another<int>(Data, 8, 10)] << std::endl;
}

int main()
{
	//test01();
	test02();
	test03();

	return 0;
}