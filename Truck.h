#include "Vehicle.h"
// Vehicle class interface

class Truck : public Vehicle {
public:
  Truck();
  Truck(string theManufacturerName, int theNumCylinders, const Person& theOwner, double theLoadCapacity, int theTowingCapacity);
  double getLoadCapacity() const;
  int getTowingCapacity() const;
  Truck(const Truck& theObject);
  Truck& operator=(const Truck& rtSide);

private:
  double loadCapacity;
  int towingCapacity;
};

