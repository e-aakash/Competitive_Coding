#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	char a[201];
	cin>>t;
	while(t--)
	{
		cin>>a;
		for(int i=0; i<(strlen(a)/2); i+=2)
			cout<<a[i];
		cout<<endl;
	}
}