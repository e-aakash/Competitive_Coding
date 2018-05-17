#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long m, n1, n2;

		scanf("%lld %lld %lld", &n1, &n2, &m);

		long long a = min(n1, n2), b = (m*(m+1))/2;
		if(a<b)
			printf("%lld\n", n1+n2-2*a);
		else
			printf("%lld\n", n1+n2-2*b);
	}
}