//program to print the initials of your name using ignore() function
#include<iostream>
using namespace std;
 int main()
 {
     char first,last;
     first=cin.get();
     cin.ignore(120,' '); //ignore the text until 'space' is there
     last=cin.get();
     int f=(int)first,l=(int)last;
     if(f>96) f-=32;
     if(l>96) l-=32;
     first=(char)f;
     last=(char)l;
     cout<<"Your name initials are: "<<first<<" "<<last;
 }

