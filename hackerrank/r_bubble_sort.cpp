#include<iostream>

using namespace std;

void sort(int a[], int n)
{
	if(n==1)
		return;

	for(int i=0; i<n-1; i++)
		if(a[i]>a[i+1])
		{
			int k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;
		}

	sort(a,n-1);
}

int main()
{
	int a[] = {1, 5, 3, 9, 4, 7, 6, 10};
	sort(a,8);
	for(int i=0; i<8; i++)
		cout<<a[i]<<" ";
	
}