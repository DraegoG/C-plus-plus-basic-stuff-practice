#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
}*head,*temp,*ptr;

void circularList()
{
    int a,b=6;
	vector<int> v;
	head=new Node();
	temp=head;
	for(int i=0; i<5; i++)
	{
	    cin>>a;
	    temp->data=a;
	    temp->next= ptr=new Node;
	    temp=ptr;
	}
	cin>>a;
	temp->data=a;
	temp->next=head;
	cout<<" a= "<<a;
	b=6; ptr=head;  //printing the data
	while(b--)
	{
	    cout<<" -> "<<ptr->data;
	    ptr=ptr->next;
	}
	cout<<endl;

	b=6; ptr=head;   //Entering the data in the vector
	while(b--)
	{
	    v.push_back(ptr->data);
	    
	    ptr=ptr->next;
	}

	sort( v.begin(),v.begin()+( v.size() ) );   //sorting the values in the vector
	
	b=6; ptr=head;
	while(b)
	{
	    ptr->data=v[6-b];
	    if(ptr->data==a) temp=ptr;
	    ptr=ptr->next;
	    b--;
	}
	cout<<endl;
	
	b=6; ptr=temp; //print the values
	while(b--)
	{
	    cout<<" -> "<<ptr->data;
	    ptr=ptr->next;
	}
}

int main() 
{
    circularList();	
}