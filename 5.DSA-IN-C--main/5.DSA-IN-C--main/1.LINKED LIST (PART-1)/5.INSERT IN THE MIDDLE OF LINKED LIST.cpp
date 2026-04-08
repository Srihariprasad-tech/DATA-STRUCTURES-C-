#include<iostream>
using namespace std;
class node 
{
	public:
		int data;
		node* next;
		public:
			node(int val)
			{
				data=val;
				next=NULL;
			}
};
class list
{
	node* head;
	node* tail;
	public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void push_front(int val)
		{
			node* newnode=new node(val);
			if(head==NULL)
			{
				head=tail=newnode;
			}
			else
			{
				newnode->next=head;
				head=newnode;
			}
		}
		void push_back(int val)
		{
			node* newnode=new node(val);
			if(head==NULL)
			{
				head=tail=newnode;
			}
			else
			{
				tail->next=newnode;
				tail=newnode;
				
			}
		}
		void printlist()
		{
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
		}
		void insert(int val,int pos)
		{
			node* newnode= new node(val);
			node* temp=head;
			for(int i=0;i<pos-1;i++)
			{
				temp=temp->next;
			}
			newnode->next=temp->next;
			temp->next=newnode;
		}
	};
	int main()
	{
		list ll;
		ll.push_front(3);
		ll.push_front(2);
		ll.push_front(1);
		ll.push_back(4);
		ll.push_back(5);
		ll.push_back(6);
		ll.insert(100,2);
		ll.printlist();
		return 0;
	}
