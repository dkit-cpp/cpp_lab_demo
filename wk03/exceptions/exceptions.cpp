#include <iostream>
#include <fstream>

using namespace std;

int main(void) {

  ifstream file;
  file.exceptions( ifstream::failbit | ifstream::badbit );

  try {
    file.open("test.txt");
    while (!file.eof()) {
      string line;
      file >> line;
      cout << line << endl;
    }
    file.close();
  }
  catch ( const ifstream::failure& e ) {
    cout << "exception occurred!" << endl;
  }

  
}
