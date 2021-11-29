#pragma once

#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <iostream>

using namespace std;

class Vehicle
{
	string manufacturer;
	int yearBuilt;

public:
	Vehicle();
	Vehicle(string manny, int yr);
	string getManufact();
	int getYear();
	void setManufact(string sM);
	void setYear(int sy);
	void displayInfo();
};

#endif