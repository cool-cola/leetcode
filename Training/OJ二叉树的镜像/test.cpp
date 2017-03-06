#include <iostream>
#include <stack>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	//µÝ¹é
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL) return;

		TreeNode *pTemp = pRoot->left;
		pRoot->left     = pRoot->right;
		pRoot->right    = pTemp;

		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
	//·ÇµÝ¹é
	void Mirror01(TreeNode *pRoot)
	{
		if (pRoot == NULL) return;

		std::stack<TreeNode*> Stack;
		Stack.push(pRoot);
		while (Stack.size())
		{
			TreeNode *pTemp = Stack.top();
			Stack.pop();
			if (pTemp->left || pTemp->right)
			{
				TreeNode *pTemp1 = pTemp->left;
				pTemp->left = pTemp->right;
				pTemp->right = pTemp1;
			}
			
			if (pTemp->left) Stack.push(pTemp->left);
			if (pTemp->right) Stack.push(pTemp->right);
		}
	}
};

int main()
{
	TreeNode Node1(8);
	TreeNode Node2(6);
	TreeNode Node3(10);
	TreeNode Node4(5);
	TreeNode Node5(7);
	TreeNode Node6(9);
	TreeNode Node7(11);

	Node1.left  = &Node2;
	Node1.right = &Node3;
	Node2.left  = &Node4;
	Node2.right = &Node5;
	Node3.left  = &Node6;
	Node3.right = &Node7;

	Solution obj;
	obj.Mirror(&Node1);

	return 0;
}