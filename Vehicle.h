#include "Person.h"
// Vehicle class interface

using std::string;
class Vehicle {
public:
  Vehicle();
  Vehicle(string theManufacturerName, int theNumCylinders, const Person& theOwner);
  string getManufacturerName() const;
  int getNumCylinders() const;
  Person getOwner() const;
  Vehicle(const Vehicle& theObject);
  Vehicle& operator=(const Vehicle& rtSide);

private:
  string manufacturerName; 
  int numCylinders;
  Person owner;
};

