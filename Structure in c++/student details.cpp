#include<iostream>
#include<string.h>
using namespace std;

struct student	//Global declaration of structure
{
	int age;
	char name[15];
	char UID[10];
}s1;

student s2;

int main()
{
	student s3;		//struct student s3 -> old method of writting in C language(it is also acceptable in C++)
	student s1 = {20,"Anna","15BCS1100"};
	//s2={21,"Chinna","15BCS1212"};
	//s3={20,"Muruganna","15BCS1201"};
	s2.age=21;
	
	//s2.name="Chinna"; //But this is totally wrong and gives lvalue error,because 's2.name' represents 
					  //the pointer 'name' (or its address)which is not possible as on the left hand side there must be a variable and not a constant.  
	strcpy(s2.name,"Chinna");	//Here it is possible because 'strcpy' takes the address as its first parameter
	strcpy(s2.UID,"15BCS1212");

	s3=s2;	//Since both of them are of same type  
    cout<<s1.age<<s1.name<<s1.UID;
}