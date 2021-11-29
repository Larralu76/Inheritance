#pragma once

#ifndef TRUCK_H_
#define TRUCK_H_
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck:public Vehicle
{
	int towingCap;

public:

	Truck();
	Truck(string manny, int yr, int tow);
	int getTowCap();
	void setTowCap(int setT);
	void displayInfo();
};

#endif
