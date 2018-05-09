#include<iostream>
#include<algorithm>

using namespace std;

bool next_perm(int *a, int n)
{
	//int *out = new int[n];
	int i,j;
	for(i=n-2; i>=0; i--)
	{
		if(a[i]<a[i+1])
			break;
	}
	if(i==-1)
		return false;

	//cout<<a[i]<<endl;
	for(j=n-1; j>i; j--)
		if(a[j]>a[i])
			break;

	//cout<<a[j]<<endl;

	int k= a[i];
	a[i]=a[j];
	a[j]=k;

	sort(a+i+1,a+n);

	return true;
}

int main()
{
	int n, t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int *a = new int[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	if(next_perm(a,n))
		for(int i=0; i<n; i++)
			cout<<a[i];
	else
		cout<<-1;
	cout<<endl;
	delete[]a;
	}
	
}

/* 15483 - 15834
   1474584126 - 1474584162*/

