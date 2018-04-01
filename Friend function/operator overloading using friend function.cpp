#include<iostream>
using namespace std;
//Using friend function to overload binary operator
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
	friend Sum operator+(Sum ,Sum);	
 };

 Sum operator+(Sum s1,Sum s2);
	{
		Sum s;
		s.a = s1.a + s2.a;
		s.b = s1.b + s2.b;
		return s;
	}


int main()
{
	Sum m1,m2,m3;
	m1.data(10,20);
	m2.data(2,6);
	m3= m1 + m2;	//Here The definition is changed. Since a friend function can't be called using an object, so here it means
					//m3=operator+(m1,m2); 
	m3.display();
}