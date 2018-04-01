//Making a function which takes the values for the user and returns a structure

#include<iostream>
#include<string.h>
using namespace std;

struct student	//Global declaration of structure
{
	int age;
	char name[15];
	char UID[10];
};
//function declaration
int display(student);
student enter_details();


int main()
{
    student s1;
	s1=enter_details();
	display(s1);
}

int display(student s)
{
    cout<<s.age<<"\t"<<s.name<<"\t"<<s.UID<<endl;
}

student enter_details()
{
	student s;
	cout<<"Enter the details of the student: \nAge: ";
	cin>>s.age;
	cin.ignore();

	cout<<"Name: ";
	cin.getline(s.name,15);

	cout<<"UID: ";
	cin.getline(s.UID,10);

	return(s);
}

