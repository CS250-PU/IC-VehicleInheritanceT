//******************************************************************************
// File name:	 Truck.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#pragma once

#include "../include/Vehicle.h"
#include <string>
#include <iostream>

class Truck : public Vehicle {
public:
  enum Doors { TWO = 2, FOUR = 4, FIVE = 5 };

  Truck (const std::string &rcMake, int modelYear, double mileage, double price,
    Doors NumberOfDoors);

  friend std::ostream &operator<< (std::ostream &rcOut,
    const Truck& rcTruck);

  std::ostream &print (std::ostream & rcOut) const;

private:
  Doors mNumberOfDoors;
};