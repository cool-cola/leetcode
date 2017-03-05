#include <iostream>

class CSingleton
{
public:
	static CSingleton * getInstance()
	{
		static CSingleton *pInstance = NULL;
		if (pInstance == NULL)
		{
			pInstance = new CSingleton;
		}
		return pInstance;
	}

private:
	CSingleton() {}
};