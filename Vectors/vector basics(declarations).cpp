#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v;		//empty vector
	vector <string> vs {"Abhishek","Gaur"};		//new standard of initialising a vector,not allowed in previous versions of GCC	
	vector <char> vc(10);	//vector having capacity 10 to store characters.
	vector <char> vc1(10,'a')	//creates a vector of capacity 10 and having 'a' in each block 
	//notice the difference between {} and ()
	// [] is called subscript operator

	//accessing the value of the vector using -> [] (subscript operator)
	cout<<vs[1];	//prints "Gaur"
}