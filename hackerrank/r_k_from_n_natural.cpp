#include<iostream>
#include<vector>
using namespace std;

void vec(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

void print(int lev, int n, vector<int> v)
{
	if(lev==0)
	{
		vec(v);
		return;
	}

	int i;
	if(v.empty())
		i=1;//v.push_back(1);
	else
		i = v[v.size()-1] +1;
		
	while(i<=n)
	{
		v.push_back(i);
		print(lev-1, n, v);
		v.pop_back();
		i++;
	}

	
}


int main()
{
	std::vector<int> v;
	print(3, 5, v);

}