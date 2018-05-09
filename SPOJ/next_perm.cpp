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

	cout<<a[i]<<endl;
	for(j=n-1; j>i; j--)
		if(a[j]>a[i])
			break;

	cout<<a[j]<<endl;

	int k= a[i];
	a[i]=a[j];
	a[j]=k;

	sort(a+i+1,a+n);

	return true;
}

int main()
{
	int a[]={1,5,4,8,3};
	if(!next_perm(a,5))
		cout<<"False";

	for(int i=0; i<5; i++)
		cout<<a[i];
	cout<<endl;
}