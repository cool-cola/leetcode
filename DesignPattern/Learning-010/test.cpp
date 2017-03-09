#include "Car.h"
#include "Benz.h"
#include "BMW.h"
#include "Audi.h"

CCar* createCar()
{
	int CarID;
	printf("What car do you want to drive?");
	scanf_s("%d", &CarID);

	switch (CarID)
	{
	case 1: return new CBMW;
	case 2: return new CBenz;
	case 3: return new CAudi;
	default: return NULL;
	}
}

int main()
{
	CCar *pCar = createCar();
	if (pCar) pCar->driverV();

	return 0;
}