#include <iostream>
#include <vector>

//Definition for binary tree
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* reConstructBinaryTree(std::vector<int> pre, std::vector<int> vin) {
		if (pre.size()!=vin.size() || pre.size()==0 || vin.size()==0)
		{
			return NULL;
		}

		     TreeNode *RootNode = new TreeNode(pre[0]);
		     for (int k=0; k<vin.size(); k++)
		     {
				if (vin[k] == pre[0])
				{
					if (k == 0)
					{
						TreeNode *RightNode;
						std::vector<int> RightPre;
						std::vector<int> RightVin;

						RightPre.assign(pre.begin()+1, pre.end());
						RightVin.assign(vin.begin()+1, vin.end());
						RightNode = reConstructBinaryTree(RightPre, RightVin);
						RootNode->right = RightNode;
					} 
					else if (k == vin.size()-1)
					{
						TreeNode *LeftNode;
						std::vector<int> LeftPre;
						std::vector<int> LeftVin;

						LeftPre.assign(pre.begin()+1, pre.end());
						LeftVin.assign(vin.begin(), vin.end()-1);
						LeftNode = reConstructBinaryTree(LeftPre, LeftVin);
						RootNode->left = LeftNode;
					}
					else
					{
						TreeNode *LeftNode;
						TreeNode *RightNode;
						std::vector<int> RightPre;
						std::vector<int> RightVin;
						std::vector<int> LeftPre;
						std::vector<int> LeftVin;

						LeftPre.assign(pre.begin()+1, pre.begin()+k+1);
						RightPre.assign(pre.begin()+k+1, pre.end());
						LeftVin.assign(vin.begin(), vin.begin()+k);
						RightVin.assign(vin.begin()+k+1, vin.end());
						LeftNode  = reConstructBinaryTree(LeftPre, LeftVin);
						RightNode = reConstructBinaryTree(RightPre, RightVin);
						RootNode->left  = LeftNode;
						RootNode->right = RightNode;
					}
				}
			}

		return RootNode;
	}
};

int main()
{
	int a[8] = {1, 2, 4, 7, 3, 5, 6, 8};
	int b[8] = {4, 7, 2, 1, 5, 3, 8, 6};

	std::vector<int> pre;
	std::vector<int> vin;

	pre.assign(a, a+8);
	vin.assign(b, b+8);

	TreeNode *Root;
	Solution obj;
	Root = obj.reConstructBinaryTree(pre, vin);

	return 0;
}