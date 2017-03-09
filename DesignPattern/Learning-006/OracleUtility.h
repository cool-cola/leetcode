#pragma once
#include <iostream>
#include "DBUtility.h"

class COracleUtility : public CDBUtility
{
public:
	virtual void buildConnection() override
	{
		std::cout << "Building connection to Oracle..." << std::endl;
	}
};