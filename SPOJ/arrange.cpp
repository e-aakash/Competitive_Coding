#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(long long  n1, long long  n2)
{
if(n1==1)
 return true;
else if(n2==1)
 return false;
return n1>n2;}

int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long  *a=new long long [n];
        for(long long  i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        if(a[n-1]==3 && a[n-2]==2)
        {
            for(int i=0; i<n-2; i++)
             cout<<a[i]<<" ";
            cout<<"2 3\n";
            continue;
        }
        sort(a, a+n, comp);
        for(long long  i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        delete[]a;
    }
}
