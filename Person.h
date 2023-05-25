#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person {
public:
    Person();
    Person(const string& theName);
    Person(const Person& theObject);
    string getName() const;
    Person& operator=(const Person& rtSide);
    friend istream& operator>>(istream& inStream, Person& personObject);
    friend ostream& operator<<(ostream& outStream, const Person& personObject);
private:
    string name;
};

#endif // PERSON_H
