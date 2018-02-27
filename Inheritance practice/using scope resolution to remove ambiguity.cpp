// Example program
#include <iostream>
#include <string>
using namespace std;
class A
{

    public:
    void display()
    {
        cout<<"class A calling"<<endl;
    }

};

class B
{
    public:
    void display()
    {
        cout<<"class B calling"<<endl;

    }
};

class class_A: public A,public B
{

};

int main()
{
    class_A obj;
    obj.A::display();
    obj.B::display();
}
