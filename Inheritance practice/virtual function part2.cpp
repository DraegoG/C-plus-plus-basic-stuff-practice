#include <iostream>

using namespace std;

class A
{ //Since here is a virtual function therefore automatically 
    //a pointer _vptr will be formed. The pointer _vptr points to a static array
    // 'vtable' which contains the address of each virtual function in it
    
    public:
    void f1()
    {
        cout<<"Function f1 of parent class called"<<endl;
    }
    virtual void f2()
    {
        cout<<"F2 of parent"<<endl;
    }
    void f3()
    {
        cout<<"F3 of parent"<<endl;
    }
    virtual void f4()
    {
        cout<<"F4 of parent"<<endl;
    }
    
};

class B: public A
{
    public :
    void f1()
    {
        cout<<"f1 of child class"<<endl;
    }
    void f2()
    {
        cout<<"F2 of child"<<endl;
    }
    
    void f4(int x,int y)  //Example of method hiding(since here although the method is overridden but parameters are also changed)
    {
        cout<<"F4 of child. The value of x: "<<x<<" and y: "<<y<<endl;
    }
};

int main() {
    A *p;
    B obj_B;
    p=&obj_B;
    p->f1();    //calls f1() of class 'A' due to early binding     
    p->f2();    //calls f2() of class 'B' due to late binding
    p->f3();    //calls f3() of class 'A' due to late binding(and since f3() is not overriden in class 'B')
    p->f4();    //calls f4() of class 'A' due to late binding
    //p->f4(12,13);   //gives an error since here early binding is done by the compiler but f4(int x, int y) having parameters is not in base class
    
}
