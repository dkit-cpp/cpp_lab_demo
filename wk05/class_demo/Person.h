#pragma once
#include <string>

class Person {

 protected:
  std::string firstname;
  std::string surname;
  int age;

 public:
  Person();
  Person(std::string the_firstname, std::string the_surname, int the_age);
  std::string fullname();
  ~Person();

};
