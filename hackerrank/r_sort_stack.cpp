#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

void sortedInsert(stack<int> &s, int t)
{
	if(s.empty())// || t >= s.top())
	{
		s.push(t);
		return;
	}

	if(t >= s.top())
	{
		s.push(t);
		return;
	}

	int temp = s.top();
	s.pop();
	sortedInsert(s, t);
	s.push(temp);
}

void sort(stack<int> &s)
{
	int l = s.size();
	while(l--)
	{
		int t = s.top();
		s.pop();
		//print(s);
		sort(s);
		//print(s);
		sortedInsert(s, t);
		//print(s);
		//cout<<endl;
	}
}

int main()
{
	stack<int> s;
	s.push(30); 
	s.push(-5);
	s.push(18);
	s.push(14);
	s.push(-3);

	//int t = 1;
	//sortedInsert(s,t);
	
	if(!s.empty())
		sort(s);

	while(s.size())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}