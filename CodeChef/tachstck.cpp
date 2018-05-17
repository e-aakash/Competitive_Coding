#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int check(int *v, int n, int d)
{
	int c =0, p=0, i, j;
	for(i=n-1; i>0; i--)
	{
		c=0;//cout<<v[i]<<"\t";
		if(v[i])
		for(j=i-1; j>=0; j--)
		{
			if(v[j])//cout<<v[j]<<" ";
			if(v[i]-v[j]<=d)
			{
				if(v[j]!=0)
					c=1;
			}
			else if(v[i]-v[j]>d)
			{
				//cout<<endl;
				break;
			}
		}
		if(c)
		{
			p++;
			v[j+1]=0;
		}
	}
	return p;
}

int main()
{
	int n,d;
	cin>>n>>d;
	int *l=new int[n];
	for(int i=0; i<n; i++)
		cin>>l[i];
	sort(l, l+n);
	int p=0;
	for(int i=0; i<n-1; i++)
	{
		if(l[i+1]-l[i]<=d)
		{
			p++;i++;
		}
	}
	cout<<p<<endl;
//	print(l,n);
	delete[]l;
}