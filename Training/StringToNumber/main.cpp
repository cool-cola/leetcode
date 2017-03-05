#include <sstream>
#include <string>
#include <iostream>

//**************************************************************************
//number convert to string
template<typename T>
void to_string(std::string& result, const T& value)
{
	std::ostringstream oss;
	oss << value;
	result = oss.str();
}

//**************************************************************************
//arbitrarily type to convert
template<typename out_type, typename in_type>
out_type convert(const in_type& value)
{
	std::stringstream stream;
	stream << value;
	out_type Result;
	stream >> Result;

	return Result;
}

template<class Type>
Type __stringToNum(const std::string& vString)
{
	std::istringstream ISS(vString);
	Type Number;
	ISS >> Number;

	return Number;
}

int main()
{
	std::string s("1");
	//to_string<double>(s, 10.5);
	
	std::cout << convert<double>(s.c_str()) << std::endl;
	std::cout << __stringToNum<double>(s) << std::endl;

	return 0;
}