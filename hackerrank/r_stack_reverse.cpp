#include<iostream>
#include<stack>
#include<ctime>

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

stack<int> reverse(stack<int> s)			//reverse stack recursively
{
	int t; stack<int> b;
	if(s.size()==1)
		return s;
	else
	{
		t = s.top();
		s.pop();
		reverse(s);
		b.push(t);
		while(!s.empty())
		{
			b.push(s.top());
			s.pop();
		}
		s = b;
		//push_back(t,s);
	}

	//print(s);
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