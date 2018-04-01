#include <iostream>

using namespace std;

//Example of function template
template <class T>  //here 'T' is the generalised place holder or the data type
T add(T a,T b)
{
    return a+b;
}

//Example of templaet having different types of argument
template <class temp,class temp1>
temp multiply(temp a,temp1 b)
{
    return a*b;
}

int main() {
	cout<<add(5,6)<<endl;
	cout<<multiply(4.21,5);
}
