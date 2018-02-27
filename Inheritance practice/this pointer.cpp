#include<iostream>
using namespace std;

class A
{
    int a,b,c;
    public:
    void setDimension(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getDimension()
    {
        cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
        cout<<"The address of 'this' pointer is: "<<this;
    }
};

int main()
{
    A obj;
    obj.setDimension(12,13,14);
    obj.getDimension();
}
