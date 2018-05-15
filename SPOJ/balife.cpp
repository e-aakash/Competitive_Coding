#include <iostream>
#include <cmath>
using namespace std;

long find (long *s, int n)
{
	int max = s[0];
	for(int i=1; i<n; i++)
		if(s[i]>max)
			max=s[i];

	return max;
}

bool all(long *a, int n)
{
	for(int i=0; i<n-1; i++)
		if(a[i]!=a[i+1])
			return false;

	return true;
}

void print(long *s, int n)
{
	for(int i=0; i<n; i++)
		cout<<s[i]<<" ";
	cout<<endl;
}

void bal(long *s , int n, int &st)
{
	if(all(s,n))
		return;

	st++;

	long *ns = new long[n];
	for(int i=0; i<n; i++)
		ns[i]=s[i];
	if(s[0]>s[1])
	{
		ns[0]--;
		ns[1]++;
	}

	for(int i=1; i<n-1; i++)
	{
		if(s[i]>s[i-1] && s[i]>s[i+1])
		{
			ns[i]-=2;
			ns[i-1]++;
			ns[i+1]++;
		}
		else if(s[i]>s[i-1])
		{
			ns[i]-=1;
			ns[i-1]++;	
		}
		else if(s[i]>s[i+1])
		{
			ns[i]-=1;
			ns[i+1]++;	
		}
	}

	if(s[n-1]>s[n-2])
	{
		ns[n-1]--;
		ns[n-2]++;
	}
	bal(ns, n, st);
	delete[]ns;
}

int main1()				// Using prefix arrays
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
			break;

		long *j = new long[n];
		long *sum=new long[n];
		for(int i=0; i<n; i++)
		{
			cin>>j[i];
			if(!i)
				sum[i]=j[i];
			else
				sum[i]=sum[i-1]+j[i];
		}
		//cout<<sum[n-1]<<" ";
		if(sum[n-1]/n != float(sum[n-1])/n)
		{
			cout<<"-1\n";
			continue;
		}

		long *asum = new long[n], av = sum[n-1]/n, *st = new long[n];
		for(int i=0; i<n; i++)
		{
			asum[i]= av * (i+1);
		//	cout<<asum[i]<<" ";
			st[i]=abs(sum[i]-asum[i]);
		}

		cout<<find(st, n)<<endl;
		delete[]j;
		delete[]sum;
		delete[]asum;
	}

}

int main()				// Using bal func	
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1)
			break;

		long *j = new long[n];
		long sum=0;
		int st=0;
		for(int i=0; i<n; i++)
		{
			cin>>j[i];
			sum+=j[i];
		}
		//cout<<sum[n-1]<<" ";
		if(sum/n != float(sum)/n)
		{
			cout<<"-1\n";
			continue;
		}

		bal(j, n, st);

		cout<<st<<endl;
		delete[]j;
	}

}