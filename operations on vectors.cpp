#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v;
	cout<<v.capacity()<<endl;		//prints the present capacity of the vector	
	
	/*Function to store value in the vector*/
	v.push_back(10);
	cout<<"New capacity"<<v.capacity()<<endl;

	/*Function to delete the last value from the vector*/
	v.pop_back();

	/*To give the total number of elements currently residing in the vector*/
	v.size(); 	//remember that capacity is the size of the vector while size() gives the number of elements residing in the vector 

	/*To delete all the elements in the vector*/
	v.clear();

	/*To return the value at a particular index number*/
	v.at(5);	//prints the value at 3rd index

	//To print the first value and the last value stored in the vector
	v.front(); 		//or v.begin();
	v.back();

	//Using iterator to insert a number in between
	vector <int>:: iterator it= v.begin();
	v.insert(it+2,11);	//It will insert "11" in the 2nd position i.e. at index "2nd"



}
