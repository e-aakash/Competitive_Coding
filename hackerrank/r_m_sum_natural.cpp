#include<iostream>

using namespace std;

int sum(int n, int m)
{
	if(m>1)
	{
		return sum(sum(n,m-1), 1);
	}

	if(m==1)
		return (n*(n+1))/2;
}

int main()
{
	cout<<sum(3,2)<<endl;
}