#include<iostream>
#include<vector>
using namespace std;

void sset_k_length(int a[], int len, int k, vector<int> v)			// Prints sum of all possible subsets of a[] of length of k
{																	
	if(!k)															// Prints sum of generated subsets 
	{
		int sum=0;

		if(!v.empty())
		{
			for(int i=0; i<v.size(); i++)
				sum+= v[i];			
		}

		cout<<sum<<" ";
		return;
	}
	
	for(int i=0; i<len; i++)										// Generates all possible k length subset by recursion
	{
		v.push_back(a[i]);
		sset_k_length(a+i+1, len-i-1, k-1, v);
		v.pop_back();
	}

}


void all_sset(int a[], int l)										// Prints sum of all possible subset of a[] using above function
{
	std::vector<int> v;
	for(int i=0; i<=l; i++)
	{
		sset_k_length(a, l, i, v);
	}
	cout<<endl;
}


// Checking output of 2 test cases
int main()
{
	int a[]={2,4,5}, l=3;						// Expected output : 0 2 4 5 6 7 9 11 
	all_sset(a,l);

	int b[]={2,3}; l=2;							// Expected output : 0 2 3 5
	all_sset(b,l);		
}