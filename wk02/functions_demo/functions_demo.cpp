#include <iostream>
#include "has_passed.h"

using namespace std;

int main(void) {

  int nMarks = 5;
  int marks[] = { 40, 39, 29, 89, 90 };

  for ( int k = 0 ; k < nMarks ; ++k ) {
    if ( has_passed(marks[k])) {
    cout << marks[k] << endl;
    }
  }
  
}
