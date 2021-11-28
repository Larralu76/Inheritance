#pragma once

#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <iostream>

using namespace std;

class Vehicle
{
	string manufacturer;
	int year_built;

public:
	Vehicle();
	Vehicle(string manny, int yr);
	string getManufact();
	int getYear();
	void setManufact(string sM);
	void displayInfo();
};

#endif