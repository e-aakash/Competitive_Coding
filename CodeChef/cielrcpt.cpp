#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p;
		cin>>p;
		int m =0;
		while(p>0)
		{
			if(p>=2048)
			{
                int k= p/2048;
                m+=k;
                p-=k*2048;
			}
			else if(p>=1024)
			{
                int k= p/1024;
                m+=k;
                p-=k*1024;
			}
			else if(p>=512)
			{
                int k= p/512;
                m+=k;
                p-=k*512;
			}
			else if(p>=256)
			{
                int k= p/256;
                m+=k;
                p-=k*256;
			}
			else if(p>=128)
			{
                int k= p/128;
                m+=k;
                p-=k*128;
			}
			else if(p>=64)
			{
                int k= p/64;
                m+=k;
                p-=k*64;
			}
			else if(p>=32)
			{
                int k= p/32;
                m+=k;
                p-=k*32;
			}
			else if(p>=16)
			{
                int k= p/16;
                m+=k;
                p-=k*16;
			}
            else if(p>=8)
			{
                int k= p/8;
                m+=k;
                p-=k*8;
			}
			else if(p>=4)
			{
                int k= p/4;
                m+=k;
                p-=k*4;
			}
			else if(p>=2)
			{
                int k= p/2;
                m+=k;
                p-=k*2;
			}
			else if(p>=1)
			{
                int k= 1;
                m+=k;
                p-=k;
			}

            //cout<<p<<" ";
		}
        cout<<m<<endl;
	}
}
