#include <iostream>

template<class ElemType>
struct LNode
{
	ElemType Data;
	struct LNode *Next;

	LNode(ElemType Val) : Data(Val), Next(NULL) {}
};

template<class ElemType>
bool InitList(LNode<ElemType> *L)
{
	L = NULL;
	return true;
}

template<class ElemType>
void DestroyList(LNode<ElemType> *L)
{
	LNode<ElemType> *p = L;
	while (p)
	{
		L = L->Next;
		free(p);
		p = L;
	}
}

template<class ElemType>
bool ListDelete(LNode<ElemType> *L, int i, ElemType &e)
{
	LNode<ElemType> *p = L;
	int j = 0;
	while (p && j<i-2)
	{
		p = p->Next;
		j++;
	}

	if (!p || j>i-1) return false;
	LNode<ElemType> *q = p->Next;
	e = q->Data;
	if ()
	{
		p = q;
	}
	else
	{
		p->Next = q->Next;
	}
	free(q);

	return true;
}


int main()
{
	LNode<int> Node1(1);
	LNode<int> Node2(2);
	LNode<int> Node3(3);

	Node1.Next = &Node2;
	Node2.Next = &Node3;

	int Value;
	if (ListDelete<int>(&Node1, 2, Value))
	{
		std::cout << Value << std::endl;
	}

	return 0;
}