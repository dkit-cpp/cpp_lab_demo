#pragma once
#include <string>

class Account {

 public:
  std::string name;
  std::string phone;
  int balance;
  Account();
  virtual void printSummary();
  
};

