#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

struct team
{
	string s;
	long long int p;
};

bool comp(team t1, team t2)
{return t1.p<t2.p;}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	int c;
	cin>>c;
	team *t = new team[c]; 
	for(int i=0; i<c; i++)
	{
		cin>>t[i].s>>t[i].p;
	}

	sort(t, t+c, comp);
	long long int bad=0;
	for(int i=0; i<c; i++)
	{
		bad += abs(t[i].p - (i+1));
	}

	cout<<bad<<endl;

	delete[]t;
	}
}