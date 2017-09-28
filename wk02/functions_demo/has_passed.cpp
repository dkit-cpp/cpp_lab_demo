#include "has_passed.h"

bool has_passed(int mark) {
  if ( mark>100 ) {
    return false;
  }
  return mark>=40;
}
