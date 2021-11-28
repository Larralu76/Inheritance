#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string manny, int yrB)
{
	manufacturer = manny;
	yearBuilt = yrB;
}

string Vehicle::getManfact()
{
	return manufacturer;
}

void Vehicle::setYear(int year)
{
	yearBuilt = year;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << getManufact() << endl;
	cout << "Year Built: " << getYear() << endl;
}