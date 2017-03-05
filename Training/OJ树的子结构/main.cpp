#include <iostream>

struct TreeNode{
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == NULL || pRoot2 == NULL) return false;

		bool flag;
		if (pRoot1->val == pRoot2->val)
		{
			flag = isSubtree(pRoot1->left, pRoot2->left) && isSubtree(pRoot1->right, pRoot2->right);
		}
		
		return flag || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
	}
	bool isSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == NULL) return true;
		if (pRoot1 == NULL) return false;

		if (pRoot1->val == pRoot2->val)
		{
			return isSubtree(pRoot1->left, pRoot2->left) && isSubtree(pRoot1->right, pRoot2->right);
		}
		else
		{
			return false;
		}
	}
};

void createBinaryTree(TreeNode*& vRoot)
{
	char newData;
	std::cin >> newData;
	
	if (newData == '#')
	{
		vRoot = NULL;
	}
	else
	{
		vRoot = new TreeNode(newData-'0');
		createBinaryTree(vRoot->left);
		createBinaryTree(vRoot->right);
	}
}

int main()
{
	TreeNode* pRoot1 = NULL;
	TreeNode* pRoot2 = NULL;

	createBinaryTree(pRoot1);
	createBinaryTree(pRoot2);

	Solution obj;
	std::cout << obj.HasSubtree(pRoot1, pRoot2) << std::endl;

	return 0;
}