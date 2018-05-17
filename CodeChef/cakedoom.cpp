#include <iostream>
#include <string>

using namespace std;

void rm(int k, string &s)
{
	char q='?';
	int l = s.size();

	if(l==1)
	{
		if(s[0]==q)
			s[0]='0';
		return;
	}

	if(s[0]==q)
		for(int i='0'; i<'0'+k; i++)
		{
            //cout<<char(i)<<" "<<(i!=s[1])<<" "<<(i!=s[l-1])<<endl;
			if((i!=s[1]) && (i!=s[l-1]))
			{s[0]=i;break;}
        }
	for(int i=1; i<l-1; i++)
	{//cout<<"here";
		if(s[i]==q)
			for(int j='0'; j<'0'+k; j++)
				if (j!=s[i+1]&& j!=s[i-1])
				{s[i]=j;break;}

	}

	if(s[l-1]==q)
		for(int i='0'; i<'0'+k; i++)
			if(i!=s[0]&&i!=s[l-2])
			{s[l-1]=i;break;}

}

bool check(string s, int k)
{
	int l = s.size();
	char q = '?';
	if(l==1)
    {
    if(s[0]-'0'>=k)
     return false;
    return true;
    }
	//if(s[0]==q)
	if(s[0]==q||s[0]==s[1] || s[0]==s[l-1] || s[0]-'0'>=k)
		return false;

	for(int i=1; i<l-1; i++)
	{
		if(s[i]==q||s[i]==s[i+1] || s[i]==s[i-1] || s[i]-'0'>=k)
			return false;
	}

	if(s[l-1]==q||s[l-1]==s[l-2] || s[l-1]==s[0] || s[l-1]-'0'>=k)
		return false;

	return true;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		string s; //k=2; s="??";
        cin>>k>>s;
		rm(k,s);//cout<<s<<endl;
		if(check(s,k))
			cout<<s<<endl;
		else
			cout<<"NO"<<endl;
	}
}
