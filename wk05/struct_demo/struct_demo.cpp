#include <iostream>
#include "Person.h"

using namespace std;

int main(void) {
  Person p;
  p.surname = "Smith";
  p.firstname = "John";
  p.age=74;

  cout << p.firstname << " is aged " << p.age << endl;
}
