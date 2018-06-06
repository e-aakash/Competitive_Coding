#include<iostream>
#include<string>

using namespace std;

bool c(char c1, char c2, char c3, char c4)
{
	if(c1=='C'||c1=='?')
		if(c2=='H'||c2=='?')
			if(c3=='E'||c3=='?')
				if(c4=='F'||c4=='?')
					return true;

	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size();
		for(int i=l-1; i>=0; i--)
		{
			if(i>=3 && c(s[i-3], s[i-2], s[i-1], s[i]))
			{
				 s[i-3]='C'; s[i-2]='H'; s[i-1]='E'; s[i]='F';
				 i-=3;
			}
			else
			{
				if(s[i]=='?')
					s[i]='A';
			}
		}
		cout<<s<<endl;
	}
}