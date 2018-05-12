#include<iostream>

using namespace std;

void pattern(int x)//, int &opr)
{
	if(x<=0)
	{
		cout<<x<<" ";
		return;
	}

	cout<<x<<" ";

	pattern(x-5);
	cout<<x<<" ";

}

int main()
{	
	pattern(16);		// 16, 11, 6, 1, -4, 1, 6, 11, 16
	cout<<endl;
	pattern(10);
}