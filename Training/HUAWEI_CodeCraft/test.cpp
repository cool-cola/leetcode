#include "Config.h"

int main()
{
	std::string FileName = "input.txt";

	HWNET::CConfig Config;
	Config.readConfig(FileName);

	return 0;
}