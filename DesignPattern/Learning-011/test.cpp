#include "BMW.h"
#include "Audi.h"
#include "CarFactoryData.h"

int main()
{
	std::string CarSig = "Audi_SIG";
	CCar *pCar = dynamic_cast<CCar*>(CCarFactoryData::getOrCreateInstance()->createCar(CarSig));
	pCar->driverV();

	return 0;
}