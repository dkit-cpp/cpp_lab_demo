#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

  vector<int> v;

  // could fill in from file, keyboard etc... 
  v.push_back(2);
  v.push_back(10);
  v.push_back(29);

  
  
  // loop over the vector
  for ( int k = 0 ; k < v.size(); ++k ) {
    ++v[k];
    cout << v[k] << endl;
  }
  
}
