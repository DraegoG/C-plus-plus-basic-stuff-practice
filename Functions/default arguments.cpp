//In this program we wan to make a function "add()" which can add two as well as three numbers. 

#include<iostream.h>

int add(int,int,int=0); //here we have given the third variable a default value; We can assign any value as default value(i.e. 1,2,3..,-4,-10 etc)

//int add(int, int=0,int)	//error
//int add(int, int=0, int=1)	//correct implementation of the above function

int main()
{
	int a,b,c,opt;
	cout<<"How many numbers you want to add? :";
	cin>>opt;
	switch(opt)
	{
		case 2:
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			add(a,b);
			break;
		case 3:
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			cout<<"Enter the third number: ";
			cin>>c;
			add(a,b,c);
			default:
			cout<<"Invalid option; Better luck next time";
	}
}

int add(int a,int b,int c)
{
	cout<<(a+b+c);
}