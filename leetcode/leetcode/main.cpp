#include <iostream>
#include <string>
#include "Solution.h"

int main()
{
// 	std::vector<std::string> ve;
// 	ve.push_back("2");
// 	ve.push_back("1");
// 	ve.push_back("+");
// 	ve.push_back("3");
// 	ve.push_back("*");
// 
// 	CSolution ob;
// 	std::cout << ob.evalRPN(ve) << std::endl;

// 	std::vector<Point> ve;
// 	ve.push_back(Point(0, 0));
// 	ve.push_back(Point(1, 1));
// 	ve.push_back(Point(0, 0));
// 	ve.push_back(Point(1, 2));
// 	ve.push_back(Point(3, 7));

// 	CSolution ob;
// 	std::cout << ob.maxPoints(ve) << std::endl;

	ListNode *Array = new ListNode(5);
	ListNode *first = new ListNode(1);
	ListNode *second = new ListNode(2);
	ListNode *third = new ListNode(4);
	ListNode *fouth = new ListNode(3);

	Array->next = first;
	first->next = second;
	second->next = third;
	third->next = fouth;
	fouth->next = NULL;

	CSolution ob;
	ListNode *p = ob.insertionSortList(Array);
	for (; p!=NULL; p=p->next)
	{
		std::cout << p->val << std::endl;
	}

	delete Array;
	delete first;
	delete second;
	delete third;
	delete fouth;

	return 0;
}