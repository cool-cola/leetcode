#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode {
       int val;
       struct ListNode *next;
	   ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	std::vector<int> printListFromTailToHead(ListNode* head) {
		std::vector<int> PrintListValues;
		if (head != NULL)
		{
			if (head->next != NULL)
			{
				PrintListValues = printListFromTailToHead(head->next);
			}
			PrintListValues.push_back(head->val);
		}

		return PrintListValues;
		
		/*if (head == NULL)
		{
			return;
		}

		std::vector<int> PrintListValues;
		for (ListNode* p=head; p!=NULL; p=p->next)
		{
			PrintListValues.push_back(p->val);
		}
		reverse(PrintListValues.begin(), PrintListValues.end());

		return PrintListValues;*/
	}
};

int main()
{
	ListNode Node1(1);
	ListNode Node2(2);
	ListNode Node3(3);

	Node1.next = &Node2;
	Node2.next = &Node3;

	Solution obj;
	obj.printListFromTailToHead(&Node1);

	return 0;
}