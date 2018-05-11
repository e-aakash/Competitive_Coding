#include<iostream>
#include<vector>
using namespace std;

void print(int n, vector<int> v)
{
	if(n==0)
	{
		for(int i=0; i<v.size(); i++)
			cout<<v[i];
		cout<<" ";
		return;
	}
	int last=-1;
	if(!v.empty())
	{
		last = v[v.size()-1];
	}


	for(int i=0; i<=9; i++)
		if(i>last)
		{	
		v.push_back(i);
		print(n-1, v);
		v.pop_back();
		}
}

int main()
{
	std::vector<int> v;

	int n=1;
	print(n,v);
	n=2;
	cout<<endl;
	print(n,v);
	cout<< endl;
	n=3;
	print(n,v);
}