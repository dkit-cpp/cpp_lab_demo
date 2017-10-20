#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main(int argc, char *argv[]) {

  Person p;
  /* Allocated immediately, not
     the same as Java! */

  cout << p.fullname() << endl;

  Employee p2;

  cout << p2.fullname() << endl;  
  
}
