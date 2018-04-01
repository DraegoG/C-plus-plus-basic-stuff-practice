#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
//program to print the data in the file
int main() {
    ofstream os;
    os.open("new_file.txt",ios::app); //if this file doesn't exists, then the 'open()' function will automatically create it
                                     //here we have opened the file in append mode
                                     // by default the file is opened in "ios:out" mode where the data is overwritten in the file
    getch();
    os<<"Hello world";
    getch();
    os.close();
}
