#include<iostream>

using namespace std;


struct node
{
	int data;
	node *next;
};

class list
{
	node *n;
	int size;
 
 public:
 	list()
 	{
 		n=NULL;
 		size=0;
 	}

 	void push(int a)
 	{
 		if(size)
 		{
 			node *temp = new node;
 			temp->data = a;
 			temp->next = n;
 			n=temp;
 		}
 		else
 		{
 			n = new node;
 			n->data=a;
 			n->next=NULL;
 		}
 		size++;
 		cout<<"Push: "<<n->data<< " Size :"<<size<<endl;
 	}

 	void pop()
 	{
 		cout<<"Pop: "<<n->data ;
 		if(size)
 		{
 			node *temp = n;
 			n=n->next;
 			delete temp;
 			size--;
 		}
 		cout<<" Size :"<< size<<endl;
  	}

 	void traverse()
 	{	
 		node *temp=n;
 		while(temp!=NULL)
 		{
 			cout<<temp->data<<" ";
 			temp=temp->next;
 		}
 	}

 	int peek()
 	{
 		if(size)
 			return n->data;
 		else
 			return -1;
 	}

 	~list()
 	{
 		node *temp;
 		while(n->next!=NULL)
 		{
 			temp = n->next;
 			delete n;
 			n=temp;
 		}
 		if(n!=NULL)
 			delete n;
 	}
};
