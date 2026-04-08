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
        void pop_front()
        {
            if(head==NULL)
            {
                cout<<" linked list is empty"<<endl;
                return;
            }
            else{
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
            }
        }
        void pop_back()
        {
            node* temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
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
        ll.pop_front();
        ll.pop_back();
		ll.printlist();
		return 0;
	}
