#include <iostream>
#include <string>
using namespace std;

class Parent
{
    int a;
    public:
    Parent(int l)
    {
        a=l;
        cout<<"value altered ...."<<a<<" ...."<<endl;
    }
};

class Child: public Parent
{
    public:
    Child(int x):Parent(x) //The constructor "Child" calls the constructor "Parent", the compiler automatically calls the default constructor of the parent class
    {
        cout<<"hehehe"<<endl;
    }
};

int main()
{
    Child obj(22);   
    //Parent::obj.Parent(21);
}
