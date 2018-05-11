#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s)					// To print a stack
{
	while(s.size())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int del_mid(stack<int> &s, int n)			// Recursively delete mid elemet of stack
{
	if(s.empty())
	{
		return n/2;
	}

	int t = s.top(), m;
	s.pop();
	m = del_mid(s, n+1);
	if(m!=n)
		s.push(t);
	return m;
}

int main()									// Testing del_mid() fuction with 2 test cases
{
	stack<int> s;
	for(int i=1; i<=5; i++)
		s.push(i);					// [1 2 3 4 5]
	print(s);
	cout<<endl;
	del_mid(s,0);					// [1 2 4 5]
	print(s);
	while(s.size())
		s.pop();

	for(int i=1; i<=6; i++)
		s.push(i);					// [1 2 3 4 5 6]
	cout<<endl<<endl;
	print(s);cout<<endl;
	del_mid(s,0);						// [1 2 4 5 6]
	print(s);
	cout<<endl;
}