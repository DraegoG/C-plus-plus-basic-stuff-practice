//creating a copy constructor

#include<iostream>
using namespace std;
 
 class Area
 {
 	int l,b;
 	public:
 		Area(Area &a)	//here we cannot write ' Area(Area A)' because, then the 'Area A' inside the Area() will again call the copy constructor and it will create an infinite loop 
 		{
 			l=a.l;
 			b=a.b;
 		}
 		Area(int x,int y)
 		{
 			l=x;
 			b=y;
 		}
 };

 int main()
{
	Area a1(20,30);
	Area a2(a1);	//Calls the copy constructor
}