#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int *w = new int[n];
		for(int i=0; i<n; i++)
			cin>>w[i];

		sort(w, w+n);

		int s1=0, s2=0, s3=0, s4=0, d;
		for(int i=0; i<k; i++)
			s1+=w[i];
		for(int i=k; i<n; i++)
			s2+=w[i];
		
		for(int i=0; i<n-k; i++)
			s3+=w[i];
		for(int i=n-k; i<n; i++)
			s4+=w[i];
		if(abs(s3-s4)>abs(s2-s1))
			d=abs(s3-s4);
		else
			d=abs(s2-s1);
		cout<<d<<endl;
		delete[]w;
	}
}