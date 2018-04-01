//overloading of insertion(<<) and extraction(>>) operator
#include<iostream>
using namespace std;

class Value
{
private:
	int a,b;

public:

	void display()
	{
		cout<<" a = "<<a<<" b = "<<b;
	}
	friend ostream& operator<<(ostream&,Value );	//Since we cant make an object of ostream class therefore we are making a reference for it thaats why using "&" with it i.e. "ostream&"
	friend istream& operator>>(istream&,Value&);
};

 ostream& operator<<(ostream &dout, Value s)
 {
 	dout<<" a = "<<s.a<<" b = "<<s.b<<endl;	//can also use " cout<<" a = "<<s.a<<" b = "<<s.b<<endl; "
 	return (dout);
 }

 istream& operator>>(istream &iout,Value &s)		//Note the & operator here
 {
 	iout>>s.a>>s.b;		//can also use " cin>>s.a>>s.b; "
 	return (iout);
 }

int main()
{
	Value s1;
	cin>>s1;		//operator>>(cin,s1); 
	cout<<s1;		//operator<<(cout,s1);
}