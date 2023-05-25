#ifndef VEHICLE_H
#define VEHICLE_H

#include "Person.h"

class Vehicle {
public:
    Vehicle();
    Vehicle(const string& theManufacturerName, int theNumCylinders, const Person& theOwner);
    Vehicle(const Vehicle& theObject);
    string getManufacturerName() const;
    int getNumCylinders() const;
    Person getOwner() const;
    Vehicle& operator=(const Vehicle& rtSide);
private:
    string manufacturerName;
    int numCylinders;
    Person owner;
};

#endif // VEHICLE_H
