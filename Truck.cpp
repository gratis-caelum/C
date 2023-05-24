#include <iostream>
#include "Truck.h"
#ifndef Truck.h
// Truck class implementation

// default constructor
Truck::Truck() : Vehicle() {
  loadCapacity = 0.0;
  towingCapacity = 0;
}
// constructor with values for five data member as argument 
Truck::Truck(string theManufacturerName, int theNumCylinders, const Person& theOwner, double theLoadCapacity, int theTowingCapacity) : Vehicle(theManufacturerName, theNumCylinders, theOwner) {
  loadCapacity = theLoadCapacity;
  towingCapacity = theTowingCapacity;
}
// new data member's getter function
double Truck::getLoadCapacity() const {
  return loadCapacity;
}

int Truck::getTowingCapacity() const {
  return towingCapacity;
}
// copy constructor
Truck::Truck(const Truck& theObject) : Vehicle(theObject) {
  loadCapacity = theObject.loadCapacity;
  towingCapacity = theObject.towingCapacity;
}
// copy substitution constructor
Truck& Truck::operator=(const Truck& rtSide) {
  if (this == &rtSide) { // Check if objects are the same.
      return *this;
  }
  else 
  {
    this -> Vehicle::operator=(rtSide);
    this -> loadCapacity = rtSide.loadCapacity;
    this -> towingCapacity = rtSide.towingCapacity;
    return *this;
  }
}

#endif
