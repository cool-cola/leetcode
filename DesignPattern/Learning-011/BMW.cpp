#include "BMW.h"
#include <iostream>
#include "CarFactory.h"

CCarFactory<CBMW> TheCreator("BMW_SIG");

CBMW::CBMW()
{

}

CBMW::~CBMW()
{

}

//*********************************************************************************************
//Function
void CBMW::driverV()
{
	std::cout << "Driving BMW..." << std::endl;
}