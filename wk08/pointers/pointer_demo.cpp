#include <iostream>
#include "Account.h"
#include "CurrentAccount.h"

using namespace std;

int main(void) {

  Account *account = 0;

  CurrentAccount c;
  c.name = "Mary";
  c.balance = 1000;

  account = &c;

  account->printSummary();
  
}
