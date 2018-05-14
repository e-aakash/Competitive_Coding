#include<iostream>

using namespace std;

void act(int s[], int e[], int l)
{
	int end = -1, num=0;
	for(int i=0; i<l; i++)
	{
		if(s[i]>=end)
		{
			cout<<i<<" ";
			end = e[i];
			num++;
		}
	}
	cout<<endl<<"Number of activities : "<<num<<endl;
}

int main()
{
	int start[]={10,12,20};
	int end[]={20,25,30};

	act(start, end, 3);				//Output : {0,2}

	int s[] = {1,3,0,5,8,5};
	int e[] = {2,4,6,7,9,9};

	act(s, e, 6);					//Output : {0,1,3,4}

}