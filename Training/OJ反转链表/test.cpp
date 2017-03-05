#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead==NULL || pHead->next==NULL) return pHead;

		ListNode* curr  = pHead;
		ListNode* _next = pHead->next;

		ListNode* TempHead = new ListNode(0);
		TempHead->next = pHead;
		while (_next)
		{ 
			curr->next = _next->next;
			_next->next = TempHead->next;
			TempHead->next = _next;
			_next = curr->next;
		}

		curr = TempHead->next;
		delete TempHead;
		return curr;
	}

	ListNode* ReverseList1(ListNode* pHead)
	{
		if (pHead == NULL) return pHead;

		ListNode* Curr = pHead->next;

		pHead->next = NULL;
		while (Curr)
		{
			ListNode* NextNode = NULL;
			NextNode = Curr->next;
			Curr->next = pHead;	
			pHead = Curr;
			Curr = NextNode;
		}

		return pHead;
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
	//ListNode* p  = obj.ReverseList(&Node1);
	ListNode* p1 = obj.ReverseList1(&Node1);

	//if (p) std::cout << p->val << std::endl;
	if (p1) std::cout << p1->val << std::endl;

	return 0;
}