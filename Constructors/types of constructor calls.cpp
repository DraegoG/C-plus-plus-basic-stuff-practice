#include<iostream>
using namespace std;
 //showing constructor overloading
 //If any one constructor is made by the user then the default constructor is not made by the compiler
class Call
{
private:
	int x,y,z;
public:
	Call()
	{
		x=0,y=0,z=0;
		cout<<"zero value initialised for all"<<endl;
	}
	Call(int a)		//Parameterized constructor
	{
		x=a;
	}
	Call(int a, int b)		
	{
		x=a;
		y=b;
		cout<<"Value intialized of two variables"<<endl;
	}
	Call(int a, int b, int c)
	{
		x=a;
		y=b;
		z=c;
		cout<<"Value initialised for three variables"<<endl;
	}
};

int main()
{
	Call c1;
	Call c2(1,5); 		//calling third one
	Call c3(3,15,40);
	Call c4=Call(12,13);	//This is also possible, but here it doesn't means that the returned value is saved in 'c4' since constructor doesn't returns a value
	Call c5=21; 		//Calling the second one 
}