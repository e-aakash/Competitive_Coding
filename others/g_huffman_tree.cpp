#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

struct cf
{
	char c;
	int f;
};

struct node
{
	cf data;
	node* left;
	node* right;
};

node* createnode(cf d)
{
	node* n = new node;
	n->data = d;
	n->left=NULL;
	n->right=NULL;
}

node* createroot(node *n1, node *n2)
{
	node* n = new node;
	n->left = n1;
	n->right = n2;
	cf c = {'i', d1.f+d2.f};
	n->data = d;
}

bool comp(cf c1, cf c2)			// To order test[] acc to frequency
{return c1.f>c2.f;}

node* tree(cf t[], int n)
{
	vector<node*> s;
	for(int i=0; i<n; i++)
		s.push_back(createnode(t[i]));

	while(s.size>1)
	{

	}
}

int main()
{
	cf test[] = {{'a',5}, {'b',9}, {'c',12}, {'d',13}, {'e',16}, {'f',45}};
	sort(test, test+6, comp);

	for(int i=0; i<6; i++)
	{
		cout<<test[i].c<<" "<<test[i].f<<endl;
	}
}