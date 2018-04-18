#include<stdio.h>

int sum(int , int ); 
int sum(int *, int *);	
int sum(int &,int &);

int main()
{
	int a=10,b=20;
	sum(a, b);	 	//Function call by value
	sum(&a, &b);		//Function call by address
	sum(a, b);		//Function call by reference
}

int sum(int x, int y)
{
	cout<<x+y;
}

int sum(int *x, int *y)
{
	cout<< *x + *y;
}

int sum(int &x, int &y);
{
	cout<<x+y;
}
