#pragma once
#include <string>
#include "Person.h"

class Employee : public Person {

 private:
  std::string title;

 public:
  Employee();
  std::string fullname();
  
};
