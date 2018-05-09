#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

class stack
{
	node *n;
	int size;
 
 public:
 	stack()
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

 	~stack()
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

int main()
{
	stack s;
	s.push(5);
	s.push(10);
	s.traverse();
	cout<<endl<<s.peek();
	s.pop();
	s.push(20);
	s.push(15);
	cout<<endl<<s.peek();
}