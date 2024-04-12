//******************************************************************************
// File name:	 Vehicle.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#pragma once

#include <iostream>
#include <string> 

class Vehicle {
public:
  Vehicle (const std::string &rcMake = "", int modelYear = 0,
    double mileage = 0, double price = 0);

  std::string getMake () const;
  int getModelYear () const;
  double getMileage () const;
  double getPrice () const;

  void print (std::ostream &rcOutStream) const;

private:
  std::string mcMake;
  int mModelYear;
  double mMileage;
  double mPrice;
};