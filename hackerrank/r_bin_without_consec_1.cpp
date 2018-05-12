#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i];
	cout<<" ";
}

void k_bin(int k, vector<int> v)
{
	if(!k)
	{
		print(v);
		return;
	}

	if(v.empty())
	{
		v.push_back(1);
		k_bin(k-1, v);
		v.pop_back();
		v.push_back(0);
		k_bin(k-1, v);
	}
	else
	{
		int i = v[v.size()-1];
		if(i)
		{
			v.push_back(0);
			k_bin(k-1, v);
		}
		else
		{
			v.push_back(1);
			k_bin(k-1, v);
			v.pop_back();
			v.push_back(0);
			k_bin(k-1, v);
		}
	}
}

int main()
{
	int k=4;
	vector<int> v;
	k_bin(k, v);
}