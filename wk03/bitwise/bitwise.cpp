#include <iostream>
#include <bitset>

using namespace std;

typedef unsigned short int numeric;

int main(void) {

  numeric x = 2;
  cout << bitset<8>(x) << endl;
  
  numeric y = 6;
  cout << bitset<8>(y) << endl;

  numeric ans = x & y;
  cout << bitset<8>(ans) << endl;
  
  cout << ans << endl;
  

}

