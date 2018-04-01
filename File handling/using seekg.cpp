#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //seekg() function is used to manipulate the 'get' pointer to point to a particular location in the file.
    ifstream fin;
    fin.open("new_file.txt");
    cout<<(char)fin.get()<<endl;    //pointing to the first index of the file(i.e index '0')
    cout<<fin.tellg()<<endl;

    //Now if suppose we want to see what data is present at the index location '8' :
    fin.seekg(8);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;

    //now suppose we want to see what data is present at the second last index of the file:
    fin.seekg(-2,ios_base::end);  //ios_base::beg  ->(points to the beginning of the file) //ios_base::cur ->(points to the current position)

    cout<<"data at second last index is: "<<(char)fin.get(); //NOTE: At the last position there is a termination character(not visible)

}

