#include<iostream>
#include<cmath>

using namespace std;

int digit(int a)						// To find number of digits in a number
{
	if(a==0)
		return 1;
	int d=0;
	while(a)
	{
		d++;
		a/=10;
	}
	return d;
}

void print(int *a, int dig)				// To print an array of length dig
{
	for(int i=0; i<dig; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void inttoa(int a, int dig, int *b)		// To convert int of dig digits to an array
{
	//int *b = new int[dig];
	while(dig)
	{
		dig--;
		b[dig]=a%10;
		a/=10;
	}
	//return b;
}

bool palin(int *a, int len)				// To check if given array is palindrome
{
	if(len<=1)
		return true;

	if(a[0]!=a[len-1])
		return false;

	return palin(a+1, len-2);
}

bool palin2(int a)
{
	int d = digit(a);

	//cout<<a<<" "<<d<<" "<<int(pow(10,d-1))<<" ";
	if(d<=1)
		return true;

	if(a%10 != a/int(pow(10,d-1)))
		return false;

	a=a% int(pow(10,d-1));
	a/=10;

	return palin2(a);
}


int main()
{
	int a, len;
	int *x;
	cin>>a;
	len = digit(a);
//	cout<<digit(a)<<" "<<digit(b);
	x=new int[len];
	inttoa(a, len, x);
	print(x, len);

	if(palin(x, len))
		cout<<"Palindrome!\n";
	else
		cout<<"Not Palindrome!\n";

	cout<<endl<<endl;

	if(palin2(a))
		cout<<"Palindrome!\n";
	else
		cout<<"Not Palindrome!\n";


	delete[]x;
}