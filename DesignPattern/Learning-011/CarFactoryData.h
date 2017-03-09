#pragma once
#include <string>
#include <map>

class CCar;

template<class TDerivedCar>
class CCarFactory;

class CCarFactoryData
{
public:
	~CCarFactoryData();

	static CCarFactoryData* getOrCreateInstance()
	{
		static CCarFactoryData* pCarFactoryData = NULL;
		if (!pCarFactoryData)
		{
			pCarFactoryData = new CCarFactoryData;
		}
		return pCarFactoryData;
	}

	CCar* createCar(const std::string& vSig);

	void registerCarFactory(CCarFactory<CCar> *vCarFactory, const std::string& vSig);

protected:
	CCarFactoryData();

private:
	std::map<std::string, CCarFactory<CCar>*> m_CarFactoryMap;

	bool __isCarFactoryRegistered(const std::string& vSig) const;
};