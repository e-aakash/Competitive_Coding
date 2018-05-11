#include<iostream>

using namespace std;

int choc(int m, int p, int w, int n)  // m = money, p = price, w = wrappers with me, n = wrappers for 1 choc
{
	//cout<<"money: "<<m<<" wrappers: "<<w<<endl;
	if(m<p && w<n)
		return 0;
	
	if(w<n)
	{
		int c=0;
		c = m/p;
		m = m%p;
		w += c;
		return c + choc(m, p, w, n);
	}

	if(m<p)
	{
		int c=0;
		c = w/n;
		w = w%n;
		w += c;
		return c + choc(m,p,w,n);
	}
}


//Testing choc function on 3 test cases
int main()
{
	int m=16 ,p=2, w=0, n=2;			// 15
	cout<<choc(m,p,w,n);
	m=15; p=1; n=3;						// 22
	cout<<endl<<choc(m,p,w,n);
	m=20; p=3; n=5;
	cout<<endl<<choc(m,p,w,n);
	cout<<endl;
}