#include "Person.h"
#include <iostream>

// Syntax: ClassName::MethodName

using namespace std;

Person::Person() {
  surname = "Other";
  firstname = "A.N.";
  age = 100;
  cout << "constructor called" << endl;
}

Person::Person(std::string the_firstname, std::string the_surname, int the_age) {
  surname = the_surname;
  firstname = the_firstname;
  age = the_age;
  cout << "constructor called" << endl;
}

string Person::fullname() {
  return surname + ", " + firstname;
}

Person::~Person() {
  // this is the destructor
  std::cout << "destructor called: " << firstname << std::endl;
}

