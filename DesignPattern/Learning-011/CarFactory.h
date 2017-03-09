#pragma once
#include "CarFactoryData.h"

template<class TDerivedCar>
class CCarFactory
{
public:
	CCarFactory(const std::string& vSig)
	{
		CCarFactoryData::getOrCreateInstance()->registerCarFactory(
			reinterpret_cast<CCarFactory<CCar>*>(this), vSig);
	}
	~CCarFactory() {}

protected:
	virtual CCar* _createCarV() { return new TDerivedCar; }
	
	friend class CCarFactoryData;
};