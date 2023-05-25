#include "Truck.h"

Truck::Truck() : Vehicle(), loadCapacity(0.0), towingCapacity(0) {}

Truck::Truck(const string& theManufacturerName, int theNumCylinders, const Person& theOwner, double theLoadCapacity, int theTowingCapacity)
    : Vehicle(theManufacturerName, theNumCylinders, theOwner), loadCapacity(theLoadCapacity), towingCapacity(theTowingCapacity) {}

Truck::Truck(const Truck& theObject)
    : Vehicle(theObject), loadCapacity(theObject.loadCapacity), towingCapacity(theObject.towingCapacity) {}

double Truck::getLoadCapacity() const {
    return loadCapacity;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

Truck& Truck::operator=(const Truck& rtSide) {
    if (this == &rtSide) {
        return *this;
    }
    Vehicle::operator=(rtSide);
    loadCapacity = rtSide.loadCapacity;
    towingCapacity = rtSide.towingCapacity;
    return *this;
}
