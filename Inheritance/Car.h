#pragma once

#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
	int num_doors;

public:
	Car();
	Car(string manny, int yr, int doors);
	int getDoors();
	void setDoors(int doors);
	void displayInfo();
};

#endif
