#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

int min_s(int step, int source, int dest)
{
	if(abs(source)>dest)
		return INT_MAX;
	if(source==dest)
		return step;

	int p = min_s(step+1, source + step+1, dest);
	int n = min_s(step+1, source - step-1, dest);

	return min(p,n);
}


int main()
{
	int dest = 11;
	cout<<"Min number of steps to reach "<< dest<<" : "<<min_s(0,0,dest);
}