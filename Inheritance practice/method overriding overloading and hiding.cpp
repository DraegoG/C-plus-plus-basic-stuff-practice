#include <iostream>

using namespace std;

class A
{
    int a;
    public:
    int f1()
    {
        cout<<"Function f1 called"<<endl;
    }
    int f1(int x);
    void f2()
    {
        cout<<"Function of parent";
    }
    
};

class B: public A
{
    public :
    void f2(int x,int y)      //Example of method hiding(since here method is overridden but parameters are also changed)
    {
        cout<<"Function of child";
    }
};

int main() {
    B obj;
    obj.f1();       //First checks in the base class(i.e class 'B') then checks in parent class
    //obj.f2();      //Generates an error because is the compiler finds this function name in the base class(irrespective of the arguments passed) then it does not checks for this function name in the parent class
    
    obj.f2(23,31);
    
}
