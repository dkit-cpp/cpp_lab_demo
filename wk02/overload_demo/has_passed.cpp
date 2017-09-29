#include "has_passed.h"

bool has_passed(int mark) {
  if ( mark>100 ) {
    return false;
  }
  return mark>=40;
}

bool has_passed(int ca, int exam) {

  if ( has_passed(ca) && has_passed(exam) ) {
    return true;
  }
  else {
    return false;
  }
  
}
