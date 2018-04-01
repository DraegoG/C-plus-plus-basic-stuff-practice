#include<iostream>
using namespace std;

class Eve
{
private:
	int a,b,c;
public:
	void data(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<" a= "<<a<<" b= "<<b;
	}
	friend void sum(Eve);
};

void sum(Eve e1)	//Can't access data directly that's why we are calling the data with objects
//	We can define it inside the class too
{
	cout<<"The sum is: "<<e1.a + e1.b + e1.c;
}

int main()
{
	Eve e;
	e.data(12,13);
	sum(e);		//Called without an object
} 