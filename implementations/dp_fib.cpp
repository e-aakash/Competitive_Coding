#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
	int *f = new int[n];
	f[0]=1;
	if(n>1)
		f[1]=1;
	for (int i=2; i<n; i++)
	{
		f[i] = f[i-1]+f[i-2];
	}
	return f[n-1];
}

int main()
{
	for(int i=1; i<10; i++)
		cout<<fib(i)<<endl;
}