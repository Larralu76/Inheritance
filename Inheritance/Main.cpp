//Laura Luke
//Novemeber 28, 2021
//CIS 1202 501
//Inheritence

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string manny;
	int yr;
	int doors;
	int towingCap;

	cout << "Vehicle Program: " << endl;
	cout << endl;

	cout << "Vehicle: " << endl;

	cout << "Enter the Manufacturer: ";
	getline(cin, manny);

	cout << "Enter the year built: ";
	cin >> yr;

	Vehicle vehicle(manny, yr);
	vehicle.displayInfo();
	cout << endl;
	
	cout << "Car: " << endl;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the Manfacturer: ";
	getline(cin, manny);

	cout << "Enter the Year Built: ";
	cin >> yr;
	
	cout << "Enter the number of doors: ";
	cin >> doors;

	Car car(manny, yr, doors);
	car.displayInfo();

	cout << endl << "Truck: " << endl;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the Manfacturer: ";
	getline(cin, manny);

	cout << "Enter the Year Built: ";
	cin >> yr;

	cout << "Enter the Towing Capacity: ";
	cin >> towingCap;

	Truck truck(manny, yr, towingCap);
	truck.displayInfo();

	return 0;
}