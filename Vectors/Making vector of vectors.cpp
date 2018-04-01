#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	vector < vector<int> > v;
	for(int i=0; i<3; i++)
	{
		vector<int> temp;
		for(int j=0; j<4; j++)
		{
			cin>>n;
			temp.push_back(n);
		}
		v.push_back(temp);
	}

	//Displaying the value stored in each vector
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
}