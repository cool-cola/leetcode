#include <stack>
#include <unordered_map>
#include <algorithm>
#include "Solution.h"

CSolution::CSolution()
{

}

CSolution::~CSolution()
{

}

//************************************************************************
//Function
int CSolution::evalRPN(std::vector<std::string> &tokens)
{
	int Result = 0;
	int size = tokens.size();
	std::stack<int> temp;
	for (int i=0; i<size; ++i)
	{
		if (tokens[i] == "+")
		{
			int left = temp.top();
			temp.pop();
			int right = temp.top();
			temp.pop();
			Result = right+left;
			temp.push(Result);
		}
		else if (tokens[i] == "-")
		{
			int left = temp.top();
			temp.pop();
			int right = temp.top();
			temp.pop();
			Result = right-left;
			temp.push(Result);
		}
		else if (tokens[i] == "*")
		{
			int left = temp.top();
			temp.pop();
			int right = temp.top();
			temp.pop();
			Result = right*left;
			temp.push(Result);
		}
		else if (tokens[i] == "/")
		{
			int left = temp.top();
			temp.pop();
			int right = temp.top();
			temp.pop();
			Result = right/left;
			temp.push(Result);
		}
		else
		{
			temp.push(atoi(tokens[i].c_str()));
		}
	}
	return temp.top();
}

//************************************************************************
//Function
int CSolution::maxPoints(std::vector<Point> &points)
{
	int size = points.size();
	if (size == 0) return 0;
	else if (size == 1) return 1;
	
	int count = 2;
	for (int i=0; i<size; ++i)
	{
		int sameP = 0;
		int vet = 0;
		std::unordered_map<double, int> uma;

		for (int k=i+1; k<size; ++k)
		{
			int dx = points[i].x - points[k].x;
			int dy = points[i].y - points[k].y;
			if (dx == 0)
			{
				if (dy == 0)
				{
					sameP++;
				} 
				else
				{
					vet++;
				}
			}
			else {
				double d = (double)dy / dx;
				uma[d]++;
			}
		}

		int maxn = vet;
		for (const auto &temp : uma)
		{
			if (temp.second > maxn)
			{
				maxn = temp.second;
			}
		}

		maxn += sameP + 1;
		count = (count > maxn ? count : maxn);
	}

	return count;
}

//************************************************************************
//Function
ListNode * CSolution::sortList(ListNode *head)
{
 	if (head==NULL || head->next==NULL) return head;

	return __mergeSort(head);

 	return head;
}

//************************************************************************
//Function
ListNode * CSolution::__mergeSort(ListNode *head)
{
	if (head==NULL || head->next==NULL) return head;

	ListNode *slow, *fast;
	slow = head; 
	fast = head;
	while (fast->next!=NULL && fast->next->next!=NULL)
	{ 
		slow = slow->next;
		fast = fast->next->next;
	}

	fast = slow->next;
	slow->next = NULL;
	ListNode *first = __mergeSort(head);
	ListNode *second = __mergeSort(fast);
	
	return __merge(first, second);
}

//************************************************************************
//Function
ListNode * CSolution::__merge(ListNode *first, ListNode *second)
{
	//if (first==NULL || second==NULL) return;

	ListNode *temp = new ListNode(0);
	ListNode *h = temp;
	ListNode *p = first;
	ListNode *q = second;
	while (p!=NULL && q!=NULL)
	{
		if (p->val < q->val)
		{
			h->next = p;
			p = p->next;
		} 
		else
		{
			h->next = q;
			q = q->next;
		}
		h = h->next;
	}

	if (p != NULL) h->next = p;
	if (q != NULL) h->next = q;

	h = temp->next;
	temp->next = NULL;
	delete temp;
	return h;
}

//************************************************************************
//insertion-sort-list
ListNode * CSolution::insertionSortList(ListNode *head)
{
	if (head==NULL || head->next==NULL) return head;

	ListNode *pCur  = head->next;
	ListNode *pTemp = NULL;
	while (pCur != NULL)
	{
		pTemp = head;
		while (pTemp->val<pCur->val && pTemp!=pCur)
			pTemp = pTemp->next;
		if (pTemp != pCur)
		{
			int temp = pTemp->val;
			pTemp->val = pCur->val;
			while (pTemp != pCur)
			{
				pTemp = pTemp->next;
				std::swap(temp, pTemp->val);
			}
		}
		pCur = pCur->next;
	}
 	
	return head;
}

//************************************************************************
//binary-tree-postorder-traversal
std::vector<int> CSolution::postorderTraversal(TreeNode *root)
{
	std::vector<int> vTemp;

}

