#include "Account.h"
#include <iostream>

using namespace std;

Account::Account() {
  name = "Unknown";
  phone = "Unknown";
  balance = 0;
}

void Account::printSummary() {
  cout << name << " = " << balance << endl;
}
