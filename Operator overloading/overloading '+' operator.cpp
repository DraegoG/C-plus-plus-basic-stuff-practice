#include<iostream>
using namespace std;
//Using operator overloading to overload binary operator
class Sum
{
private:
	int a,b;
public:
	void data(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<" a = "<<a<<" b = "<<b;
	}
	Sum operator+(Sum s1)	//The 'operator' keyword is used to overload an operator;
	{
		Sum s;
		s.a = a + s1.a;
		s.b = b + s1.b;
		return s;
	}
 };


int main()
{
	Sum m1,m2,m3;
	m1.data(10,20);
	m2.data(2,6);
	m3= m1 + m2;
	m3.display();
}