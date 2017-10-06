#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

  // take in the name of a file
  if ( argc < 2 ) {
    cerr << "must specify filename" << endl;
    return 1;
  }
  string filename = argv[1];
  cout << "reading file " << filename << endl;

  ifstream input_file;
  input_file.exceptions( ifstream::failbit | ifstream::badbit );

  try {
    input_file.open(filename.c_str());
  
    int total = 0;
    int count = 0;
    while(!input_file.eof()) {
      string name;
      input_file >> name;
      int grade;
      input_file >> grade;
      if ( name.length() == 0 ) {
	break;
      }
      total += grade;
      ++count;
      cout << name << " " << grade << endl;
    }

    input_file.close();
  
    // compute the mean
    int average = total / count;
    cout << "AVERAGE IS " << average << endl;
  } catch ( const exception& e ) {
    cerr << "exception occured" << endl;
  } catch ( ... ) {
    cerr << "unknown exception occurred" << endl;
  }
}
