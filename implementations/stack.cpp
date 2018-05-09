#include<iostream>

using namespace std;

const int n = 100;

template<typename t>
class stack
{
	t data[n];
	int top;
public:
	stack()
	{top = -1;}

	void push(t a)
	{
		if(top>=n-1)
			cout<<"Stack is full";
		else
			data[++top]=a; 
	}

	t    pop()
	{
		if(top<=-1)
		{
			cout<<"Stack is empty";
			return 0;
		}
		else
			return data[top--];
	}

	t    peek()
	{
		if(top>-1)
			return data[top];
		else
		{
			cout<<"stack empty";
			return 0;
		}
	}	

	bool isEmpty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
};


int main()
{
	stack<int> s;
	cout<<s.isEmpty()<<endl;
	s.push(10);
	s.push(12);
	cout<<s.peek()<<endl;
	s.push(29);
	cout<<s.isEmpty()<<endl;
	cout<<s.pop();
}