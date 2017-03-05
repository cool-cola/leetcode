#include <iostream>
#include <assert.h>

class Solution {
public:
	double Power(double base, int exponent) {
		if (base == 0)
		{
			std::cout << "base can't be zero..." << std::endl;
			exit(EXIT_FAILURE);
		}

		double Result = 1;
		if (exponent > 0)
		{
			while (exponent)
			{
				--exponent;
				Result *= base;
			}
		} 
		else if (exponent < 0)
		{
			double Temp = -exponent;
			while (Temp)
			{
				--Temp;
				Result *= base;
			}
			Result = 1 / Result;
		}

		return Result;
	}
};

char * myStrcpy( char *strDest, const char *strSrc ) 
{ 
	char *address = strDest; 
	assert( (strDest != NULL) && (strSrc != NULL) ); 
	while( (*strDest++ = *strSrc++) != '\0' ); 
	return address; 
} 

int main()
{
	Solution obj;
	std::cout << obj.Power(2, 3) << std::endl;

	char *p;
	p = myStrcpy(NULL,NULL);

	return 0;
}