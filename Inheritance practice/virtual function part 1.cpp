#include <iostream>

using namespace std;

class A
{
    int a;
    public:
    int f1()
    {
        cout<<"Function f1 of parent class called"<<endl;
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
    int f1()
    {
        cout<<"f1 of child class";
    }
    void f2(int x,int y)      //Example of method hiding(since here method is overridden as well as parameters are also changed)
    {
        cout<<"Function of child";
    }
};

int main() {
    A *p,obj;
    B obj_B;
    p=&obj_B;
    p->f1();     //here due to early binding the f1() of parent class will
                 //be called since at compile time the address is not been assigned 
                 //to the pointer 'p'. And thus due to early binding the compiler focuses
                 //on the type of the pointer 'p'(i.e. it is of type 'A')
}

