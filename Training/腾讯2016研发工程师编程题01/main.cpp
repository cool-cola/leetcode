
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> getGray(int vInput)
{
	_ASSERT(vInput > 0);

	int Size = 1 << vInput;
	std::vector<std::string> Result;
	Result.resize(Size);
	if (vInput == 1)
	{
		Result[0] = "0";
		Result[1] = "1";
		return Result;
	}

	std::vector<std::string> Temp;
	Temp = getGray(vInput-1);
	int Len = Temp.size();
	for (int i=0; i<Len; i++)
	{
	    Result[i] = "0" + Temp[i];
		Result[Size-i-1] = "1" + Temp[i];
	}

	return Result;
}

int main()
{
	int N;
	while (std::cin >> N)
	{
		std::vector<std::string> Result;
		Result = getGray(N);

		std::cout << "[" << "\"" << Result[0] << "\",";
		for (int i=1; i<Result.size()-1; i++)
			std::cout << "\"" << Result[i] << "\",";
		std::cout << "\"" << Result[Result.size()-1] << "\"" << "]" << std::endl;
	}

	return 0;
}