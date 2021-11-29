#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() :Vehicle()
{
	towingCap = 0;
}

Truck::Truck(string manny, int year, int tow) : Vehicle(manny, year)
{
	towingCap = tow;
}

int Truck::getTowCap()
{
	return towingCap;
}

void Truck::setTowCap(int tow)
{
	towingCap = tow;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}