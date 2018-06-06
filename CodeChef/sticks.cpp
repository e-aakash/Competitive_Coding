#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{return a>b;}

int eval(int *a, int n)
{
    int t1=0, t2=0, v1=0, v2=0, i;
    for(i=0; i<n; i++)
    {
        if(t1==0)
        {v1=a[i];t1=1;continue;}
        if(t1==1 && a[i]==v1)
        {t1=2;break;}
        else
        v1=a[i];
    }
    i++;
    for(; i<n; i++)
    {
        if(t2==0)
        {v2=a[i];t2=1;continue;}
        if(t2==1 && a[i]==v2)
        {t2=2;break;}
        else
         v2=a[i];
    }
    //cout<<endl<<t1<<" "<<v1<<" "<<t2<<" "<<v2<<endl;

    if(t1==2 && t2==2)
     return v1*v2;
    else
     return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *a= new int[n];

        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n, comp);
      /*  for(int i=0; i<n; i++)
         cout<<a[i]<<" ";
*/
        cout<<eval(a,n)<<endl;
    }
}
