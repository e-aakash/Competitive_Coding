#include <iostream>
#include <cstdio>
using namespace std;

bool find(int *a, int n, int k)
{
	for(int i=0; i<n; i++)
		if(k==a[i])
			return true;
	return false;
}

void freq(int **a, int *f, int n)
{
	for(int i=0; i<n; i++)
	{
		int c =f[i];
		
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, k, j=0, cl=0;
		cin>>n>>m;
		int *ta = new int[n];
		for(int i=0; i<n; i++)
			ta[i]=0;
		for(int i=0; i<m; i++)
		{
			cin>>k;
			if(!find(ta, n, k))
			{
				cout<<k<<" ";
				ta[(j++)%n]=k;
				cl++;
			}
		}
		cout<<cl<<endl;
	}	
}