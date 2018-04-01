#include<iostream>
using namespace std;

class Sample
{
	private:
	int a=20;	//Instance member variable
	static int b;	//static member variable or class variable; This can just be declared inside the class and must be defined outside it
public:
	
	int speak()
	{
		cout<<"Code worked fine";
	}
	
	Sample()
	{
	    b++;
	    cout<<b<<endl;
	}
};
int Sample::b=30;

int main()
{
	Sample s1,s2,s3;	//Here in the output you can see that the static variable was defined once and the increment takes place on that same variable 
}