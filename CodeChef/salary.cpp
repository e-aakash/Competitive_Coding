#include<iostream>
#include<algorithm>

using namespace std;

int max(int *a, int n)		//Returns index of largest element
{
	int  j=0;
	for(int i=1; i<n; i++)
		if(a[i]>a[j])
			j=i;

	return j;
}

int min(int *a, int n)		//Returns index of smallest element
{
	int  j=0;
	for(int i=1; i<n; i++)
		if(a[i]<a[j])
			j=i;

	return j;	
}

bool equal(int *a, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]!=a[j])
				return false;

	return true;
}

int sal(int *a, int n)
{	
	int mx, mn, s=0;
	while(!equal(a,n))
	{
		mx=max(a,n);
		mn=min(a,n);
		
		//cout<<a[mx]<<" "<<a[mn]<<" "<<s<<" ";

		s+=a[mx]-a[mn];
		a[mx]= a[mn];
		//cout<<mx<<" "<<mn<<" ";
		

		//for(int i=0; i<n; i++)
		//	cout<<a[i];

		//cout<<endl;

	}
	return s;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int *a = new int[n];

	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<sal(a,n)<<endl;

	delete[]a;
}
}