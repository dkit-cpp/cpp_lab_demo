#include <iostream>
#include "bump_grade.h"
#include "has_passed.h"

using namespace std;

int main(void) {

  int nMarks = 8;
  int marks[] = { 40, 39, 29, 89, 90, 10, 41, 32 };

  for ( int k = 0 ; k < nMarks ; ++k ) {
    cout << marks[k] << " ";
    if ( bump_grade(marks[k]) ) {
      cout << "raised to " << marks[k];
    }
    if ( has_passed(marks[k]) ) {
      cout << " PASS ";
    }
    cout << marks[k] << endl;
  }
  
}
