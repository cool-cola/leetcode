#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1==NULL && pHead2==NULL) return NULL;

		ListNode* pResult = new ListNode(0);
		ListNode* pCurr   = pResult;
		while (pHead1 && pHead2)
		{
			if (pHead1->val > pHead2->val)
			{
				pCurr->next = pHead2;
				pCurr = pHead2;
				pHead2 = pHead2->next;
			}
			else
			{
				pCurr->next = pHead1;
				pCurr = pHead1;
				pHead1 = pHead1->next;
			}
		}

		if (pHead1) pCurr->next = pHead1;
		if (pHead2) pCurr->next = pHead2;

		pCurr = pResult->next;
		delete pResult;

		return pCurr;
	}

	ListNode* Merge1(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL) return pHead2;
		if (pHead2 == NULL) return pHead1;

		ListNode* pResult = NULL;
		if (pHead1->val > pHead2->val)
		{
			pResult = pHead2;
			pResult->next = Merge1(pHead1, pHead2->next);
		} 
		else
		{
			pResult = pHead1;
			pResult->next = Merge1(pHead1->next, pHead2);
		}

		return pResult;
	}
};

int main()
{
	ListNode Node1(1);
	ListNode Node2(7);
	ListNode Node3(9);
	ListNode Node4(4);
	ListNode Node5(8);

	Node1.next = &Node2;
	Node2.next = &Node3;
//	Node3.next = &Node4;
	Node4.next = &Node5;

	Solution obj;
	if (obj.Merge1(&Node1, &Node4)) ;

	return 0;
}