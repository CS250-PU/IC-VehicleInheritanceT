//******************************************************************************
// File name:	 Vehicle.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#include "../include/Vehicle.h"
#include <string>
#include <iostream>

Vehicle::Vehicle (const std::string &rcMake, int modelYear, double mileage,
	double price) {
	mcMake = rcMake;
	mModelYear = modelYear;
	mMileage = mileage;
	mPrice = price;
}

std::string Vehicle::getMake () const {
	return mcMake;
}

int Vehicle::getModelYear () const {
	return mModelYear;
}

double Vehicle::getMileage () const {
	return mMileage; ;
}

double Vehicle::getPrice () const {
	return mPrice;
}

std::ostream & Vehicle::print (std::ostream &rcOutStream) const {
	rcOutStream << "Make: " << mcMake << ", Model Year: " << mModelYear
		<< ", Mileage: " << mMileage << ", Price: " << mPrice;
  return rcOutStream;
}