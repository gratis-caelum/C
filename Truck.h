#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck();
    Truck(const string& theManufacturerName, int theNumCylinders, const Person& theOwner, double theLoadCapacity, int theTowingCapacity);
    Truck(const Truck& theObject);
    double getLoadCapacity() const;
    int getTowingCapacity() const;
    Truck& operator=(const Truck& rtSide);
private:
    double loadCapacity;
    int towingCapacity;
};

#endif // TRUCK_H
