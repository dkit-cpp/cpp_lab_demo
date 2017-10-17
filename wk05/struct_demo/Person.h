#pragma once

/*
I don't recommend 
using namespace std (or anything)
in header files.
 */

struct Person {
  std::string firstname;
  std::string surname;
  int age;
};
