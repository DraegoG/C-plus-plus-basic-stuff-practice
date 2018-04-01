#include<iostream>
using namespace std;

//here we are accessing the private data members of two classes using the same friend function
class RadiusSqr;	//declaring here so as to be used in the friend function inside the 'Pi' class
class Pi
{
	float pie=3.14;
public:
	void valueofpi()
	{
		cout<<"The value of pi is: "<<pie<<endl;
	}
	void setpie(float);
	friend void circlearea(Pi,RadiusSqr);
};

void Pi::setpie(float p)
{
    pie=p;
}

class RadiusSqr
{
	int rad;
public:
	void setrad(int );
	friend void circlearea(Pi,RadiusSqr);

};
void RadiusSqr:: setrad(int r)
{
	rad=r;
}

void circlearea(Pi obj1, RadiusSqr obj2)
{
	cout<<"The area of circle is: "<<obj1.pie * obj2.rad * obj2.rad;
}

int main()
{
	Pi p;
	//p.setpie(3.142);
	RadiusSqr r1;
	r1.setrad(2);
	circlearea(p,r1);
}