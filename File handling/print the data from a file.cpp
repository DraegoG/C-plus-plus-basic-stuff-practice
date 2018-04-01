#include <iostream>
#include <fstream>
using namespace std;
//program to print the data in the file
int main() {
    ifstream fin;
    char c;
    fin.open("new_file.txt"); //if this file doesn't exists, then the 'open()' function will automatically create it
    c=fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();
}
