//******************************************************************************
// File name:	 Truck.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//******************************************************************************
#include "../include/Truck.h"
#include <iostream>

Truck::Truck (const std::string &rcMake, int modelYear, double mileage, 
              double price, Doors numberOfDoors) : 
              Vehicle (rcMake, modelYear, mileage, price) {
	mNumberOfDoors = numberOfDoors;
}

std::ostream & Truck::print (std::ostream& rcOut) const {
	Vehicle::print (rcOut);
	rcOut << ", Number of Doors: " << mNumberOfDoors;
  return rcOut;
}

std::ostream &operator<< (std::ostream& rcOut, const Truck &rcTruck) {
	rcTruck.print (rcOut);
	return rcOut;
}