#include<iostream>
using namespace std;
//Using operator overloading to overload unary operator
class Negate
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
	Negate operator-()
	{
		Negate n;
		n.a = -a;
		n.b = -b;
		return n;
	}

};

int main()
{
	Negate n1,n2;
	n1.data(12,13);
	n2=-n1;	//We must call the operator as its nature is; Here 'n1' is calling the operator '-'; 
			//Replacement for "n1.operator-()"
	n2.display();
}