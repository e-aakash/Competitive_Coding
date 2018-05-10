#include<iostream>
#include<vector>
using namespace std;

class queue
{
	vector<int> v;

 public:
 	void enqueue(int a)
 	{
 		v.push_back(a);
 	}

 	void dequeue()
 	{
 		if(!v.empty())
 			v.erase(v.begin());
  	}

 	void print()
 	{
 		if(v.empty())
 			cout<<"Empty!"<<endl;
 		else
 			cout<<*(v.begin())<<endl;
 	}

};

int main()
{
	queue q;
	int t, n, r;
	cin>>t;
	while(t--)
	{
		cin>>n;
		switch(n)
		{
			case 1: cin>>r;
					q.enqueue(r);
					break;

			case 2: q.dequeue();
					break;

			case 3: q.print();
					break;

		}
	}
}