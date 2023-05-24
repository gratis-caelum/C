#include "Vehicle.h"
#ifndef Vehicle.h
// Vehicle class implementation

// default constructor
Vehicle::Vehicle() {
  manufacturerName = "";
  numCylinders = 0;
  owner = Person();
}
// constructor with values for three data member as argument 
Vehicle::Vehicle(string theManufacturerName, int theNumCylinders, const Person& theOwner) {
  manufacturerName = theManufacturerName;
  numCylinders = theNumCylinders;
  owner = theOwner;
}
// data member getter function
string Vehicle::getManufacturerName() const{
  return manufacturerName;
}

int Vehicle::getNumCylinders() const {
  return numCylinders;
}

Person Vehicle::getOwner() const {
  return owner;
}
// copy constructor
Vehicle::Vehicle(const Vehicle& theObject) {
  manufacturerName = theObject.manufacturerName;
  numCylinders = theObject.numCylinders;
  owner = theObject.owner;
}
// copy substitution operator
Vehicle& Vehicle::operator=(const Vehicle& rtSide) {
    if (this == &rtSide) // Check if objects are the same
    {
        return *this;
    }
    else
    {
    this -> manufacturerName = rtSide.manufacturerName;
    this ->numCylinders = rtSide.numCylinders;
    this -> owner = rtSide.owner;
    return *this;
    }
  }

#endif