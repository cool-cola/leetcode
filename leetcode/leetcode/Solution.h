#pragma once
#include <vector>
#include <string>

struct Point {
	    int x;
	    int y;
	    Point() : x(0), y(0) {}
	    Point(int a, int b) : x(a), y(b) {}
};

struct ListNode {
	    int val;
	    ListNode *next;
	    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
       int val;
	   TreeNode *left;
	   TreeNode *right;
	   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class CSolution
{
public:
	CSolution();
	~CSolution();

	int evalRPN(std::vector<std::string> &tokens);
	int maxPoints(std::vector<Point> &points);
	ListNode *sortList(ListNode *head);
	ListNode *insertionSortList(ListNode *head);
	std::vector<int> postorderTraversal(TreeNode *root);

private:
	ListNode *__mergeSort(ListNode *head);
	ListNode * __merge(ListNode *first, ListNode *second);
};