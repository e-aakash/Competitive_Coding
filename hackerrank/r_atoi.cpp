#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int atoi(char *a, int n)									// Char array implementation
{
	if(n==1)
		return int(a[0]-'0');

	return (atoi(a, n-1))*10 + int(a[n-1]-'0');
}


int atoi_string(string s)									// String implementation
{
	if(s.size()==1)
		return int(s[0]-'0');

	return (atoi_string(s.substr(0,s.size()-1)))*10 + int(s[s.size()-1] - '0');
}

int main()
{
	char *a;
	int n;
	cin>>n;
	a = new char[n];
	cin>>a;
	//cout<<a;
	int i = atoi(a, n);
	cout<<endl<<i<<endl;
	string s;
	cin>>s;
	cout<<atoi_string(s)<<endl;
//	cout<<s.substr(0,s.size()-1);

	delete[]a;
}