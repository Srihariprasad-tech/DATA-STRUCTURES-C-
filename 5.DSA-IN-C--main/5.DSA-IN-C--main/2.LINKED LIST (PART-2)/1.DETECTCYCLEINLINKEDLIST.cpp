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
    public:
	node* head;
	node* tail;
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
        bool iscycle(node* head)
        {
            node* slow= head; 
            node* fast = head;
while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;//+1;
    fast=fast->next->next;//+2
    if(slow==fast)
    {
        cout<<" cycle exist\n"<<endl;
        return true;
    }
}
cout<<"cycle doestnot exist\n"<<endl;
return false;
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
		ll.printlist();
        ll.iscycle(ll.head);
        ll.tail->next=ll.head;
        ll.iscycle(ll.head);
		return 0;
	}