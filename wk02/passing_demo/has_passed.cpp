#include "has_passed.h"

bool has_passed(const int& mark, int pass_mark) {
  if ( mark>100 ) {
    return false;
  }
  return mark>=pass_mark;
}

