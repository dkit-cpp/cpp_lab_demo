#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  cout << "Employee constructor called" << endl;
  title = "Unknown as yet";
}

std::string Employee::fullname() {
  return surname + ", " + firstname + "(" + title + ")";
}
