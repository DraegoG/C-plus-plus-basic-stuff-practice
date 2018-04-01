#include<iostream>
#include<string>
#include<string.h>	//for strcpy()

int main()
{
	//Some string functions:
	string s1,s2,s3,s4,s5;
	s1.assign("hehehe how r u?");

	//insert(position, string)
	s2="Gautam";
	s2.insert(3,"Shala "); //prints: "GauShala tam"

	//replace(index_number, length, replace_with )
	s3="walle";
	s3.replace(1,2,"eco");	//prints: "wecole" and removes "al"

	s3.erase();	//deletes all the data in s3

	//find(string)	returns the index number if the string is present in from the called string else returns -1
	s4="Hi guys this is Draego";
	int num=s4.find("guys");	//returns 3(i.e. index of g). 

	/*For converting a string to char array*/
	s5="Astala vista";
	char ch[20];
	strcpy(ch,s5.c_str());

	//size();
	int sz=s5.size();

}