# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    //tellg tells the index number where the 'get' pointer points to
    //tellp tells the index number where the 'put' pointer points to
    ofstream fos;
    ifstream fis;
    fis.open("new_file.txt",ios::in);
    int pos1=fis.tellg();
    cout<<"Currently the 'get' pointer is pointing to index number : "<<pos1<<endl;

    fos.open("new_file.txt",ios::app);
    int pos2=fos.tellp();
    cout<<"Currently 'put' pointer is at: "<<pos2<<endl;
    //Here you will notice that although the 'put' pointer is pointing at the end of the file, but shows the index '0'. It is
    //because the 'put' pointer ignores the residing content in the file and starts after the end of that content, as index number '0'.
    fos<<" This is for the use of tellg and tellp ";
    pos2=fos.tellp();
    cout<<"Currently the 'put' pointer is pointing to index number : "<<pos2;

    fis.close();
    fos.close();
    return 0;
}
