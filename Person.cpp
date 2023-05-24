#include "Person.h"
#ifndef Person.h
// person class implementation

// defalut constructor 
Person::Person() {
  name = ""; 
}
// Initialization 
Person::Person(string theName) {
  name = theName;
}
// copy constructor 
Person::Person(const Person& theObject) {
  name = theObject.name;
}
// constructor with value for one data member as argument
string Person::getName() const { 
  return name;
}
// copy substitution constructor 
Person& Person::operator = (const Person& rtSide) {
  if (this == &rtSide) { // Check if objects are the same
        return *this; 
  }
  this -> name = rtSide.name;
  return *this;
}
// two overload operator 
istream& operator >> (istream& inStream, Person& personObject) {
  inStream >> personObject.name;
  return inStream;
}

ostream& operator << (ostream& outStream, const Person& personObject) {
  outStream << personObject.name;
  return outStream; 
} 
#endif