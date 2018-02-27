#include <iostream>

using namespace std;

int main() {
 cout<<"Enter the size of array you want to create: ";
 int *size = new int;
 cin>>(*size);
 int *ptr = new int[*size];   //dynamically creates an array
 cout<<endl<<"Enter the values in the array: "<<endl;
 for(int i=0;i<*size;i++)
 {
    cin>>ptr[i];
 }
 for(int i=0;i<*size;i++)
 {
    cout<<ptr[i]<<endl;
 }
 delete []ptr; //deletes the array and not the pointer
 return 0;
}
