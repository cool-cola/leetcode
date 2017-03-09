#include "DBUtility.h"
#include "CustomDAO.h"
#include "OracleUtility.h"
#include "MySQLUtility.h"

int main()
{
	CCustomDAO Custom;

	Custom.setDBUtility(new CMySQLUtility);
	Custom.doSomething();

	return 0;
}