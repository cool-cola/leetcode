#include "Config.h"
#include <fstream>
#include <vector>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

using namespace HWNET;

CConfig::CConfig()
{

}

CConfig::~CConfig()
{

}

//************************************************************************************************
//Function:
bool CConfig::readConfig(const std::string& vFileName)
{
	_ASSERT(!vFileName.empty());

	std::fstream File(vFileName.c_str());
	if (!File.is_open()) return false;

	std::string TempString;
	std::vector<std::vector<std::string>> RawDataSet;
	unsigned int Index = 0;
	while (!File.eof())
	{
		getline(File, TempString);
		if (TempString[0] == '\0') continue;
		std::vector<std::string> SplitString;
		boost::split(SplitString, TempString, boost::is_any_of(" "));

		RawDataSet.push_back(SplitString);
	}
	File.close();

	return true;
}
