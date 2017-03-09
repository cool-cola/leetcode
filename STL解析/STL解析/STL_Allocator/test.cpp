#include "Allocator.h"
#include <vector>

int main()
{
	int ia[5] = {0, 1, 2, 3, 4};

	std::vector<int, ALLOCATOR::allocator<int> > iv(ia, ia + 5);
	for (unsigned int i = 0; i < iv.size(); ++i)
	{
		std::cout << iv[i] << ' ';
	}
	std::cout << std::endl;
}