#include<iostream>

using namespace std;

int digit(int a)
{
	int n=0;
	if(a==0)
		return 1;

	while(a)
	{
		a/=10;
		n++;
	}
	return n;
}

bool Palin(int a)
{
	int d = digit(a);

	//  to array
	int *b = new int[d];
	for(int i=d-1; i>=0; i--)
	{
		b[i]=a%10;
		a/=10;
	}

	for(int i=0; i<d/2; i++)
		if(b[i]!=b[d-1-i])
			return false;	

	delete[]b;

	return true;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
	cin>>n; 
	n++;
	while(!Palin(n))
		n++;
	cout<<n<<endl;
	}
}