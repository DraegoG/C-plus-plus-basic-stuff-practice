#include <fstream>      // std::ofstream
#include<iostream>
using namespace std;
int main () {

  ofstream outfile;
  outfile.open ("test.txt");

  outfile.write ("This is an apple",16);
  long pos = outfile.tellp();
  outfile.seekp (pos-7);
  outfile.write (" sam",4);

  outfile.close();

  return 0;
}
