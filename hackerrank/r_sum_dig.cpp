#include<iostream>

using namespace std;

int r_sum(int i)
{
	if(i)
		return (i%10)+r_sum(i/10);
	else
		return 0;
}

int main()
{
	int a;
	cin>>a;
	cout<<r_sum(a)<<endl;
}