#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long m, n1, n2;

		scanf("%lld %lld %lld", &n1, &n2, &m);

		if(m)
		{
			long long *n = new long long[m];
			for(long long i=0; i<m; i++)
				n[i]=i+1;
			for(long long i=m-1; i>=0; i--)
			{
				if(n[i]<=n1 && n[i]<=n2)
				{
					n1-=n[i]; n2-=n[i];
				}
				//else 
				//	break;
			}

			printf("%lld\n", n1+n2);

			delete[]n;
		}
		else
			cout<<n1+n2<<endl;
	}
}