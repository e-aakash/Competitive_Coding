#include<iostream>
#include<string>
#include<string.h>
 
using namespace std;

class adaqueue
{
	int d[1000000];
	int f, b;
public:
	adaqueue()
	{
		f=-1;
		b=-1;
	}

	void push_b(int a)
	{
		if(o==0)
			d.push_back(a);
		else if(o==1)
			d.push_front(a);
	}

	void tofront(int a)
	{
		if(o==1)
			d.push_back(a);
		else if(o==0)
			d.push_front(a);
	}

	int front()
	{
		int a = 0;
		if(o==0)
		{
			a=d.front();
			d.pop_front();
		}
		else if(o==1)
		{
			a=d.back();
			d.pop_back();
		}
		return a;
	}

	int back()
	{
		int a = 0;
		if(o==1)
		{
			a=d.front();
			d.pop_front();
		}
		else if(o==0)
		{
			a=d.back();
			d.pop_back();
		}
		return a;
	}

	void reverse()
	{
		if(o==0)
			o=1;
		else if(o==1)
			o=0;
	}

	bool empty()
	{
		if(f==b)
			return true;
		else
			return false;
	}

};


int main()
{
	adaqueue x;
	char s[10];
	int c=15;
	cin>>c;
	while(c>0)
	{
		cin>>s;
		
		if(!strcmp(s,"back"))
		{
			if(x.empty())
				cout<<"No job for Ada?\n";
			else
			 	cout<<x.back()<<endl;
		}

		else if(!strcmp(s,"front"))
		{
			if(x.empty())
				cout<<"No job for Ada?\n";
			else
			 	cout<<x.front()<<endl;
		}

		else if(!strcmp(s,"reverse"))
		{
			x.reverse();
		}

		else if(!strcmp(s,"push_back"))
		{
			int a;
			cin>>a;
			x.push_b(a);
		}

		else if(!strcmp(s,"toFront"))
		{
			int a;
			cin>>a;
			x.tofront(a);
		}

		c--;

	}
}