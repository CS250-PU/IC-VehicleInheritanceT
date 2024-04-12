//******************************************************************************
// File name:	 PassengerVehicle.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#include <iostream>
#include "../include/PassengerVehicle.h"

PassengerVehicle::PassengerVehicle (const std::string &rcMake, int modelYear,
															double mileage, double price,
															double weight,
														  double towingCapacity) :
															Vehicle (rcMake, modelYear, mileage, price),
															mWeight(weight), 
															mTowingCapacity(towingCapacity){
}

double PassengerVehicle::getWeight () const {
	return mWeight;
}

double PassengerVehicle::getTowingCapacity () const {
	return mTowingCapacity; 
}

void PassengerVehicle::print (std::ostream &rcOut) const {
	Vehicle::print (rcOut);
	rcOut << ", Weight: " << mWeight << ", Towing Capacity : "
		<< mTowingCapacity;;
}

std::ostream &operator<< (std::ostream &rcOut,
									        const PassengerVehicle& rcPassengerVehicle) {
	rcPassengerVehicle.print (rcOut);
	return rcOut;
}