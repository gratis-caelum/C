#include "Vehicle.h"

Vehicle::Vehicle() : manufacturerName(""), numCylinders(0), owner() {}

Vehicle::Vehicle(const string& theManufacturerName, int theNumCylinders, const Person& theOwner)
    : manufacturerName(theManufacturerName), numCylinders(theNumCylinders), owner(theOwner) {}

Vehicle::Vehicle(const Vehicle& theObject)
    : manufacturerName(theObject.manufacturerName), numCylinders(theObject.numCylinders), owner(theObject.owner) {}

string Vehicle::getManufacturerName() const {
    return manufacturerName;
}

int Vehicle::getNumCylinders() const {
    return numCylinders;
}

Person Vehicle::getOwner() const {
    return owner;
}

Vehicle& Vehicle::operator=(const Vehicle& rtSide) {
    if (this == &rtSide) {
        return *this;
    }
    manufacturerName = rtSide.manufacturerName;
    numCylinders = rtSide.numCylinders;
    owner = rtSide.owner;
    return *this;
}
