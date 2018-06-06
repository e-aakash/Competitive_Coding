#include <iostream>
#include <vector>
using namespace std;

int maxrev(int n, int p[], int r)
{
	int sum = 0, r1 = p[0];
	std::vector<int> v;
	v.push_back(p[0]);
	sum = p[0];
	for(int i=1; i<r; i++)
	{
		int m=0, l = v.size();
		for(int j=0; j<l; j++)
		{
			if(m<(v[j]+v[l-1-j]))
				m = v[j]+v[l-1-j];
		}
		
		if(m>=p[i])
			v.push_back(m);
		else
			v.push_back(p[i]);		
	}	
	cout<<endl;
	return v.back();
}

int main()
{
	int n=10;
	//cin>>n;
	int p[] = {1,5,8,9,10,17,17,20,24,30};
	int r =1;
	for(int i=0; i<10; i++)
		cout<<maxrev(n,p,i+1)<<endl;;
	//cout<<sol;
}