#include <iostream>
#include <stack>

class Solution
{
public:
	void push(int node) {
		stack2.push(node);
	}

	int pop() {
		int Value;
		if (stack1.size() > 0)
		{
			Value = stack1.top();
			stack1.pop();

			return Value;
		}
		else
		{
			int Size = stack2.size();
			for (unsigned int i=0; i<Size; i++)
			{
				stack1.push(stack2.top());
				stack2.pop();
			}
			Value = stack1.top();
			stack1.pop();

			return Value;
		}
	}

private:
	std::stack<int> stack1; //front
	std::stack<int> stack2; //rear
};

int main()
{
	Solution obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	std::cout << obj.pop();
	std::cout << obj.pop();
	obj.push(4);
	std::cout << obj.pop();
	obj.push(5);
	std::cout << obj.pop();
	std::cout << obj.pop();

	return 0;
}