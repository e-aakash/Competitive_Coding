/* Program to print all non increasing sequences 
   which add up to a number x */

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

void sum_x(int x, vector<int> v, int sum)
{
	if(sum>x)
		return;
	if(sum==x)
	{
		print(v);
		return;
	}

	int i = v.empty()? x : v[v.size()-1];

	for(int j=1; j<=i; j++)
	{
			v.push_back(j);
			sum+=j;
			//print(v);
			sum_x(x,v,sum);
			sum-=j;
			v.pop_back();
		
	}
}

int main()
{
	int x=3;				// Expected output: 1 1 1 \n 2 1 \n 3
	std::vector<int> v;
	sum_x(x,v,0);
	cout<<endl;
	sum_x(4,v,0);
}