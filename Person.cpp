#include "Person.h"
// person class implementation
using namespace std;
// defalut constructor 
Person::Person() {
  name = ""; 
}
// copy constructor
Person::Person(string theName) {
  name = theName;
}
// hmm
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

istream& operator >> (istream& inStream, Person& personObject) {
  inStream >> personObject.name;
  return inStream;
}

ostream& operator << (ostream& outStream, const Person& personObject) {
  outStream << personObject.name;
  return outStream;
} 
