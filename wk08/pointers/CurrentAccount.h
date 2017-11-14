#pragma once
#include <string>
#include "Account.h"

class CurrentAccount : public Account {

 public:
  int overdraft;
  CurrentAccount();
  void printSummary();
  
};

