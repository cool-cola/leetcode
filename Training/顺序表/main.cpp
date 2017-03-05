#include <iostream>

template<class ElemType>
struct SqList
{
	ElemType *Elem;
	int Length;
	int ListSize;
};

template<class ElemType>
bool InitList(SqList<ElemType> &L)
{
	L.Elem = (ElemType *)malloc(100 * sizeof(ElemType));
	if (!L.Elem) 
	{
		exit(OVERFLOW);  //内存没有分配成功
	}
    L.Length = 0;
	L.ListSize = 100;

	return true;
}

template<class ElemType>
void DestroyList(SqList<ElemType> &L)
{
	if(!L.Elem) exit(0);
	free(L.Elem);
}

template<class ElemType>
bool ListDelete(SqList<ElemType> &L, int i, ElemType &e)
{
	if (i<1 || i>L.Length)
		return false;
	ElemType *p = &(L.Elem[i-1]);
	e = *p;
	ElemType *q = L.Elem + L.Length - 1;
	for (++p; p<=q; ++p)
	{
		*(p-1) = *p;
	}
	--L.Length;

	return true;
}

int main()
{
	SqList<int> List;
	if (InitList<int>(List))
	{
		for (int i=0; i<5; i++)
		{
			List.Elem[i] = i+2;
			List.Length++;
		}
	}

	int value;
	if (ListDelete<int>(List, 2, value))
	{
		std::cout << value << std::endl;
	}

	return 0;
}