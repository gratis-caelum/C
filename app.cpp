#include <iostream>
#include <cassert>
#include "Truck.h"

// driver code
using std::cout;
using std::endl;
using std::cin;

void testPerson();
void testVehicle(Person& person);
void testTruck(Person& person);

int main() {
  
  char exit;
  do {
    testPerson();
    Person person1("Byeongchan Kim");
    testVehicle(person1);
    testTruck(person1);

    cout << "Input (Y/N)" << endl;
    cin >> exit;
  } while (exit == 'N');

  return 0;
}

void testPerson()
{
    // Person class test
    Person person1("Byeongchan Kim");
    Person person2;
    Person person3(person1);
    person2 = person1;

    cout << "Person 1: " << person1.getName() << endl;
    cout << "Person 2(assigned): " << person2.getName() << endl;
    cout << "Person 3(copy): " << person3.getName() << endl;
}

void testVehicle(Person& person)
{
     // Vehicle class test
    Vehicle vehicle1("Handai", 4, person);
    Vehicle vehicle2;
    Vehicle vehicle3(vehicle1);
    vehicle2 = vehicle1;

    cout << "vehicle1's Manufacturer: " << vehicle1.getManufacturerName() << endl;
    cout << "vehicle1's Num Cylinders: " << vehicle1.getNumCylinders() << endl;
    cout << "vehicle1's Owner: " << vehicle1.getOwner().getName() << endl;
    cout << "vehicle2(assigned)'s Manufacturer: " << vehicle2.getManufacturerName() << endl;
    cout << "vehicle2(assigned)'s Num Cylinders: " << vehicle2.getNumCylinders() << endl;
    cout << "vehicle2(assigned)'s Owner: " << vehicle2.getOwner().getName() << endl;
    cout << "vehicle3(copy)'s Manufacturer: " << vehicle3.getManufacturerName() << endl;
    cout << "vehicle3(copy)'s Num Cylinders: " << vehicle3.getNumCylinders() << endl;
    cout << "vehicle3(copy)'s Owner: " << vehicle3.getOwner().getName() << endl;
}

void testTruck(Person& person)
{
    // Truck class test
    Truck truck1("Handai", 8, person, 5000.0, 1000);
    Truck truck2;
    Truck truck3(truck1);
    truck2 = truck1;

    cout << "truck1's Manufacturer: " << truck1.getManufacturerName() << endl;
    cout << "truck1's Num Cylinders: " << truck1.getNumCylinders() << endl;
    cout << "truck1's Owner: " << truck1.getOwner().getName() << endl;
    cout << "truck1's Load Capacity: " << truck1.getLoadCapacity() << endl;
    cout << "truck1's Towing Capacity: " << truck1.getTowingCapacity() << endl;
    cout << "truck2(assigned)'s Manufacturer: " << truck2.getManufacturerName() << endl;
    cout << "truck2(assigned)'s Num Cylinders: " << truck2.getNumCylinders() << endl;
    cout << "truck2(assigned)'s Owner: " << truck2.getOwner().getName() << endl;
    cout << "truck2(assigned)'s Load Capacity: " << truck2.getLoadCapacity() << endl;
    cout << "truck2(assigned)'s Towing Capacity: " << truck2.getTowingCapacity() << endl;
    cout << "truck3(copy)'s Manufacturer: " << truck3.getManufacturerName() << endl;
    cout << "truck3(copy)'s Num Cylinders: " << truck3.getNumCylinders() << endl;
    cout << "truck3(copy)'s Owner: " << truck3.getOwner().getName() << endl;
    cout << "truck3(copy)'s Load Capacity: " << truck3.getLoadCapacity() << endl;
    cout << "truck3(copy)'s Towing Capacity: " << truck3.getTowingCapacity() << endl;
}
