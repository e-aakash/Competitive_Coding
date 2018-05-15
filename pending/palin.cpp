#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

vector<int> stov(string s)
{
	int l=s.size(), n=0;
	vector<int> v;
	for(int i=0; i<l; i++)
	{
		if((s[i]=='0')&&n==0)
		{
			//cout<<i<<" ";
			continue;
		}
		n=1;
		v.push_back(s[i]-'0');
	}
	return v;
}

bool palin(string v)
{
	int d=v.size();

	for(int i=0; i<d/2; i++)
		if(v[i]!=v[d-1-i])
			return false;

	return true;
}

void strp(string &s)
{
	int l = s.size()-1, r = 1;
	while(r && l)
	{
		s[l]+=r;
		if(s[l]>'9')
		{
			s[l]-=10;r=1;
		}
		else
			r=0;
		l--;
	}
	if(r)
	{
		s[l]+=r;
		if(s[l]>'9')
		{
			s[l]-=10;
			s = "1"+s;
		}
	}
}

bool palin2(vector<int> v)
{
	int d=v.size();// = digit(a);

	//cout<<a<<" "<<d<<" "<<int(pow(10,d-1))<<" ";
	for(int i=0; i<d/2; i++)
		if(v[i]!=v[d-1-i])
			return false;

	return true;

	//return palin2(v);
}

void p(vector<int> &v)
{
	int r = 1, l= v.size()-1;
	while(r && l )
	{
		v[l] += r;
		r = v[l]/10;
		v[l] %= 10;
		l--;
	}
	if(r)
	{
		v[l] += r;
		r = v[l]/10;
		v[l] %= 10;
		v.insert(v.begin(), r);

	}
}

void convert(string &s)
{
	int l=0, n=s.size();
	for( ; l<n; l++)
	{
		if(s[l]!='0')
			break;
	}
	if(l<n)
	{
		s = s.substr(l);
	}
	else
		s = '0';
}

void print(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i];
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	string s;
	//vector<int> v;
	/*cin>>s;
	convert(s);
	strp(s);
	cout<<s;
	*/
	while(t--)
	{
	cin>>s;
	convert(s);
	strp(s);
	while(!palin(s))
		strp(s);
	cout<<s<<endl;
	}
}