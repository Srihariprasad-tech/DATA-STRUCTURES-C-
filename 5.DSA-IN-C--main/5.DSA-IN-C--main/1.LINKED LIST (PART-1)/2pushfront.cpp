#include<stdio.h>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	public:
		node(int val)             // it is a class  of creating a new node by inatilazting the value of input and creating a ptr named as next which is a null//
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
			node* newnode=new node(val);//new= dynamically allocated memory//
			if(head==NULL)
			{
				head=tail=newnode;
			}
			else
			{ 
				newnode->next=head;//newnode.next; // after the new node formation the ptr named as next should point to head node// 
				head=newnode;// after that the head should to assign to new node//
			}
		}
};
int main()
{
 	list ll;
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	//1->2->3->null
	return 0;
}
