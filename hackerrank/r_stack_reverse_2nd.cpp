#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s)					//For printing stack
{
	int l = s.size();
	while(l--)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

stack<int> push_back(int a, stack<int> s)	//For pushing element in the back of the 
{											//recursively
	if(s.empty())
		s.push(a);
	else
	{
		int t= s.top();
		s.pop();
		//print(s);
		s = push_back(a,s);
		//print(s);
		s.push(t);
	}
	//cout<<endl;
	return s;
}

stack<int> reverse(stack<int> s)			//reverse stack recursively
{
	int t;
	if(s.empty())
		return s;
	else
	{
		t = s.top();
		s.pop();
		s = reverse(s);
		s = push_back(t,s);
		return s;
	}

	return s;
}

int main()
{
	stack<int> s,a;
	int l=1000;

	for(int i=1; i<l; i++)
		s.push(i);

	cout<<"Original Stack:\n";
	print(s);
	cout<<endl;

	a = reverse(s);
	cout<<"\nReversed Stack:\n";
	print(a);
}