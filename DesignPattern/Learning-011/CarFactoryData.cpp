#include "CarFactoryData.h"
#include "CarFactory.h"
#include "Car.h"

CCarFactoryData::CCarFactoryData()
{

}

CCarFactoryData::~CCarFactoryData()
{

}

//*********************************************************************************************
//Function
CCar* CCarFactoryData::createCar(const std::string& vSig)
{
	if (!__isCarFactoryRegistered(vSig)) return NULL;
	CCar *pCar = m_CarFactoryMap[vSig]->_createCarV();
	_ASSERT(pCar);
	pCar->setCarCreationSig(vSig);
	return pCar;
}

//*********************************************************************************************
//Function
void CCarFactoryData::registerCarFactory(CCarFactory<CCar> *vCarFactory, const std::string& vSig)
{
	_ASSERT(vCarFactory);
	m_CarFactoryMap[vSig] = vCarFactory;
}

//*********************************************************************************************
//Function
bool CCarFactoryData::__isCarFactoryRegistered(const std::string& vSig) const
{
	return m_CarFactoryMap.count(vSig) > 0;
}