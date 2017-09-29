#include "bump_grade.h"

bool bump_grade(int& mark) {
  if ( ( mark > 30 ) && ( mark < 40 ) ) {
    mark = 40;
    return true;
  } else {
    return false;
  }
}
