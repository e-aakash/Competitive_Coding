#include<iostream>
#include<string>

using namespace std;

void print(int k, char set[], int len, string s)    // All possible k letter permutation from set
{													// of char set[] of length len
	if(k==0)
	{
		cout<<s<<endl;
		return;
	}

	for(int i=0; i<len; i++)
	{
		string ns = s + set[i];						// New string stores previous sting and all possible 
		print(k-1, set, len, ns);					// char from set[]
	}
}

int main()
{
	int k=3, len=3;
	char set[]={'a','b','c'};
	string s;

	print(k, set, len, s);
}