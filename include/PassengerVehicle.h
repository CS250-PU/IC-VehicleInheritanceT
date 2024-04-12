//******************************************************************************
// File name:	 PassengerVehicle.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#pragma once

#include "Vehicle.h"
#include <string>
#include <iostream>

class PassengerVehicle : public Vehicle {
public:

  PassengerVehicle (const std::string &rcMake, int modelYear, double mileage,
    double price, double weight, double towingCapacity);

  double getWeight () const; 

  double getTowingCapacity () const; 

  void print (std::ostream& rcOut) const;

  friend std::ostream &operator<< (std::ostream &rcOut,
    const PassengerVehicle &rcPassengerVehicle);

private:
  double mWeight; 
  double mTowingCapacity; 
};