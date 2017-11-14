#include "CurrentAccount.h"
#include <iostream>

using namespace std;

CurrentAccount::CurrentAccount() {
  name = "Unknown";
  phone = "Unknown";
  balance = 0;
  overdraft = 0;
}

void CurrentAccount::printSummary() {
  Account::printSummary();
  cout << " overdraft: " << overdraft << endl;
}
