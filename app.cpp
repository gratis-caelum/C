#include <iostream>
#include "Truck.h"

// driver code
using std::cout;
using std::endl;
using std::cin;
int main() {
  
  char exit;
  do {
  
  // Person class test
  Person person1("Byeongchan Kim");
  Person person2;
  Person person3(person1);
  person2 = person1;

  cout << "Person 1: " << person1.getName() << endl;
  cout << "Person 2: " << person2.getName() << endl;
  cout << "Person 3: " << person3.getName() << endl;

  // Vehicle class test
  Vehicle vehicle1("Handai", 4, person1);
  Vehicle vehicle2;
  Vehicle vehicle3(vehicle1);
  vehicle2 = vehicle1;

  cout << "vehicle1's Manufacturer: " << vehicle1.getManufacturerName() << endl;
  cout << "vehicle1's Num Cylinders: " << vehicle1.getNumCylinders() << endl;
  cout << "vehicle1's Owner: " << vehicle1.getOwner().getName() << endl;
  cout << "vehicle2's Manufacturer: " << vehicle2.getManufacturerName() << endl;
  cout << "vehicle2's Num Cylinders: " << vehicle2.getNumCylinders() << endl;
  cout << "vehicle2's Owner: " << vehicle2.getOwner().getName() << endl;
  cout << "vehicle3's Manufacturer: " << vehicle3.getManufacturerName() << endl;
  cout << "vehicle3's Num Cylinders: " << vehicle3.getNumCylinders() << endl;
  cout << "vehicle3's Owner: " << vehicle3.getOwner().getName() << endl;

  // Truck class test
  Truck truck1("Handai", 8, person3, 5000.0, 1000);
  Truck truck2;
  Truck truck3(truck1);
  truck2 = truck1;

  cout << "truck1's Manufacturer: " << truck1.getManufacturerName() << endl;
  cout << "truck1's Num Cylinders: " << truck1.getNumCylinders() << endl;
  cout << "truck1's Owner: " << truck1.getOwner().getName() << endl;
  cout << "truck1's Load Capacity: " << truck1.getLoadCapacity() << endl;
  cout << "truck1's Towing Capacity: " << truck1.getTowingCapacity() << endl;
  cout << "truck2's Manufacturer: " << truck2.getManufacturerName() << endl;
  cout << "truck2's Num Cylinders: " << truck2.getNumCylinders() << endl;
  cout << "truck2's Owner: " << truck2.getOwner().getName() << endl;
  cout << "truck2's Load Capacity: " << truck2.getLoadCapacity() << endl;
  cout << "truck2's Towing Capacity: " << truck2.getTowingCapacity() << endl;
  cout << "truck3's Manufacturer: " << truck3.getManufacturerName() << endl;
  cout << "truck3's Num Cylinders: " << truck3.getNumCylinders() << endl;
  cout << "truck3's Owner: " << truck3.getOwner().getName() << endl;
  cout << "truck3's Load Capacity: " << truck3.getLoadCapacity() << endl;
  cout << "truck3's Towing Capacity: " << truck3.getTowingCapacity() << endl;

  cout << "Input (Y/N)" << endl;
  cin >> exit;
  }while (exit == 'N');
  return 0;
}