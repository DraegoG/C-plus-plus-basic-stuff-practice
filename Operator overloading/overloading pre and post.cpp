#include<iostream>
using namespace std;
//Using operator overloading to overload pre and post increment operator
class Integer
{
private:
	int a;
public:
	void data(int x)
	{
		a=x;
	}
	void display()
	{
		cout<<" a = "<<a;
	}
	Integer operator++()
	{
		Integer i;
		i.a = ++a ;
		return i;
	}

	Integer operator++(int)	//In c++ if we want to overload the post increment operator then we have to write 'int' inside its arguments.
	{
		Integer i;
		i.a = a++ ;
		return i;
	}

};

int main()
{
	Integer r1,r2,r3;
	r1.data(5);
	r2= ++r1;	//or can be written as "r1.operator++"
	r3= r1++;	//post increment
	r1.display();
	r2.display();
	r3.display();


}
