#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead==NULL || k==0) return NULL;

		ListNode* pFirst  = pListHead;
		ListNode* pSecond = pListHead;

		int Count = 1;
		while (pFirst)
		{
			pFirst = pFirst->next;
			Count++;
		}
		if (k>=Count)
		{
			std::cout << "k is large..." << std::endl;
		//	exit(EXIT_FAILURE);
			return NULL;
		}

		for (unsigned int i=0; i<k; ++i)
		{
			pSecond = pSecond->next;
		}

		pFirst = pListHead;
		while (pSecond)
		{
			pFirst  = pFirst->next;
			pSecond = pSecond->next;
		}

		return pFirst;
	}
};

int main()
{
	ListNode Node1(1);
	ListNode Node2(2);
	ListNode Node3(3);
	ListNode Node4(4);
	ListNode Node5(5);

	Node1.next = &Node2;
	Node2.next = &Node3;
	Node3.next = &Node4;
	Node4.next = &Node5;

	Solution obj;
	if (obj.FindKthToTail(&Node1, 6)) std::cout << obj.FindKthToTail(&Node1, 6)->val << std::endl;

	return 0;
}