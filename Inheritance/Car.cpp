#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car() : Vehicle()
{
	numDoors = 0;
}

Car::Car(string manny, int year, int doors) : Vehicle(manny, year)
{
	numDoors = doors;
}

int Car::getDoors()
{
	return numDoors;
}

void Car::setDoors(int doors)
{
	numDoors = doors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << endl;
}