#include<iostream>

using namespace std;

void e_frac(int nr, int dr)
{
	float f=nr, o=1, c=1;

	while(nr)
	{
		if((o/c)>(f/dr))
		{
			c++;
		}
		else
		{
			nr = nr*c-dr;
			dr = dr*c;
			f=nr;
			cout<<"1/"<<c<<" ";
		}
	}

}

int main()
{
	e_frac(2,3);			// 1/2 + 1/6
	cout<<endl;
	e_frac(6,14);			// 1/3 + 1/11 + 1/231
	cout<<endl;
	e_frac(12,13);			// 1/2 + 1/3 + 1/12 + 1/156
}