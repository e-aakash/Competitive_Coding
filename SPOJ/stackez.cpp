#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

int main()
{
	stack<int> s;
	int t, n, r;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		if(n==1)
		{
			scanf("%d", &r);
			s.push(r);
		}

		else if(n==2)
		{
			if(!s.empty())
				s.pop();
		}

		else if(n==3)
		{
			if(s.empty())
				cout<<"Empty!";
			else
				cout<<s.top();
			cout<<endl;
		}
	}
}