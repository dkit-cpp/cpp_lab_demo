#include <iostream>
#include "has_passed.h"

using namespace std;

int main(void) {

  int nMarks = 5;
  int ca_marks[] = { 40, 39, 29, 89, 90 };
  int exam_marks[] = { 50, 51, 20, 100, 60 };

  for ( int k = 0 ; k < nMarks ; ++k ) {
    if ( has_passed(ca_marks[k], exam_marks[k])) {
      cout << ca_marks[k] << " " << exam_marks[k] << endl;
    }
  }
  
}
