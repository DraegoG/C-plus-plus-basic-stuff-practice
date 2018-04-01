#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //seekp() function is used to point the 'put' pointer to a particular location in the file
    ofstream fos;
    fos.open("new_file.txt"); //opening in "update" mode
    cout<<"Current position of 'put' : "<<fos.tellp();

    //Now suppose we want to add some text in between "Hello" and "world"
    fos.seekp(6,ios_base::beg);
    fos.write(" New and modified ",18);
    cout<<"\nNew position of 'put' : "<<fos.tellp();
    fos.close();

}
