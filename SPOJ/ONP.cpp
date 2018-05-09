#include<iostream>
#include<stack>
#include<string.h>
#include<ctype.h>

using namespace std;


stack<char> evaluate(char a[])
{
	stack <char> output, opr ;

	for(int i=0; i<strlen(a); i++)
		switch(a[i])
		{
			case '(' : 	opr.push(a[i]);
						break;
			case '/' : 	opr.push(a[i]);
						break;
			case '*' : 	while(opr.top()=='/')
						{	output.push(opr.top());
							opr.pop();
						}
						opr.push(a[i]);
						break;
			case '-' :  while(opr.top()=='/'||opr.top()=='*')
						{	output.push(opr.top());
							opr.pop();
						}
						opr.push(a[i]);
						break;
			case '+' :  while(opr.top()=='/'||opr.top()=='*'||opr.top()=='-')
						{	output.push(opr.top());
							opr.pop();
						}
						opr.push(a[i]);
						break;
			case ')' :  while(opr.top()!='(')
						{	output.push(opr.top());
							opr.pop();
						}
						opr.pop();
						break;
			default : output.push(a[i]);

		}

	return output;
}

void print(stack<char> s)
{
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
}

int main_a()
{
	stack<char> s;
	char a[401];
	int t;
	cin>>t;

	while((t--)>0)
	{
		cin>>a;
		s=evaluate(a);
		print(s);
	}	

}


int main()
{
	stack<char> s;
	char a[] = "**/*-*+/+*+";
	s = evaluate(a);
}