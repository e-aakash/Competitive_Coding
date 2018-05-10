#include<iostream>
#include<math.h>

using namespace std;

void prime(long a, long b)
{	
	long j;
	if(a==1)
		a++;
	for(long i=a; i<=b; i++)
	{

		for (j=2; j<=sqrt(i); j++)
			if(i%j==0)
				break;

		if(j>sqrt(i))
			cout<<i<<endl;
	}
}

int main()
{
	int a,b,t;
	cin>>t;
	while(t>0)
	{
		cin>>a>>b;
		prime(a,b);
		cout<<endl;
		t--;
	} 
}