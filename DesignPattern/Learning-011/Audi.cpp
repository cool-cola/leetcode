#include "Audi.h"
#include <iostream>
#include "CarFactory.h"

CCarFactory<CAudi> TheCreator("Audi_SIG");

CAudi::CAudi()
{

}

CAudi::~CAudi()
{

}

//*********************************************************************************************
//Function
void CAudi::driverV()
{
	std::cout << "Driving Audi..." << std::endl;
}