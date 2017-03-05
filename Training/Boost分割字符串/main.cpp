#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

std::vector<std::string> SplitStr(const std::string& vTempSequence)
{
	std::vector<std::string> SplitString;
	boost::split(SplitString, vTempSequence, boost::is_any_of(","));
	return SplitString;
}

int main()
{
	std::string ss("i,love,you");
	std::vector<std::string> result;

	result = SplitStr(ss);

	for (unsigned int i=0; i<result.size(); ++i)
	{
		std::cout << result[i] << std::endl;
	}

	return 0;
}