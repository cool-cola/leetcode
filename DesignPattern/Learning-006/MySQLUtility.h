#pragma once
#include <iostream>
#include "DBUtility.h"

class CMySQLUtility : public CDBUtility
{
public:
	virtual void buildConnection() override
	{
		std::cout << "Building connection to MySQL..." << std::endl;
	}
};