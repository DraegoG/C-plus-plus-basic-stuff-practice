#include<iostream>
using namespace std;

class Tax
{
private:
	int time;
	static float rate;

public:

	static int amount; 
	void setTime(int time)
	{
		this.time = time;
	}

	static void setRate(float r)	//Static member function
	{
		rate=r;
	}
}
float Tax:: rate =10.5f;	//Since the static member must be defined outside the class

int main()
{
	Tax t1;
	t1.amount=200;
	t1.setRate(12.5f);	//Calling the static member funtion using object; Since we cannot access the private member directly, therefore using the class object to call the member function to assign value to it
	Tax::setRate(15.4f);	//Calling the static member function without the object
}